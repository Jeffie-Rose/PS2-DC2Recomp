#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsEventRun__Fv
// Address: 0x1d3250 - 0x1d382c
void IsEventRun__Fv_0x1d3250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsEventRun__Fv_0x1d3250");
#endif

    switch (ctx->pc) {
        case 0x1d3250u: goto label_1d3250;
        case 0x1d3254u: goto label_1d3254;
        case 0x1d3258u: goto label_1d3258;
        case 0x1d325cu: goto label_1d325c;
        case 0x1d3260u: goto label_1d3260;
        case 0x1d3264u: goto label_1d3264;
        case 0x1d3268u: goto label_1d3268;
        case 0x1d326cu: goto label_1d326c;
        case 0x1d3270u: goto label_1d3270;
        case 0x1d3274u: goto label_1d3274;
        case 0x1d3278u: goto label_1d3278;
        case 0x1d327cu: goto label_1d327c;
        case 0x1d3280u: goto label_1d3280;
        case 0x1d3284u: goto label_1d3284;
        case 0x1d3288u: goto label_1d3288;
        case 0x1d328cu: goto label_1d328c;
        case 0x1d3290u: goto label_1d3290;
        case 0x1d3294u: goto label_1d3294;
        case 0x1d3298u: goto label_1d3298;
        case 0x1d329cu: goto label_1d329c;
        case 0x1d32a0u: goto label_1d32a0;
        case 0x1d32a4u: goto label_1d32a4;
        case 0x1d32a8u: goto label_1d32a8;
        case 0x1d32acu: goto label_1d32ac;
        case 0x1d32b0u: goto label_1d32b0;
        case 0x1d32b4u: goto label_1d32b4;
        case 0x1d32b8u: goto label_1d32b8;
        case 0x1d32bcu: goto label_1d32bc;
        case 0x1d32c0u: goto label_1d32c0;
        case 0x1d32c4u: goto label_1d32c4;
        case 0x1d32c8u: goto label_1d32c8;
        case 0x1d32ccu: goto label_1d32cc;
        case 0x1d32d0u: goto label_1d32d0;
        case 0x1d32d4u: goto label_1d32d4;
        case 0x1d32d8u: goto label_1d32d8;
        case 0x1d32dcu: goto label_1d32dc;
        case 0x1d32e0u: goto label_1d32e0;
        case 0x1d32e4u: goto label_1d32e4;
        case 0x1d32e8u: goto label_1d32e8;
        case 0x1d32ecu: goto label_1d32ec;
        case 0x1d32f0u: goto label_1d32f0;
        case 0x1d32f4u: goto label_1d32f4;
        case 0x1d32f8u: goto label_1d32f8;
        case 0x1d32fcu: goto label_1d32fc;
        case 0x1d3300u: goto label_1d3300;
        case 0x1d3304u: goto label_1d3304;
        case 0x1d3308u: goto label_1d3308;
        case 0x1d330cu: goto label_1d330c;
        case 0x1d3310u: goto label_1d3310;
        case 0x1d3314u: goto label_1d3314;
        case 0x1d3318u: goto label_1d3318;
        case 0x1d331cu: goto label_1d331c;
        case 0x1d3320u: goto label_1d3320;
        case 0x1d3324u: goto label_1d3324;
        case 0x1d3328u: goto label_1d3328;
        case 0x1d332cu: goto label_1d332c;
        case 0x1d3330u: goto label_1d3330;
        case 0x1d3334u: goto label_1d3334;
        case 0x1d3338u: goto label_1d3338;
        case 0x1d333cu: goto label_1d333c;
        case 0x1d3340u: goto label_1d3340;
        case 0x1d3344u: goto label_1d3344;
        case 0x1d3348u: goto label_1d3348;
        case 0x1d334cu: goto label_1d334c;
        case 0x1d3350u: goto label_1d3350;
        case 0x1d3354u: goto label_1d3354;
        case 0x1d3358u: goto label_1d3358;
        case 0x1d335cu: goto label_1d335c;
        case 0x1d3360u: goto label_1d3360;
        case 0x1d3364u: goto label_1d3364;
        case 0x1d3368u: goto label_1d3368;
        case 0x1d336cu: goto label_1d336c;
        case 0x1d3370u: goto label_1d3370;
        case 0x1d3374u: goto label_1d3374;
        case 0x1d3378u: goto label_1d3378;
        case 0x1d337cu: goto label_1d337c;
        case 0x1d3380u: goto label_1d3380;
        case 0x1d3384u: goto label_1d3384;
        case 0x1d3388u: goto label_1d3388;
        case 0x1d338cu: goto label_1d338c;
        case 0x1d3390u: goto label_1d3390;
        case 0x1d3394u: goto label_1d3394;
        case 0x1d3398u: goto label_1d3398;
        case 0x1d339cu: goto label_1d339c;
        case 0x1d33a0u: goto label_1d33a0;
        case 0x1d33a4u: goto label_1d33a4;
        case 0x1d33a8u: goto label_1d33a8;
        case 0x1d33acu: goto label_1d33ac;
        case 0x1d33b0u: goto label_1d33b0;
        case 0x1d33b4u: goto label_1d33b4;
        case 0x1d33b8u: goto label_1d33b8;
        case 0x1d33bcu: goto label_1d33bc;
        case 0x1d33c0u: goto label_1d33c0;
        case 0x1d33c4u: goto label_1d33c4;
        case 0x1d33c8u: goto label_1d33c8;
        case 0x1d33ccu: goto label_1d33cc;
        case 0x1d33d0u: goto label_1d33d0;
        case 0x1d33d4u: goto label_1d33d4;
        case 0x1d33d8u: goto label_1d33d8;
        case 0x1d33dcu: goto label_1d33dc;
        case 0x1d33e0u: goto label_1d33e0;
        case 0x1d33e4u: goto label_1d33e4;
        case 0x1d33e8u: goto label_1d33e8;
        case 0x1d33ecu: goto label_1d33ec;
        case 0x1d33f0u: goto label_1d33f0;
        case 0x1d33f4u: goto label_1d33f4;
        case 0x1d33f8u: goto label_1d33f8;
        case 0x1d33fcu: goto label_1d33fc;
        case 0x1d3400u: goto label_1d3400;
        case 0x1d3404u: goto label_1d3404;
        case 0x1d3408u: goto label_1d3408;
        case 0x1d340cu: goto label_1d340c;
        case 0x1d3410u: goto label_1d3410;
        case 0x1d3414u: goto label_1d3414;
        case 0x1d3418u: goto label_1d3418;
        case 0x1d341cu: goto label_1d341c;
        case 0x1d3420u: goto label_1d3420;
        case 0x1d3424u: goto label_1d3424;
        case 0x1d3428u: goto label_1d3428;
        case 0x1d342cu: goto label_1d342c;
        case 0x1d3430u: goto label_1d3430;
        case 0x1d3434u: goto label_1d3434;
        case 0x1d3438u: goto label_1d3438;
        case 0x1d343cu: goto label_1d343c;
        case 0x1d3440u: goto label_1d3440;
        case 0x1d3444u: goto label_1d3444;
        case 0x1d3448u: goto label_1d3448;
        case 0x1d344cu: goto label_1d344c;
        case 0x1d3450u: goto label_1d3450;
        case 0x1d3454u: goto label_1d3454;
        case 0x1d3458u: goto label_1d3458;
        case 0x1d345cu: goto label_1d345c;
        case 0x1d3460u: goto label_1d3460;
        case 0x1d3464u: goto label_1d3464;
        case 0x1d3468u: goto label_1d3468;
        case 0x1d346cu: goto label_1d346c;
        case 0x1d3470u: goto label_1d3470;
        case 0x1d3474u: goto label_1d3474;
        case 0x1d3478u: goto label_1d3478;
        case 0x1d347cu: goto label_1d347c;
        case 0x1d3480u: goto label_1d3480;
        case 0x1d3484u: goto label_1d3484;
        case 0x1d3488u: goto label_1d3488;
        case 0x1d348cu: goto label_1d348c;
        case 0x1d3490u: goto label_1d3490;
        case 0x1d3494u: goto label_1d3494;
        case 0x1d3498u: goto label_1d3498;
        case 0x1d349cu: goto label_1d349c;
        case 0x1d34a0u: goto label_1d34a0;
        case 0x1d34a4u: goto label_1d34a4;
        case 0x1d34a8u: goto label_1d34a8;
        case 0x1d34acu: goto label_1d34ac;
        case 0x1d34b0u: goto label_1d34b0;
        case 0x1d34b4u: goto label_1d34b4;
        case 0x1d34b8u: goto label_1d34b8;
        case 0x1d34bcu: goto label_1d34bc;
        case 0x1d34c0u: goto label_1d34c0;
        case 0x1d34c4u: goto label_1d34c4;
        case 0x1d34c8u: goto label_1d34c8;
        case 0x1d34ccu: goto label_1d34cc;
        case 0x1d34d0u: goto label_1d34d0;
        case 0x1d34d4u: goto label_1d34d4;
        case 0x1d34d8u: goto label_1d34d8;
        case 0x1d34dcu: goto label_1d34dc;
        case 0x1d34e0u: goto label_1d34e0;
        case 0x1d34e4u: goto label_1d34e4;
        case 0x1d34e8u: goto label_1d34e8;
        case 0x1d34ecu: goto label_1d34ec;
        case 0x1d34f0u: goto label_1d34f0;
        case 0x1d34f4u: goto label_1d34f4;
        case 0x1d34f8u: goto label_1d34f8;
        case 0x1d34fcu: goto label_1d34fc;
        case 0x1d3500u: goto label_1d3500;
        case 0x1d3504u: goto label_1d3504;
        case 0x1d3508u: goto label_1d3508;
        case 0x1d350cu: goto label_1d350c;
        case 0x1d3510u: goto label_1d3510;
        case 0x1d3514u: goto label_1d3514;
        case 0x1d3518u: goto label_1d3518;
        case 0x1d351cu: goto label_1d351c;
        case 0x1d3520u: goto label_1d3520;
        case 0x1d3524u: goto label_1d3524;
        case 0x1d3528u: goto label_1d3528;
        case 0x1d352cu: goto label_1d352c;
        case 0x1d3530u: goto label_1d3530;
        case 0x1d3534u: goto label_1d3534;
        case 0x1d3538u: goto label_1d3538;
        case 0x1d353cu: goto label_1d353c;
        case 0x1d3540u: goto label_1d3540;
        case 0x1d3544u: goto label_1d3544;
        case 0x1d3548u: goto label_1d3548;
        case 0x1d354cu: goto label_1d354c;
        case 0x1d3550u: goto label_1d3550;
        case 0x1d3554u: goto label_1d3554;
        case 0x1d3558u: goto label_1d3558;
        case 0x1d355cu: goto label_1d355c;
        case 0x1d3560u: goto label_1d3560;
        case 0x1d3564u: goto label_1d3564;
        case 0x1d3568u: goto label_1d3568;
        case 0x1d356cu: goto label_1d356c;
        case 0x1d3570u: goto label_1d3570;
        case 0x1d3574u: goto label_1d3574;
        case 0x1d3578u: goto label_1d3578;
        case 0x1d357cu: goto label_1d357c;
        case 0x1d3580u: goto label_1d3580;
        case 0x1d3584u: goto label_1d3584;
        case 0x1d3588u: goto label_1d3588;
        case 0x1d358cu: goto label_1d358c;
        case 0x1d3590u: goto label_1d3590;
        case 0x1d3594u: goto label_1d3594;
        case 0x1d3598u: goto label_1d3598;
        case 0x1d359cu: goto label_1d359c;
        case 0x1d35a0u: goto label_1d35a0;
        case 0x1d35a4u: goto label_1d35a4;
        case 0x1d35a8u: goto label_1d35a8;
        case 0x1d35acu: goto label_1d35ac;
        case 0x1d35b0u: goto label_1d35b0;
        case 0x1d35b4u: goto label_1d35b4;
        case 0x1d35b8u: goto label_1d35b8;
        case 0x1d35bcu: goto label_1d35bc;
        case 0x1d35c0u: goto label_1d35c0;
        case 0x1d35c4u: goto label_1d35c4;
        case 0x1d35c8u: goto label_1d35c8;
        case 0x1d35ccu: goto label_1d35cc;
        case 0x1d35d0u: goto label_1d35d0;
        case 0x1d35d4u: goto label_1d35d4;
        case 0x1d35d8u: goto label_1d35d8;
        case 0x1d35dcu: goto label_1d35dc;
        case 0x1d35e0u: goto label_1d35e0;
        case 0x1d35e4u: goto label_1d35e4;
        case 0x1d35e8u: goto label_1d35e8;
        case 0x1d35ecu: goto label_1d35ec;
        case 0x1d35f0u: goto label_1d35f0;
        case 0x1d35f4u: goto label_1d35f4;
        case 0x1d35f8u: goto label_1d35f8;
        case 0x1d35fcu: goto label_1d35fc;
        case 0x1d3600u: goto label_1d3600;
        case 0x1d3604u: goto label_1d3604;
        case 0x1d3608u: goto label_1d3608;
        case 0x1d360cu: goto label_1d360c;
        case 0x1d3610u: goto label_1d3610;
        case 0x1d3614u: goto label_1d3614;
        case 0x1d3618u: goto label_1d3618;
        case 0x1d361cu: goto label_1d361c;
        case 0x1d3620u: goto label_1d3620;
        case 0x1d3624u: goto label_1d3624;
        case 0x1d3628u: goto label_1d3628;
        case 0x1d362cu: goto label_1d362c;
        case 0x1d3630u: goto label_1d3630;
        case 0x1d3634u: goto label_1d3634;
        case 0x1d3638u: goto label_1d3638;
        case 0x1d363cu: goto label_1d363c;
        case 0x1d3640u: goto label_1d3640;
        case 0x1d3644u: goto label_1d3644;
        case 0x1d3648u: goto label_1d3648;
        case 0x1d364cu: goto label_1d364c;
        case 0x1d3650u: goto label_1d3650;
        case 0x1d3654u: goto label_1d3654;
        case 0x1d3658u: goto label_1d3658;
        case 0x1d365cu: goto label_1d365c;
        case 0x1d3660u: goto label_1d3660;
        case 0x1d3664u: goto label_1d3664;
        case 0x1d3668u: goto label_1d3668;
        case 0x1d366cu: goto label_1d366c;
        case 0x1d3670u: goto label_1d3670;
        case 0x1d3674u: goto label_1d3674;
        case 0x1d3678u: goto label_1d3678;
        case 0x1d367cu: goto label_1d367c;
        case 0x1d3680u: goto label_1d3680;
        case 0x1d3684u: goto label_1d3684;
        case 0x1d3688u: goto label_1d3688;
        case 0x1d368cu: goto label_1d368c;
        case 0x1d3690u: goto label_1d3690;
        case 0x1d3694u: goto label_1d3694;
        case 0x1d3698u: goto label_1d3698;
        case 0x1d369cu: goto label_1d369c;
        case 0x1d36a0u: goto label_1d36a0;
        case 0x1d36a4u: goto label_1d36a4;
        case 0x1d36a8u: goto label_1d36a8;
        case 0x1d36acu: goto label_1d36ac;
        case 0x1d36b0u: goto label_1d36b0;
        case 0x1d36b4u: goto label_1d36b4;
        case 0x1d36b8u: goto label_1d36b8;
        case 0x1d36bcu: goto label_1d36bc;
        case 0x1d36c0u: goto label_1d36c0;
        case 0x1d36c4u: goto label_1d36c4;
        case 0x1d36c8u: goto label_1d36c8;
        case 0x1d36ccu: goto label_1d36cc;
        case 0x1d36d0u: goto label_1d36d0;
        case 0x1d36d4u: goto label_1d36d4;
        case 0x1d36d8u: goto label_1d36d8;
        case 0x1d36dcu: goto label_1d36dc;
        case 0x1d36e0u: goto label_1d36e0;
        case 0x1d36e4u: goto label_1d36e4;
        case 0x1d36e8u: goto label_1d36e8;
        case 0x1d36ecu: goto label_1d36ec;
        case 0x1d36f0u: goto label_1d36f0;
        case 0x1d36f4u: goto label_1d36f4;
        case 0x1d36f8u: goto label_1d36f8;
        case 0x1d36fcu: goto label_1d36fc;
        case 0x1d3700u: goto label_1d3700;
        case 0x1d3704u: goto label_1d3704;
        case 0x1d3708u: goto label_1d3708;
        case 0x1d370cu: goto label_1d370c;
        case 0x1d3710u: goto label_1d3710;
        case 0x1d3714u: goto label_1d3714;
        case 0x1d3718u: goto label_1d3718;
        case 0x1d371cu: goto label_1d371c;
        case 0x1d3720u: goto label_1d3720;
        case 0x1d3724u: goto label_1d3724;
        case 0x1d3728u: goto label_1d3728;
        case 0x1d372cu: goto label_1d372c;
        case 0x1d3730u: goto label_1d3730;
        case 0x1d3734u: goto label_1d3734;
        case 0x1d3738u: goto label_1d3738;
        case 0x1d373cu: goto label_1d373c;
        case 0x1d3740u: goto label_1d3740;
        case 0x1d3744u: goto label_1d3744;
        case 0x1d3748u: goto label_1d3748;
        case 0x1d374cu: goto label_1d374c;
        case 0x1d3750u: goto label_1d3750;
        case 0x1d3754u: goto label_1d3754;
        case 0x1d3758u: goto label_1d3758;
        case 0x1d375cu: goto label_1d375c;
        case 0x1d3760u: goto label_1d3760;
        case 0x1d3764u: goto label_1d3764;
        case 0x1d3768u: goto label_1d3768;
        case 0x1d376cu: goto label_1d376c;
        case 0x1d3770u: goto label_1d3770;
        case 0x1d3774u: goto label_1d3774;
        case 0x1d3778u: goto label_1d3778;
        case 0x1d377cu: goto label_1d377c;
        case 0x1d3780u: goto label_1d3780;
        case 0x1d3784u: goto label_1d3784;
        case 0x1d3788u: goto label_1d3788;
        case 0x1d378cu: goto label_1d378c;
        case 0x1d3790u: goto label_1d3790;
        case 0x1d3794u: goto label_1d3794;
        case 0x1d3798u: goto label_1d3798;
        case 0x1d379cu: goto label_1d379c;
        case 0x1d37a0u: goto label_1d37a0;
        case 0x1d37a4u: goto label_1d37a4;
        case 0x1d37a8u: goto label_1d37a8;
        case 0x1d37acu: goto label_1d37ac;
        case 0x1d37b0u: goto label_1d37b0;
        case 0x1d37b4u: goto label_1d37b4;
        case 0x1d37b8u: goto label_1d37b8;
        case 0x1d37bcu: goto label_1d37bc;
        case 0x1d37c0u: goto label_1d37c0;
        case 0x1d37c4u: goto label_1d37c4;
        case 0x1d37c8u: goto label_1d37c8;
        case 0x1d37ccu: goto label_1d37cc;
        case 0x1d37d0u: goto label_1d37d0;
        case 0x1d37d4u: goto label_1d37d4;
        case 0x1d37d8u: goto label_1d37d8;
        case 0x1d37dcu: goto label_1d37dc;
        case 0x1d37e0u: goto label_1d37e0;
        case 0x1d37e4u: goto label_1d37e4;
        case 0x1d37e8u: goto label_1d37e8;
        case 0x1d37ecu: goto label_1d37ec;
        case 0x1d37f0u: goto label_1d37f0;
        case 0x1d37f4u: goto label_1d37f4;
        case 0x1d37f8u: goto label_1d37f8;
        case 0x1d37fcu: goto label_1d37fc;
        case 0x1d3800u: goto label_1d3800;
        case 0x1d3804u: goto label_1d3804;
        case 0x1d3808u: goto label_1d3808;
        case 0x1d380cu: goto label_1d380c;
        case 0x1d3810u: goto label_1d3810;
        case 0x1d3814u: goto label_1d3814;
        case 0x1d3818u: goto label_1d3818;
        case 0x1d381cu: goto label_1d381c;
        case 0x1d3820u: goto label_1d3820;
        case 0x1d3824u: goto label_1d3824;
        case 0x1d3828u: goto label_1d3828;
        default: break;
    }

    ctx->pc = 0x1d3250u;

label_1d3250:
    // 0x1d3250: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1d3250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1d3254:
    // 0x1d3254: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d3254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d3258:
    // 0x1d3258: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d3258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d325c:
    // 0x1d325c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d3260:
    // 0x1d3260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d3260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d3264:
    // 0x1d3264: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d3264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d3268:
    // 0x1d3268: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d3268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d326c:
    // 0x1d326c: 0x10800168  beqz        $a0, . + 4 + (0x168 << 2)
label_1d3270:
    if (ctx->pc == 0x1D3270u) {
        ctx->pc = 0x1D3274u;
        goto label_1d3274;
    }
    ctx->pc = 0x1D326Cu;
    {
        const bool branch_taken_0x1d326c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d326c) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D3274u;
label_1d3274:
    // 0x1d3274: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d3274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d3278:
    // 0x1d3278: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d3278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d327c:
    // 0x1d327c: 0x320f809  jalr        $t9
label_1d3280:
    if (ctx->pc == 0x1D3280u) {
        ctx->pc = 0x1D3280u;
            // 0x1d3280: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1D3284u;
        goto label_1d3284;
    }
    ctx->pc = 0x1D327Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D3284u);
        ctx->pc = 0x1D3280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D327Cu;
            // 0x1d3280: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D3284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D3284u; }
            if (ctx->pc != 0x1D3284u) { return; }
        }
        }
    }
    ctx->pc = 0x1D3284u;
label_1d3284:
    // 0x1d3284: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d3284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d3288:
    // 0x1d3288: 0xc0683a8  jal         func_1A0EA0
label_1d328c:
    if (ctx->pc == 0x1D328Cu) {
        ctx->pc = 0x1D328Cu;
            // 0x1d328c: 0x24530044  addiu       $s3, $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
        ctx->pc = 0x1D3290u;
        goto label_1d3290;
    }
    ctx->pc = 0x1D3288u;
    SET_GPR_U32(ctx, 31, 0x1D3290u);
    ctx->pc = 0x1D328Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3288u;
            // 0x1d328c: 0x24530044  addiu       $s3, $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3290u; }
        if (ctx->pc != 0x1D3290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3290u; }
        if (ctx->pc != 0x1D3290u) { return; }
    }
    ctx->pc = 0x1D3290u;
label_1d3290:
    // 0x1d3290: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d3290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3294:
    // 0x1d3294: 0x1200015e  beqz        $s0, . + 4 + (0x15E << 2)
label_1d3298:
    if (ctx->pc == 0x1D3298u) {
        ctx->pc = 0x1D3298u;
            // 0x1d3298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D329Cu;
        goto label_1d329c;
    }
    ctx->pc = 0x1D3294u;
    {
        const bool branch_taken_0x1d3294 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3294u;
            // 0x1d3298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3294) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D329Cu;
label_1d329c:
    // 0x1d329c: 0xc0680f8  jal         func_1A03E0
label_1d32a0:
    if (ctx->pc == 0x1D32A0u) {
        ctx->pc = 0x1D32A4u;
        goto label_1d32a4;
    }
    ctx->pc = 0x1D329Cu;
    SET_GPR_U32(ctx, 31, 0x1D32A4u);
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D32A4u; }
        if (ctx->pc != 0x1D32A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D32A4u; }
        if (ctx->pc != 0x1D32A4u) { return; }
    }
    ctx->pc = 0x1D32A4u;
label_1d32a4:
    // 0x1d32a4: 0x1840015a  blez        $v0, . + 4 + (0x15A << 2)
label_1d32a8:
    if (ctx->pc == 0x1D32A8u) {
        ctx->pc = 0x1D32ACu;
        goto label_1d32ac;
    }
    ctx->pc = 0x1D32A4u;
    {
        const bool branch_taken_0x1d32a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d32a4) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D32ACu;
label_1d32ac:
    // 0x1d32ac: 0x8f838dd8  lw          $v1, -0x7228($gp)
    ctx->pc = 0x1d32acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d32b0:
    // 0x1d32b0: 0x8c630918  lw          $v1, 0x918($v1)
    ctx->pc = 0x1d32b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2328)));
label_1d32b4:
    // 0x1d32b4: 0x10600156  beqz        $v1, . + 4 + (0x156 << 2)
label_1d32b8:
    if (ctx->pc == 0x1D32B8u) {
        ctx->pc = 0x1D32BCu;
        goto label_1d32bc;
    }
    ctx->pc = 0x1D32B4u;
    {
        const bool branch_taken_0x1d32b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d32b4) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D32BCu;
label_1d32bc:
    // 0x1d32bc: 0x83828e34  lb          $v0, -0x71CC($gp)
    ctx->pc = 0x1d32bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938164)));
label_1d32c0:
    // 0x1d32c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d32c4:
    if (ctx->pc == 0x1D32C4u) {
        ctx->pc = 0x1D32C4u;
            // 0x1d32c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D32C8u;
        goto label_1d32c8;
    }
    ctx->pc = 0x1D32C0u;
    {
        const bool branch_taken_0x1d32c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D32C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D32C0u;
            // 0x1d32c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32c0) {
            ctx->pc = 0x1D32D0u;
            goto label_1d32d0;
        }
    }
    ctx->pc = 0x1D32C8u;
label_1d32c8:
    // 0x1d32c8: 0xaf808e30  sw          $zero, -0x71D0($gp)
    ctx->pc = 0x1d32c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938160), GPR_U32(ctx, 0));
label_1d32cc:
    // 0x1d32cc: 0xa3828e34  sb          $v0, -0x71CC($gp)
    ctx->pc = 0x1d32ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938164), (uint8_t)GPR_U32(ctx, 2));
label_1d32d0:
    // 0x1d32d0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1d32d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1d32d4:
    // 0x1d32d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d32d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d32d8:
    // 0x1d32d8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1d32dc:
    if (ctx->pc == 0x1D32DCu) {
        ctx->pc = 0x1D32E0u;
        goto label_1d32e0;
    }
    ctx->pc = 0x1D32D8u;
    {
        const bool branch_taken_0x1d32d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d32d8) {
            ctx->pc = 0x1D3308u;
            goto label_1d3308;
        }
    }
    ctx->pc = 0x1D32E0u;
label_1d32e0:
    // 0x1d32e0: 0x8f828e30  lw          $v0, -0x71D0($gp)
    ctx->pc = 0x1d32e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938160)));
label_1d32e4:
    // 0x1d32e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d32e8:
    // 0x1d32e8: 0xaf828e30  sw          $v0, -0x71D0($gp)
    ctx->pc = 0x1d32e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938160), GPR_U32(ctx, 2));
label_1d32ec:
    // 0x1d32ec: 0x8f828e30  lw          $v0, -0x71D0($gp)
    ctx->pc = 0x1d32ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938160)));
label_1d32f0:
    // 0x1d32f0: 0x28410097  slti        $at, $v0, 0x97
    ctx->pc = 0x1d32f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_1d32f4:
    // 0x1d32f4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1d32f8:
    if (ctx->pc == 0x1D32F8u) {
        ctx->pc = 0x1D32F8u;
            // 0x1d32f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D32FCu;
        goto label_1d32fc;
    }
    ctx->pc = 0x1D32F4u;
    {
        const bool branch_taken_0x1d32f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D32F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D32F4u;
            // 0x1d32f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32f4) {
            ctx->pc = 0x1D3308u;
            goto label_1d3308;
        }
    }
    ctx->pc = 0x1D32FCu;
label_1d32fc:
    // 0x1d32fc: 0xc067c98  jal         func_19F260
label_1d3300:
    if (ctx->pc == 0x1D3300u) {
        ctx->pc = 0x1D3300u;
            // 0x1d3300: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D3304u;
        goto label_1d3304;
    }
    ctx->pc = 0x1D32FCu;
    SET_GPR_U32(ctx, 31, 0x1D3304u);
    ctx->pc = 0x1D3300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D32FCu;
            // 0x1d3300: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F260u;
    if (runtime->hasFunction(0x19F260u)) {
        auto targetFn = runtime->lookupFunction(0x19F260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3304u; }
        if (ctx->pc != 0x1D3304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UseNPCPoint__16CBattleCharaInfoFi_0x19f260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3304u; }
        if (ctx->pc != 0x1D3304u) { return; }
    }
    ctx->pc = 0x1D3304u;
label_1d3304:
    // 0x1d3304: 0xaf808e30  sw          $zero, -0x71D0($gp)
    ctx->pc = 0x1d3304u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938160), GPR_U32(ctx, 0));
label_1d3308:
    // 0x1d3308: 0x8f838dd8  lw          $v1, -0x7228($gp)
    ctx->pc = 0x1d3308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d330c:
    // 0x1d330c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d3310:
    // 0x1d3310: 0x84630964  lh          $v1, 0x964($v1)
    ctx->pc = 0x1d3310u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2404)));
label_1d3314:
    // 0x1d3314: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
label_1d3318:
    if (ctx->pc == 0x1D3318u) {
        ctx->pc = 0x1D3318u;
            // 0x1d3318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D331Cu;
        goto label_1d331c;
    }
    ctx->pc = 0x1D3314u;
    {
        const bool branch_taken_0x1d3314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3314u;
            // 0x1d3318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3314) {
            ctx->pc = 0x1D341Cu;
            goto label_1d341c;
        }
    }
    ctx->pc = 0x1D331Cu;
label_1d331c:
    // 0x1d331c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1d331cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3320:
    // 0x1d3320: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d3324:
    // 0x1d3324: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
label_1d3328:
    if (ctx->pc == 0x1D3328u) {
        ctx->pc = 0x1D3328u;
            // 0x1d3328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D332Cu;
        goto label_1d332c;
    }
    ctx->pc = 0x1D3324u;
    {
        const bool branch_taken_0x1d3324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3324u;
            // 0x1d3328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3324) {
            ctx->pc = 0x1D3418u;
            goto label_1d3418;
        }
    }
    ctx->pc = 0x1D332Cu;
label_1d332c:
    // 0x1d332c: 0xc068140  jal         func_1A0500
label_1d3330:
    if (ctx->pc == 0x1D3330u) {
        ctx->pc = 0x1D3334u;
        goto label_1d3334;
    }
    ctx->pc = 0x1D332Cu;
    SET_GPR_U32(ctx, 31, 0x1D3334u);
    ctx->pc = 0x1A0500u;
    if (runtime->hasFunction(0x1A0500u)) {
        auto targetFn = runtime->lookupFunction(0x1A0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3334u; }
        if (ctx->pc != 0x1D3334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttr__16CBattleCharaInfoFv_0x1a0500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3334u; }
        if (ctx->pc != 0x1D3334u) { return; }
    }
    ctx->pc = 0x1D3334u;
label_1d3334:
    // 0x1d3334: 0x3052006f  andi        $s2, $v0, 0x6F
    ctx->pc = 0x1d3334u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)111);
label_1d3338:
    // 0x1d3338: 0xc0680e8  jal         func_1A03A0
label_1d333c:
    if (ctx->pc == 0x1D333Cu) {
        ctx->pc = 0x1D333Cu;
            // 0x1d333c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3340u;
        goto label_1d3340;
    }
    ctx->pc = 0x1D3338u;
    SET_GPR_U32(ctx, 31, 0x1D3340u);
    ctx->pc = 0x1D333Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3338u;
            // 0x1d333c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03A0u;
    if (runtime->hasFunction(0x1A03A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3340u; }
        if (ctx->pc != 0x1D3340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaxHp_i__16CBattleCharaInfoFv_0x1a03a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3340u; }
        if (ctx->pc != 0x1D3340u) { return; }
    }
    ctx->pc = 0x1D3340u;
label_1d3340:
    // 0x1d3340: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d3340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d3344:
    // 0x1d3344: 0xc0680f8  jal         func_1A03E0
label_1d3348:
    if (ctx->pc == 0x1D3348u) {
        ctx->pc = 0x1D3348u;
            // 0x1d3348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D334Cu;
        goto label_1d334c;
    }
    ctx->pc = 0x1D3344u;
    SET_GPR_U32(ctx, 31, 0x1D334Cu);
    ctx->pc = 0x1D3348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3344u;
            // 0x1d3348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D334Cu; }
        if (ctx->pc != 0x1D334Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D334Cu; }
        if (ctx->pc != 0x1D334Cu) { return; }
    }
    ctx->pc = 0x1D334Cu;
label_1d334c:
    // 0x1d334c: 0x51082a  slt         $at, $v0, $s1
    ctx->pc = 0x1d334cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d3350:
    // 0x1d3350: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1d3354:
    if (ctx->pc == 0x1D3354u) {
        ctx->pc = 0x1D3354u;
            // 0x1d3354: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D3358u;
        goto label_1d3358;
    }
    ctx->pc = 0x1D3350u;
    {
        const bool branch_taken_0x1d3350 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3350u;
            // 0x1d3354: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3350) {
            ctx->pc = 0x1D3360u;
            goto label_1d3360;
        }
    }
    ctx->pc = 0x1D3358u;
label_1d3358:
    // 0x1d3358: 0x1240002f  beqz        $s2, . + 4 + (0x2F << 2)
label_1d335c:
    if (ctx->pc == 0x1D335Cu) {
        ctx->pc = 0x1D3360u;
        goto label_1d3360;
    }
    ctx->pc = 0x1D3358u;
    {
        const bool branch_taken_0x1d3358 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3358) {
            ctx->pc = 0x1D3418u;
            goto label_1d3418;
        }
    }
    ctx->pc = 0x1D3360u;
label_1d3360:
    // 0x1d3360: 0xc075588  jal         func_1D5620
label_1d3364:
    if (ctx->pc == 0x1D3364u) {
        ctx->pc = 0x1D3364u;
            // 0x1d3364: 0x24840630  addiu       $a0, $a0, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1584));
        ctx->pc = 0x1D3368u;
        goto label_1d3368;
    }
    ctx->pc = 0x1D3360u;
    SET_GPR_U32(ctx, 31, 0x1D3368u);
    ctx->pc = 0x1D3364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3360u;
            // 0x1d3364: 0x24840630  addiu       $a0, $a0, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5620u;
    if (runtime->hasFunction(0x1D5620u)) {
        auto targetFn = runtime->lookupFunction(0x1D5620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3368u; }
        if (ctx->pc != 0x1D3368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHealingTime__13CHealingPointFv_0x1d5620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3368u; }
        if (ctx->pc != 0x1D3368u) { return; }
    }
    ctx->pc = 0x1D3368u;
label_1d3368:
    // 0x1d3368: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1d336c:
    if (ctx->pc == 0x1D336Cu) {
        ctx->pc = 0x1D336Cu;
            // 0x1d336c: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x1D3370u;
        goto label_1d3370;
    }
    ctx->pc = 0x1D3368u;
    {
        const bool branch_taken_0x1d3368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D336Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3368u;
            // 0x1d336c: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3368) {
            ctx->pc = 0x1D3418u;
            goto label_1d3418;
        }
    }
    ctx->pc = 0x1D3370u;
label_1d3370:
    // 0x1d3370: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x1d3370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
label_1d3374:
    // 0x1d3374: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d3374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3378:
    // 0x1d3378: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d3378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d337c:
    // 0x1d337c: 0xc06802c  jal         func_1A00B0
label_1d3380:
    if (ctx->pc == 0x1D3380u) {
        ctx->pc = 0x1D3380u;
            // 0x1d3380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3384u;
        goto label_1d3384;
    }
    ctx->pc = 0x1D337Cu;
    SET_GPR_U32(ctx, 31, 0x1D3384u);
    ctx->pc = 0x1D3380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D337Cu;
            // 0x1d3380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B0u;
    if (runtime->hasFunction(0x1A00B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A00B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3384u; }
        if (ctx->pc != 0x1D3384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHp_Point__16CBattleCharaInfoFff_0x1a00b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3384u; }
        if (ctx->pc != 0x1D3384u) { return; }
    }
    ctx->pc = 0x1D3384u;
label_1d3384:
    // 0x1d3384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d3388:
    // 0x1d3388: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x1d3388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_1d338c:
    // 0x1d338c: 0xc068108  jal         func_1A0420
label_1d3390:
    if (ctx->pc == 0x1D3390u) {
        ctx->pc = 0x1D3390u;
            // 0x1d3390: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D3394u;
        goto label_1d3394;
    }
    ctx->pc = 0x1D338Cu;
    SET_GPR_U32(ctx, 31, 0x1D3394u);
    ctx->pc = 0x1D3390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D338Cu;
            // 0x1d3390: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0420u;
    if (runtime->hasFunction(0x1A0420u)) {
        auto targetFn = runtime->lookupFunction(0x1A0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3394u; }
        if (ctx->pc != 0x1D3394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttr__16CBattleCharaInfoFii_0x1a0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3394u; }
        if (ctx->pc != 0x1D3394u) { return; }
    }
    ctx->pc = 0x1D3394u;
label_1d3394:
    // 0x1d3394: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d3394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d3398:
    // 0x1d3398: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d3398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1d339c:
    // 0x1d339c: 0x24a56fb0  addiu       $a1, $a1, 0x6FB0
    ctx->pc = 0x1d339cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28592));
label_1d33a0:
    // 0x1d33a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d33a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d33a4:
    // 0x1d33a4: 0xc0b8498  jal         func_2E1260
label_1d33a8:
    if (ctx->pc == 0x1D33A8u) {
        ctx->pc = 0x1D33A8u;
            // 0x1d33a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D33ACu;
        goto label_1d33ac;
    }
    ctx->pc = 0x1D33A4u;
    SET_GPR_U32(ctx, 31, 0x1D33ACu);
    ctx->pc = 0x1D33A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D33A4u;
            // 0x1d33a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D33ACu; }
        if (ctx->pc != 0x1D33ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D33ACu; }
        if (ctx->pc != 0x1D33ACu) { return; }
    }
    ctx->pc = 0x1D33ACu;
label_1d33ac:
    // 0x1d33ac: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1d33acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1d33b0:
    // 0x1d33b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d33b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d33b4:
    // 0x1d33b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d33b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d33b8:
    // 0x1d33b8: 0xc0b891c  jal         func_2E2470
label_1d33bc:
    if (ctx->pc == 0x1D33BCu) {
        ctx->pc = 0x1D33BCu;
            // 0x1d33bc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D33C0u;
        goto label_1d33c0;
    }
    ctx->pc = 0x1D33B8u;
    SET_GPR_U32(ctx, 31, 0x1D33C0u);
    ctx->pc = 0x1D33BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D33B8u;
            // 0x1d33bc: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2470u;
    if (runtime->hasFunction(0x2E2470u)) {
        auto targetFn = runtime->lookupFunction(0x2E2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D33C0u; }
        if (ctx->pc != 0x1D33C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptTargetId__16CEffectScriptManFiii_0x2e2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D33C0u; }
        if (ctx->pc != 0x1D33C0u) { return; }
    }
    ctx->pc = 0x1D33C0u;
label_1d33c0:
    // 0x1d33c0: 0x8f878dd8  lw          $a3, -0x7228($gp)
    ctx->pc = 0x1d33c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d33c4:
    // 0x1d33c4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1d33c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1d33c8:
    // 0x1d33c8: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x1d33c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1d33cc:
    // 0x1d33cc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1d33ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d33d0:
    // 0x1d33d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d33d4:
    // 0x1d33d4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1d33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1d33d8:
    // 0x1d33d8: 0xa4e6067c  sh          $a2, 0x67C($a3)
    ctx->pc = 0x1d33d8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1660), (uint16_t)GPR_U32(ctx, 6));
label_1d33dc:
    // 0x1d33dc: 0xa4e5067e  sh          $a1, 0x67E($a3)
    ctx->pc = 0x1d33dcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1662), (uint16_t)GPR_U32(ctx, 5));
label_1d33e0:
    // 0x1d33e0: 0xa4e40680  sh          $a0, 0x680($a3)
    ctx->pc = 0x1d33e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1664), (uint16_t)GPR_U32(ctx, 4));
label_1d33e4:
    // 0x1d33e4: 0xa4e30682  sh          $v1, 0x682($a3)
    ctx->pc = 0x1d33e4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1666), (uint16_t)GPR_U32(ctx, 3));
label_1d33e8:
    // 0x1d33e8: 0xa4e20686  sh          $v0, 0x686($a3)
    ctx->pc = 0x1d33e8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1670), (uint16_t)GPR_U32(ctx, 2));
label_1d33ec:
    // 0x1d33ec: 0xa4e00684  sh          $zero, 0x684($a3)
    ctx->pc = 0x1d33ecu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 1668), (uint16_t)GPR_U32(ctx, 0));
label_1d33f0:
    // 0x1d33f0: 0xc064218  jal         func_190860
label_1d33f4:
    if (ctx->pc == 0x1D33F4u) {
        ctx->pc = 0x1D33F4u;
            // 0x1d33f4: 0xa4e00688  sh          $zero, 0x688($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 1672), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1D33F8u;
        goto label_1d33f8;
    }
    ctx->pc = 0x1D33F0u;
    SET_GPR_U32(ctx, 31, 0x1D33F8u);
    ctx->pc = 0x1D33F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D33F0u;
            // 0x1d33f4: 0xa4e00688  sh          $zero, 0x688($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 1672), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D33F8u; }
        if (ctx->pc != 0x1D33F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D33F8u; }
        if (ctx->pc != 0x1D33F8u) { return; }
    }
    ctx->pc = 0x1D33F8u;
label_1d33f8:
    // 0x1d33f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d33f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d33fc:
    // 0x1d33fc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d33fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d3400:
    // 0x1d3400: 0xc063818  jal         func_18E060
label_1d3404:
    if (ctx->pc == 0x1D3404u) {
        ctx->pc = 0x1D3404u;
            // 0x1d3404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3408u;
        goto label_1d3408;
    }
    ctx->pc = 0x1D3400u;
    SET_GPR_U32(ctx, 31, 0x1D3408u);
    ctx->pc = 0x1D3404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3400u;
            // 0x1d3404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3408u; }
        if (ctx->pc != 0x1D3408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3408u; }
        if (ctx->pc != 0x1D3408u) { return; }
    }
    ctx->pc = 0x1D3408u;
label_1d3408:
    // 0x1d3408: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d3408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d340c:
    // 0x1d340c: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x1d340cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_1d3410:
    // 0x1d3410: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1d3410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1d3414:
    // 0x1d3414: 0xac620098  sw          $v0, 0x98($v1)
    ctx->pc = 0x1d3414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 2));
label_1d3418:
    // 0x1d3418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d341c:
    // 0x1d341c: 0xc068140  jal         func_1A0500
label_1d3420:
    if (ctx->pc == 0x1D3420u) {
        ctx->pc = 0x1D3424u;
        goto label_1d3424;
    }
    ctx->pc = 0x1D341Cu;
    SET_GPR_U32(ctx, 31, 0x1D3424u);
    ctx->pc = 0x1A0500u;
    if (runtime->hasFunction(0x1A0500u)) {
        auto targetFn = runtime->lookupFunction(0x1A0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3424u; }
        if (ctx->pc != 0x1D3424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttr__16CBattleCharaInfoFv_0x1a0500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3424u; }
        if (ctx->pc != 0x1D3424u) { return; }
    }
    ctx->pc = 0x1D3424u;
label_1d3424:
    // 0x1d3424: 0x30430028  andi        $v1, $v0, 0x28
    ctx->pc = 0x1d3424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)40);
label_1d3428:
    // 0x1d3428: 0x146000f9  bnez        $v1, . + 4 + (0xF9 << 2)
label_1d342c:
    if (ctx->pc == 0x1D342Cu) {
        ctx->pc = 0x1D3430u;
        goto label_1d3430;
    }
    ctx->pc = 0x1D3428u;
    {
        const bool branch_taken_0x1d3428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3428) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D3430u;
label_1d3430:
    // 0x1d3430: 0xc077528  jal         func_1DD4A0
label_1d3434:
    if (ctx->pc == 0x1D3434u) {
        ctx->pc = 0x1D3434u;
            // 0x1d3434: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1D3438u;
        goto label_1d3438;
    }
    ctx->pc = 0x1D3430u;
    SET_GPR_U32(ctx, 31, 0x1D3438u);
    ctx->pc = 0x1D3434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3430u;
            // 0x1d3434: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4A0u;
    if (runtime->hasFunction(0x1DD4A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3438u; }
        if (ctx->pc != 0x1D3438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRunEvent__11CMonsterManFv_0x1dd4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3438u; }
        if (ctx->pc != 0x1D3438u) { return; }
    }
    ctx->pc = 0x1D3438u;
label_1d3438:
    // 0x1d3438: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d3438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d343c:
    // 0x1d343c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1d3440:
    if (ctx->pc == 0x1D3440u) {
        ctx->pc = 0x1D3444u;
        goto label_1d3444;
    }
    ctx->pc = 0x1D343Cu;
    {
        const bool branch_taken_0x1d343c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d343c) {
            ctx->pc = 0x1D344Cu;
            goto label_1d344c;
        }
    }
    ctx->pc = 0x1D3444u;
label_1d3444:
    // 0x1d3444: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_1d3448:
    if (ctx->pc == 0x1D3448u) {
        ctx->pc = 0x1D3448u;
            // 0x1d3448: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1D344Cu;
        goto label_1d344c;
    }
    ctx->pc = 0x1D3444u;
    {
        const bool branch_taken_0x1d3444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3444u;
            // 0x1d3448: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3444) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D344Cu;
label_1d344c:
    // 0x1d344c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d344cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d3450:
    // 0x1d3450: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d3450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3454:
    // 0x1d3454: 0xc076dc0  jal         func_1DB700
label_1d3458:
    if (ctx->pc == 0x1D3458u) {
        ctx->pc = 0x1D3458u;
            // 0x1d3458: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1D345Cu;
        goto label_1d345c;
    }
    ctx->pc = 0x1D3454u;
    SET_GPR_U32(ctx, 31, 0x1D345Cu);
    ctx->pc = 0x1D3458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3454u;
            // 0x1d3458: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB700u;
    if (runtime->hasFunction(0x1DB700u)) {
        auto targetFn = runtime->lookupFunction(0x1DB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D345Cu; }
        if (ctx->pc != 0x1D345Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterNum__11CMonsterManFf_0x1db700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D345Cu; }
        if (ctx->pc != 0x1D345Cu) { return; }
    }
    ctx->pc = 0x1D345Cu;
label_1d345c:
    // 0x1d345c: 0x8f848dd4  lw          $a0, -0x722C($gp)
    ctx->pc = 0x1d345cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938068)));
label_1d3460:
    // 0x1d3460: 0xc0a329c  jal         func_28CA70
label_1d3464:
    if (ctx->pc == 0x1D3464u) {
        ctx->pc = 0x1D3464u;
            // 0x1d3464: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3468u;
        goto label_1d3468;
    }
    ctx->pc = 0x1D3460u;
    SET_GPR_U32(ctx, 31, 0x1D3468u);
    ctx->pc = 0x1D3464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3460u;
            // 0x1d3464: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CA70u;
    if (runtime->hasFunction(0x28CA70u)) {
        auto targetFn = runtime->lookupFunction(0x28CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3468u; }
        if (ctx->pc != 0x1D3468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MimicCount__19CTreasureBoxManagerFv_0x28ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3468u; }
        if (ctx->pc != 0x1D3468u) { return; }
    }
    ctx->pc = 0x1D3468u;
label_1d3468:
    // 0x1d3468: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1d3468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1d346c:
    // 0x1d346c: 0x16200013  bnez        $s1, . + 4 + (0x13 << 2)
label_1d3470:
    if (ctx->pc == 0x1D3470u) {
        ctx->pc = 0x1D3470u;
            // 0x1d3470: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D3474u;
        goto label_1d3474;
    }
    ctx->pc = 0x1D346Cu;
    {
        const bool branch_taken_0x1d346c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D346Cu;
            // 0x1d3470: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d346c) {
            ctx->pc = 0x1D34BCu;
            goto label_1d34bc;
        }
    }
    ctx->pc = 0x1D3474u;
label_1d3474:
    // 0x1d3474: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d3474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d3478:
    // 0x1d3478: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x1d3478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1d347c:
    // 0x1d347c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1d3480:
    if (ctx->pc == 0x1D3480u) {
        ctx->pc = 0x1D3484u;
        goto label_1d3484;
    }
    ctx->pc = 0x1D347Cu;
    {
        const bool branch_taken_0x1d347c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d347c) {
            ctx->pc = 0x1D34BCu;
            goto label_1d34bc;
        }
    }
    ctx->pc = 0x1D3484u;
label_1d3484:
    // 0x1d3484: 0x240205dc  addiu       $v0, $zero, 0x5DC
    ctx->pc = 0x1d3484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_1d3488:
    // 0x1d3488: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d3488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d348c:
    // 0x1d348c: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x1d348cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_1d3490:
    // 0x1d3490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d3490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3494:
    // 0x1d3494: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d3494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d3498:
    // 0x1d3498: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x1d3498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
label_1d349c:
    // 0x1d349c: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x1d349cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d34a0:
    // 0x1d34a0: 0xc06ea70  jal         func_1BA9C0
label_1d34a4:
    if (ctx->pc == 0x1D34A4u) {
        ctx->pc = 0x1D34A4u;
            // 0x1d34a4: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->pc = 0x1D34A8u;
        goto label_1d34a8;
    }
    ctx->pc = 0x1D34A0u;
    SET_GPR_U32(ctx, 31, 0x1D34A8u);
    ctx->pc = 0x1D34A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34A0u;
            // 0x1d34a4: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA9C0u;
    if (runtime->hasFunction(0x1BA9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BA9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34A8u; }
        if (ctx->pc != 0x1D34A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CColPrimManFP6CScene_0x1ba9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34A8u; }
        if (ctx->pc != 0x1D34A8u) { return; }
    }
    ctx->pc = 0x1D34A8u;
label_1d34a8:
    // 0x1d34a8: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1d34a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1d34ac:
    // 0x1d34ac: 0xc0b3348  jal         func_2CCD20
label_1d34b0:
    if (ctx->pc == 0x1D34B0u) {
        ctx->pc = 0x1D34B0u;
            // 0x1d34b0: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->pc = 0x1D34B4u;
        goto label_1d34b4;
    }
    ctx->pc = 0x1D34ACu;
    SET_GPR_U32(ctx, 31, 0x1D34B4u);
    ctx->pc = 0x1D34B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34ACu;
            // 0x1d34b0: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CCD20u;
    if (runtime->hasFunction(0x2CCD20u)) {
        auto targetFn = runtime->lookupFunction(0x2CCD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34B4u; }
        if (ctx->pc != 0x1D34B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__4CPotFv_0x2ccd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34B4u; }
        if (ctx->pc != 0x1D34B4u) { return; }
    }
    ctx->pc = 0x1D34B4u;
label_1d34b4:
    // 0x1d34b4: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_1d34b8:
    if (ctx->pc == 0x1D34B8u) {
        ctx->pc = 0x1D34B8u;
            // 0x1d34b8: 0xaf808de0  sw          $zero, -0x7220($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 0));
        ctx->pc = 0x1D34BCu;
        goto label_1d34bc;
    }
    ctx->pc = 0x1D34B4u;
    {
        const bool branch_taken_0x1d34b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34B4u;
            // 0x1d34b8: 0xaf808de0  sw          $zero, -0x7220($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34b4) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D34BCu;
label_1d34bc:
    // 0x1d34bc: 0x8c23f6e8  lw          $v1, -0x918($at)
    ctx->pc = 0x1d34bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964968)));
label_1d34c0:
    // 0x1d34c0: 0x146000d3  bnez        $v1, . + 4 + (0xD3 << 2)
label_1d34c4:
    if (ctx->pc == 0x1D34C4u) {
        ctx->pc = 0x1D34C8u;
        goto label_1d34c8;
    }
    ctx->pc = 0x1D34C0u;
    {
        const bool branch_taken_0x1d34c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d34c0) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D34C8u;
label_1d34c8:
    // 0x1d34c8: 0x8f848da4  lw          $a0, -0x725C($gp)
    ctx->pc = 0x1d34c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_1d34cc:
    // 0x1d34cc: 0xc0bd920  jal         func_2F6480
label_1d34d0:
    if (ctx->pc == 0x1D34D0u) {
        ctx->pc = 0x1D34D0u;
            // 0x1d34d0: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->pc = 0x1D34D4u;
        goto label_1d34d4;
    }
    ctx->pc = 0x1D34CCu;
    SET_GPR_U32(ctx, 31, 0x1D34D4u);
    ctx->pc = 0x1D34D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34CCu;
            // 0x1d34d0: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34D4u; }
        if (ctx->pc != 0x1D34D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34D4u; }
        if (ctx->pc != 0x1D34D4u) { return; }
    }
    ctx->pc = 0x1D34D4u;
label_1d34d4:
    // 0x1d34d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1d34d8:
    if (ctx->pc == 0x1D34D8u) {
        ctx->pc = 0x1D34D8u;
            // 0x1d34d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D34DCu;
        goto label_1d34dc;
    }
    ctx->pc = 0x1D34D4u;
    {
        const bool branch_taken_0x1d34d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D34D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34D4u;
            // 0x1d34d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34d4) {
            ctx->pc = 0x1D3508u;
            goto label_1d3508;
        }
    }
    ctx->pc = 0x1D34DCu;
label_1d34dc:
    // 0x1d34dc: 0xc067f14  jal         func_19FC50
label_1d34e0:
    if (ctx->pc == 0x1D34E0u) {
        ctx->pc = 0x1D34E4u;
        goto label_1d34e4;
    }
    ctx->pc = 0x1D34DCu;
    SET_GPR_U32(ctx, 31, 0x1D34E4u);
    ctx->pc = 0x19FC50u;
    if (runtime->hasFunction(0x19FC50u)) {
        auto targetFn = runtime->lookupFunction(0x19FC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34E4u; }
        if (ctx->pc != 0x1D34E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMagicSwordCounterNow__16CBattleCharaInfoFv_0x19fc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34E4u; }
        if (ctx->pc != 0x1D34E4u) { return; }
    }
    ctx->pc = 0x1D34E4u;
label_1d34e4:
    // 0x1d34e4: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_1d34e8:
    if (ctx->pc == 0x1D34E8u) {
        ctx->pc = 0x1D34E8u;
            // 0x1d34e8: 0x240209ec  addiu       $v0, $zero, 0x9EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2540));
        ctx->pc = 0x1D34ECu;
        goto label_1d34ec;
    }
    ctx->pc = 0x1D34E4u;
    {
        const bool branch_taken_0x1d34e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D34E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34E4u;
            // 0x1d34e8: 0x240209ec  addiu       $v0, $zero, 0x9EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34e4) {
            ctx->pc = 0x1D3508u;
            goto label_1d3508;
        }
    }
    ctx->pc = 0x1D34ECu;
label_1d34ec:
    // 0x1d34ec: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1d34ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1d34f0:
    // 0x1d34f0: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x1d34f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_1d34f4:
    // 0x1d34f4: 0x8f848da4  lw          $a0, -0x725C($gp)
    ctx->pc = 0x1d34f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_1d34f8:
    // 0x1d34f8: 0xc0bd8f4  jal         func_2F63D0
label_1d34fc:
    if (ctx->pc == 0x1D34FCu) {
        ctx->pc = 0x1D34FCu;
            // 0x1d34fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D3500u;
        goto label_1d3500;
    }
    ctx->pc = 0x1D34F8u;
    SET_GPR_U32(ctx, 31, 0x1D3500u);
    ctx->pc = 0x1D34FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D34F8u;
            // 0x1d34fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3500u; }
        if (ctx->pc != 0x1D3500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3500u; }
        if (ctx->pc != 0x1D3500u) { return; }
    }
    ctx->pc = 0x1D3500u;
label_1d3500:
    // 0x1d3500: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_1d3504:
    if (ctx->pc == 0x1D3504u) {
        ctx->pc = 0x1D3504u;
            // 0x1d3504: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1D3508u;
        goto label_1d3508;
    }
    ctx->pc = 0x1D3500u;
    {
        const bool branch_taken_0x1d3500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3500u;
            // 0x1d3504: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3500) {
            ctx->pc = 0x1D3814u;
            goto label_1d3814;
        }
    }
    ctx->pc = 0x1D3508u;
label_1d3508:
    // 0x1d3508: 0xc05a930  jal         func_16A4C0
label_1d350c:
    if (ctx->pc == 0x1D350Cu) {
        ctx->pc = 0x1D350Cu;
            // 0x1d350c: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D3510u;
        goto label_1d3510;
    }
    ctx->pc = 0x1D3508u;
    SET_GPR_U32(ctx, 31, 0x1D3510u);
    ctx->pc = 0x1D350Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3508u;
            // 0x1d350c: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A4C0u;
    if (runtime->hasFunction(0x16A4C0u)) {
        auto targetFn = runtime->lookupFunction(0x16A4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3510u; }
        if (ctx->pc != 0x1D3510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRunEvent__12CActionCharaFv_0x16a4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3510u; }
        if (ctx->pc != 0x1D3510u) { return; }
    }
    ctx->pc = 0x1D3510u;
label_1d3510:
    // 0x1d3510: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
label_1d3514:
    if (ctx->pc == 0x1D3514u) {
        ctx->pc = 0x1D3514u;
            // 0x1d3514: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D3518u;
        goto label_1d3518;
    }
    ctx->pc = 0x1D3510u;
    {
        const bool branch_taken_0x1d3510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3510u;
            // 0x1d3514: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3510) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D3518u;
label_1d3518:
    // 0x1d3518: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1d3518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d351c:
    // 0x1d351c: 0xc0a3008  jal         func_28C020
label_1d3520:
    if (ctx->pc == 0x1D3520u) {
        ctx->pc = 0x1D3520u;
            // 0x1d3520: 0x24844b20  addiu       $a0, $a0, 0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
        ctx->pc = 0x1D3524u;
        goto label_1d3524;
    }
    ctx->pc = 0x1D351Cu;
    SET_GPR_U32(ctx, 31, 0x1D3524u);
    ctx->pc = 0x1D3520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D351Cu;
            // 0x1d3520: 0x24844b20  addiu       $a0, $a0, 0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C020u;
    if (runtime->hasFunction(0x28C020u)) {
        auto targetFn = runtime->lookupFunction(0x28C020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3524u; }
        if (ctx->pc != 0x1D3524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEvent__13CRandomCircleFPf_0x28c020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3524u; }
        if (ctx->pc != 0x1D3524u) { return; }
    }
    ctx->pc = 0x1D3524u;
label_1d3524:
    // 0x1d3524: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d3524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d3528:
    // 0x1d3528: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_1d352c:
    if (ctx->pc == 0x1D352Cu) {
        ctx->pc = 0x1D352Cu;
            // 0x1d352c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1D3530u;
        goto label_1d3530;
    }
    ctx->pc = 0x1D3528u;
    {
        const bool branch_taken_0x1d3528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D352Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3528u;
            // 0x1d352c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3528) {
            ctx->pc = 0x1D3548u;
            goto label_1d3548;
        }
    }
    ctx->pc = 0x1D3530u;
label_1d3530:
    // 0x1d3530: 0x24020460  addiu       $v0, $zero, 0x460
    ctx->pc = 0x1d3530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
label_1d3534:
    // 0x1d3534: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x1d3534u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_1d3538:
    // 0x1d3538: 0xc05a850  jal         func_16A140
label_1d353c:
    if (ctx->pc == 0x1D353Cu) {
        ctx->pc = 0x1D353Cu;
            // 0x1d353c: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->pc = 0x1D3540u;
        goto label_1d3540;
    }
    ctx->pc = 0x1D3538u;
    SET_GPR_U32(ctx, 31, 0x1D3540u);
    ctx->pc = 0x1D353Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3538u;
            // 0x1d353c: 0x8f848dd8  lw          $a0, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A140u;
    if (runtime->hasFunction(0x16A140u)) {
        auto targetFn = runtime->lookupFunction(0x16A140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3540u; }
        if (ctx->pc != 0x1D3540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetAccele__12CActionCharaFv_0x16a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3540u; }
        if (ctx->pc != 0x1D3540u) { return; }
    }
    ctx->pc = 0x1D3540u;
label_1d3540:
    // 0x1d3540: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_1d3544:
    if (ctx->pc == 0x1D3544u) {
        ctx->pc = 0x1D3548u;
        goto label_1d3548;
    }
    ctx->pc = 0x1D3540u;
    {
        const bool branch_taken_0x1d3540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3540) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D3548u;
label_1d3548:
    // 0x1d3548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d354c:
    // 0x1d354c: 0x24847b60  addiu       $a0, $a0, 0x7B60
    ctx->pc = 0x1d354cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
label_1d3550:
    // 0x1d3550: 0xc0bb538  jal         func_2ED4E0
label_1d3554:
    if (ctx->pc == 0x1D3554u) {
        ctx->pc = 0x1D3554u;
            // 0x1d3554: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3558u;
        goto label_1d3558;
    }
    ctx->pc = 0x1D3550u;
    SET_GPR_U32(ctx, 31, 0x1D3558u);
    ctx->pc = 0x1D3554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3550u;
            // 0x1d3554: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3558u; }
        if (ctx->pc != 0x1D3558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3558u; }
        if (ctx->pc != 0x1D3558u) { return; }
    }
    ctx->pc = 0x1D3558u;
label_1d3558:
    // 0x1d3558: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d355c:
    if (ctx->pc == 0x1D355Cu) {
        ctx->pc = 0x1D355Cu;
            // 0x1d355c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x1D3560u;
        goto label_1d3560;
    }
    ctx->pc = 0x1D3558u;
    {
        const bool branch_taken_0x1d3558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D355Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3558u;
            // 0x1d355c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3558) {
            ctx->pc = 0x1D3564u;
            goto label_1d3564;
        }
    }
    ctx->pc = 0x1D3560u;
label_1d3560:
    // 0x1d3560: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1d3560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3564:
    // 0x1d3564: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x1d3564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1d3568:
    // 0x1d3568: 0xc0bb538  jal         func_2ED4E0
label_1d356c:
    if (ctx->pc == 0x1D356Cu) {
        ctx->pc = 0x1D356Cu;
            // 0x1d356c: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->pc = 0x1D3570u;
        goto label_1d3570;
    }
    ctx->pc = 0x1D3568u;
    SET_GPR_U32(ctx, 31, 0x1D3570u);
    ctx->pc = 0x1D356Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3568u;
            // 0x1d356c: 0x24847b60  addiu       $a0, $a0, 0x7B60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3570u; }
        if (ctx->pc != 0x1D3570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3570u; }
        if (ctx->pc != 0x1D3570u) { return; }
    }
    ctx->pc = 0x1D3570u;
label_1d3570:
    // 0x1d3570: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d3574:
    if (ctx->pc == 0x1D3574u) {
        ctx->pc = 0x1D3578u;
        goto label_1d3578;
    }
    ctx->pc = 0x1D3570u;
    {
        const bool branch_taken_0x1d3570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3570) {
            ctx->pc = 0x1D357Cu;
            goto label_1d357c;
        }
    }
    ctx->pc = 0x1D3578u;
label_1d3578:
    // 0x1d3578: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1d3578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d357c:
    // 0x1d357c: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1d357cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1d3580:
    // 0x1d3580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3584:
    // 0x1d3584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3588:
    // 0x1d3588: 0xc077434  jal         func_1DD0D0
label_1d358c:
    if (ctx->pc == 0x1D358Cu) {
        ctx->pc = 0x1D358Cu;
            // 0x1d358c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D3590u;
        goto label_1d3590;
    }
    ctx->pc = 0x1D3588u;
    SET_GPR_U32(ctx, 31, 0x1D3590u);
    ctx->pc = 0x1D358Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3588u;
            // 0x1d358c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0D0u;
    if (runtime->hasFunction(0x1DD0D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3590u; }
        if (ctx->pc != 0x1D3590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPriorityLevelIndex__11CMonsterManFiPi_0x1dd0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3590u; }
        if (ctx->pc != 0x1D3590u) { return; }
    }
    ctx->pc = 0x1D3590u;
label_1d3590:
    // 0x1d3590: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1d3594:
    if (ctx->pc == 0x1D3594u) {
        ctx->pc = 0x1D3594u;
            // 0x1d3594: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1D3598u;
        goto label_1d3598;
    }
    ctx->pc = 0x1D3590u;
    {
        const bool branch_taken_0x1d3590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3590u;
            // 0x1d3594: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3590) {
            ctx->pc = 0x1D35C0u;
            goto label_1d35c0;
        }
    }
    ctx->pc = 0x1D3598u;
label_1d3598:
    // 0x1d3598: 0xc44112f4  lwc1        $f1, 0x12F4($v0)
    ctx->pc = 0x1d3598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d359c:
    // 0x1d359c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1d359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1d35a0:
    // 0x1d35a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d35a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d35a4:
    // 0x1d35a4: 0x0  nop
    ctx->pc = 0x1d35a4u;
    // NOP
label_1d35a8:
    // 0x1d35a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d35a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d35ac:
    // 0x1d35ac: 0x0  nop
    ctx->pc = 0x1d35acu;
    // NOP
label_1d35b0:
    // 0x1d35b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d35b4:
    if (ctx->pc == 0x1D35B4u) {
        ctx->pc = 0x1D35B8u;
        goto label_1d35b8;
    }
    ctx->pc = 0x1D35B0u;
    {
        const bool branch_taken_0x1d35b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d35b0) {
            ctx->pc = 0x1D35BCu;
            goto label_1d35bc;
        }
    }
    ctx->pc = 0x1D35B8u;
label_1d35b8:
    // 0x1d35b8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d35b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d35bc:
    // 0x1d35bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d35bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1d35c0:
    // 0x1d35c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d35c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d35c4:
    // 0x1d35c4: 0xc049c86  jal         func_127218
label_1d35c8:
    if (ctx->pc == 0x1D35C8u) {
        ctx->pc = 0x1D35C8u;
            // 0x1d35c8: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x1D35CCu;
        goto label_1d35cc;
    }
    ctx->pc = 0x1D35C4u;
    SET_GPR_U32(ctx, 31, 0x1D35CCu);
    ctx->pc = 0x1D35C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35C4u;
            // 0x1d35c8: 0x240600d0  addiu       $a2, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35CCu; }
        if (ctx->pc != 0x1D35CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35CCu; }
        if (ctx->pc != 0x1D35CCu) { return; }
    }
    ctx->pc = 0x1D35CCu;
label_1d35cc:
    // 0x1d35cc: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d35ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d35d0:
    // 0x1d35d0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1d35d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d35d4:
    // 0x1d35d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d35d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d35d8:
    // 0x1d35d8: 0xc0b1f98  jal         func_2C7E60
label_1d35dc:
    if (ctx->pc == 0x1D35DCu) {
        ctx->pc = 0x1D35DCu;
            // 0x1d35dc: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1D35E0u;
        goto label_1d35e0;
    }
    ctx->pc = 0x1D35D8u;
    SET_GPR_U32(ctx, 31, 0x1D35E0u);
    ctx->pc = 0x1D35DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35D8u;
            // 0x1d35dc: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7E60u;
    if (runtime->hasFunction(0x2C7E60u)) {
        auto targetFn = runtime->lookupFunction(0x2C7E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35E0u; }
        if (ctx->pc != 0x1D35E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapEvent__6CSceneFPfiP15CSceneEventData_0x2c7e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35E0u; }
        if (ctx->pc != 0x1D35E0u) { return; }
    }
    ctx->pc = 0x1D35E0u;
label_1d35e0:
    // 0x1d35e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d35e4:
    if (ctx->pc == 0x1D35E4u) {
        ctx->pc = 0x1D35E8u;
        goto label_1d35e8;
    }
    ctx->pc = 0x1D35E0u;
    {
        const bool branch_taken_0x1d35e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d35e0) {
            ctx->pc = 0x1D3600u;
            goto label_1d3600;
        }
    }
    ctx->pc = 0x1D35E8u;
label_1d35e8:
    // 0x1d35e8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d35e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d35ec:
    // 0x1d35ec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1d35ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1d35f0:
    // 0x1d35f0: 0xc0b1f3c  jal         func_2C7CF0
label_1d35f4:
    if (ctx->pc == 0x1D35F4u) {
        ctx->pc = 0x1D35F4u;
            // 0x1d35f4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1D35F8u;
        goto label_1d35f8;
    }
    ctx->pc = 0x1D35F0u;
    SET_GPR_U32(ctx, 31, 0x1D35F8u);
    ctx->pc = 0x1D35F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D35F0u;
            // 0x1d35f4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (runtime->hasFunction(0x2C7CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C7CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35F8u; }
        if (ctx->pc != 0x1D35F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__6CSceneFiP15CSceneEventData_0x2c7cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D35F8u; }
        if (ctx->pc != 0x1D35F8u) { return; }
    }
    ctx->pc = 0x1D35F8u;
label_1d35f8:
    // 0x1d35f8: 0x10000085  b           . + 4 + (0x85 << 2)
label_1d35fc:
    if (ctx->pc == 0x1D35FCu) {
        ctx->pc = 0x1D3600u;
        goto label_1d3600;
    }
    ctx->pc = 0x1D35F8u;
    {
        const bool branch_taken_0x1d35f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d35f8) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D3600u;
label_1d3600:
    // 0x1d3600: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1d3600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d3604:
    // 0x1d3604: 0x8c422f60  lw          $v0, 0x2F60($v0)
    ctx->pc = 0x1d3604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12128)));
label_1d3608:
    // 0x1d3608: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d360c:
    if (ctx->pc == 0x1D360Cu) {
        ctx->pc = 0x1D3610u;
        goto label_1d3610;
    }
    ctx->pc = 0x1D3608u;
    {
        const bool branch_taken_0x1d3608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3608) {
            ctx->pc = 0x1D361Cu;
            goto label_1d361c;
        }
    }
    ctx->pc = 0x1D3610u;
label_1d3610:
    // 0x1d3610: 0x8f828dcc  lw          $v0, -0x7234($gp)
    ctx->pc = 0x1d3610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1d3614:
    // 0x1d3614: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d3614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3618:
    // 0x1d3618: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x1d3618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
label_1d361c:
    // 0x1d361c: 0x8f848da4  lw          $a0, -0x725C($gp)
    ctx->pc = 0x1d361cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_1d3620:
    // 0x1d3620: 0xc0bd920  jal         func_2F6480
label_1d3624:
    if (ctx->pc == 0x1D3624u) {
        ctx->pc = 0x1D3624u;
            // 0x1d3624: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->pc = 0x1D3628u;
        goto label_1d3628;
    }
    ctx->pc = 0x1D3620u;
    SET_GPR_U32(ctx, 31, 0x1D3628u);
    ctx->pc = 0x1D3624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3620u;
            // 0x1d3624: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3628u; }
        if (ctx->pc != 0x1D3628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3628u; }
        if (ctx->pc != 0x1D3628u) { return; }
    }
    ctx->pc = 0x1D3628u;
label_1d3628:
    // 0x1d3628: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d362c:
    if (ctx->pc == 0x1D362Cu) {
        ctx->pc = 0x1D3630u;
        goto label_1d3630;
    }
    ctx->pc = 0x1D3628u;
    {
        const bool branch_taken_0x1d3628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3628) {
            ctx->pc = 0x1D3668u;
            goto label_1d3668;
        }
    }
    ctx->pc = 0x1D3630u;
label_1d3630:
    // 0x1d3630: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1d3630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3634:
    // 0x1d3634: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d3638:
    // 0x1d3638: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1d363c:
    if (ctx->pc == 0x1D363Cu) {
        ctx->pc = 0x1D3640u;
        goto label_1d3640;
    }
    ctx->pc = 0x1D3638u;
    {
        const bool branch_taken_0x1d3638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d3638) {
            ctx->pc = 0x1D3668u;
            goto label_1d3668;
        }
    }
    ctx->pc = 0x1D3640u;
label_1d3640:
    // 0x1d3640: 0x8f838dd8  lw          $v1, -0x7228($gp)
    ctx->pc = 0x1d3640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d3644:
    // 0x1d3644: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d3644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d3648:
    // 0x1d3648: 0x8c6306a8  lw          $v1, 0x6A8($v1)
    ctx->pc = 0x1d3648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1704)));
label_1d364c:
    // 0x1d364c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1d3650:
    if (ctx->pc == 0x1D3650u) {
        ctx->pc = 0x1D3650u;
            // 0x1d3650: 0x240209e2  addiu       $v0, $zero, 0x9E2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2530));
        ctx->pc = 0x1D3654u;
        goto label_1d3654;
    }
    ctx->pc = 0x1D364Cu;
    {
        const bool branch_taken_0x1d364c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D364Cu;
            // 0x1d3650: 0x240209e2  addiu       $v0, $zero, 0x9E2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2530));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d364c) {
            ctx->pc = 0x1D3668u;
            goto label_1d3668;
        }
    }
    ctx->pc = 0x1D3654u;
label_1d3654:
    // 0x1d3654: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x1d3654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_1d3658:
    // 0x1d3658: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x1d3658u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_1d365c:
    // 0x1d365c: 0x8f848da4  lw          $a0, -0x725C($gp)
    ctx->pc = 0x1d365cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_1d3660:
    // 0x1d3660: 0xc0bd8f4  jal         func_2F63D0
label_1d3664:
    if (ctx->pc == 0x1D3664u) {
        ctx->pc = 0x1D3664u;
            // 0x1d3664: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D3668u;
        goto label_1d3668;
    }
    ctx->pc = 0x1D3660u;
    SET_GPR_U32(ctx, 31, 0x1D3668u);
    ctx->pc = 0x1D3664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3660u;
            // 0x1d3664: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3668u; }
        if (ctx->pc != 0x1D3668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3668u; }
        if (ctx->pc != 0x1D3668u) { return; }
    }
    ctx->pc = 0x1D3668u;
label_1d3668:
    // 0x1d3668: 0x8f848da4  lw          $a0, -0x725C($gp)
    ctx->pc = 0x1d3668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_1d366c:
    // 0x1d366c: 0xc0bd920  jal         func_2F6480
label_1d3670:
    if (ctx->pc == 0x1D3670u) {
        ctx->pc = 0x1D3670u;
            // 0x1d3670: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x1D3674u;
        goto label_1d3674;
    }
    ctx->pc = 0x1D366Cu;
    SET_GPR_U32(ctx, 31, 0x1D3674u);
    ctx->pc = 0x1D3670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D366Cu;
            // 0x1d3670: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3674u; }
        if (ctx->pc != 0x1D3674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3674u; }
        if (ctx->pc != 0x1D3674u) { return; }
    }
    ctx->pc = 0x1D3674u;
label_1d3674:
    // 0x1d3674: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1d3678:
    if (ctx->pc == 0x1D3678u) {
        ctx->pc = 0x1D367Cu;
        goto label_1d367c;
    }
    ctx->pc = 0x1D3674u;
    {
        const bool branch_taken_0x1d3674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3674) {
            ctx->pc = 0x1D36D0u;
            goto label_1d36d0;
        }
    }
    ctx->pc = 0x1D367Cu;
label_1d367c:
    // 0x1d367c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1d367cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3680:
    // 0x1d3680: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1d3684:
    if (ctx->pc == 0x1D3684u) {
        ctx->pc = 0x1D3684u;
            // 0x1d3684: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->pc = 0x1D3688u;
        goto label_1d3688;
    }
    ctx->pc = 0x1D3680u;
    {
        const bool branch_taken_0x1d3680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3680u;
            // 0x1d3684: 0x3c0241f0  lui         $v0, 0x41F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3680) {
            ctx->pc = 0x1D3698u;
            goto label_1d3698;
        }
    }
    ctx->pc = 0x1D3688u;
label_1d3688:
    // 0x1d3688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d368c:
    // 0x1d368c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1d3690:
    if (ctx->pc == 0x1D3690u) {
        ctx->pc = 0x1D3694u;
        goto label_1d3694;
    }
    ctx->pc = 0x1D368Cu;
    {
        const bool branch_taken_0x1d368c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d368c) {
            ctx->pc = 0x1D36D0u;
            goto label_1d36d0;
        }
    }
    ctx->pc = 0x1D3694u;
label_1d3694:
    // 0x1d3694: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1d3694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1d3698:
    // 0x1d3698: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d3698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d369c:
    // 0x1d369c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d369cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d36a0:
    // 0x1d36a0: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1d36a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_1d36a4:
    // 0x1d36a4: 0xc0764fc  jal         func_1D93F0
label_1d36a8:
    if (ctx->pc == 0x1D36A8u) {
        ctx->pc = 0x1D36A8u;
            // 0x1d36a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1D36ACu;
        goto label_1d36ac;
    }
    ctx->pc = 0x1D36A4u;
    SET_GPR_U32(ctx, 31, 0x1D36ACu);
    ctx->pc = 0x1D36A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36A4u;
            // 0x1d36a8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D93F0u;
    if (runtime->hasFunction(0x1D93F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D93F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36ACu; }
        if (ctx->pc != 0x1D36ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchRandomStone__11CAutoMapGenFPff_0x1d93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36ACu; }
        if (ctx->pc != 0x1D36ACu) { return; }
    }
    ctx->pc = 0x1D36ACu;
label_1d36ac:
    // 0x1d36ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d36b0:
    if (ctx->pc == 0x1D36B0u) {
        ctx->pc = 0x1D36B0u;
            // 0x1d36b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D36B4u;
        goto label_1d36b4;
    }
    ctx->pc = 0x1D36ACu;
    {
        const bool branch_taken_0x1d36ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D36B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36ACu;
            // 0x1d36b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36ac) {
            ctx->pc = 0x1D36D0u;
            goto label_1d36d0;
        }
    }
    ctx->pc = 0x1D36B4u;
label_1d36b4:
    // 0x1d36b4: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
label_1d36b8:
    if (ctx->pc == 0x1D36B8u) {
        ctx->pc = 0x1D36BCu;
        goto label_1d36bc;
    }
    ctx->pc = 0x1D36B4u;
    {
        const bool branch_taken_0x1d36b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d36b4) {
            ctx->pc = 0x1D36C8u;
            goto label_1d36c8;
        }
    }
    ctx->pc = 0x1D36BCu;
label_1d36bc:
    // 0x1d36bc: 0x240309c4  addiu       $v1, $zero, 0x9C4
    ctx->pc = 0x1d36bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2500));
label_1d36c0:
    // 0x1d36c0: 0x10000053  b           . + 4 + (0x53 << 2)
label_1d36c4:
    if (ctx->pc == 0x1D36C4u) {
        ctx->pc = 0x1D36C4u;
            // 0x1d36c4: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D36C8u;
        goto label_1d36c8;
    }
    ctx->pc = 0x1D36C0u;
    {
        const bool branch_taken_0x1d36c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D36C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36C0u;
            // 0x1d36c4: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36c0) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D36C8u;
label_1d36c8:
    // 0x1d36c8: 0x8f828dcc  lw          $v0, -0x7234($gp)
    ctx->pc = 0x1d36c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1d36cc:
    // 0x1d36cc: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x1d36ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
label_1d36d0:
    // 0x1d36d0: 0x8f848da4  lw          $a0, -0x725C($gp)
    ctx->pc = 0x1d36d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_1d36d4:
    // 0x1d36d4: 0xc0bd920  jal         func_2F6480
label_1d36d8:
    if (ctx->pc == 0x1D36D8u) {
        ctx->pc = 0x1D36D8u;
            // 0x1d36d8: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->pc = 0x1D36DCu;
        goto label_1d36dc;
    }
    ctx->pc = 0x1D36D4u;
    SET_GPR_U32(ctx, 31, 0x1D36DCu);
    ctx->pc = 0x1D36D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36D4u;
            // 0x1d36d8: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36DCu; }
        if (ctx->pc != 0x1D36DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D36DCu; }
        if (ctx->pc != 0x1D36DCu) { return; }
    }
    ctx->pc = 0x1D36DCu;
label_1d36dc:
    // 0x1d36dc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1d36e0:
    if (ctx->pc == 0x1D36E0u) {
        ctx->pc = 0x1D36E0u;
            // 0x1d36e0: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D36E4u;
        goto label_1d36e4;
    }
    ctx->pc = 0x1D36DCu;
    {
        const bool branch_taken_0x1d36dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D36E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36DCu;
            // 0x1d36e0: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36dc) {
            ctx->pc = 0x1D3714u;
            goto label_1d3714;
        }
    }
    ctx->pc = 0x1D36E4u;
label_1d36e4:
    // 0x1d36e4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d36e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d36e8:
    // 0x1d36e8: 0x8c220394  lw          $v0, 0x394($at)
    ctx->pc = 0x1d36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 916)));
label_1d36ec:
    // 0x1d36ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1d36f0:
    if (ctx->pc == 0x1D36F0u) {
        ctx->pc = 0x1D36F0u;
            // 0x1d36f0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1D36F4u;
        goto label_1d36f4;
    }
    ctx->pc = 0x1D36ECu;
    {
        const bool branch_taken_0x1d36ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D36F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D36ECu;
            // 0x1d36f0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36ec) {
            ctx->pc = 0x1D3718u;
            goto label_1d3718;
        }
    }
    ctx->pc = 0x1D36F4u;
label_1d36f4:
    // 0x1d36f4: 0x240209d8  addiu       $v0, $zero, 0x9D8
    ctx->pc = 0x1d36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2520));
label_1d36f8:
    // 0x1d36f8: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1d36f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d36fc:
    // 0x1d36fc: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x1d36fcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_1d3700:
    // 0x1d3700: 0x8f848da4  lw          $a0, -0x725C($gp)
    ctx->pc = 0x1d3700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_1d3704:
    // 0x1d3704: 0xc0bd8f4  jal         func_2F63D0
label_1d3708:
    if (ctx->pc == 0x1D3708u) {
        ctx->pc = 0x1D3708u;
            // 0x1d3708: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D370Cu;
        goto label_1d370c;
    }
    ctx->pc = 0x1D3704u;
    SET_GPR_U32(ctx, 31, 0x1D370Cu);
    ctx->pc = 0x1D3708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3704u;
            // 0x1d3708: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F63D0u;
    if (runtime->hasFunction(0x2F63D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F63D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D370Cu; }
        if (ctx->pc != 0x1D370Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBitFlag__9CSaveDataFii_0x2f63d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D370Cu; }
        if (ctx->pc != 0x1D370Cu) { return; }
    }
    ctx->pc = 0x1D370Cu;
label_1d370c:
    // 0x1d370c: 0x10000040  b           . + 4 + (0x40 << 2)
label_1d3710:
    if (ctx->pc == 0x1D3710u) {
        ctx->pc = 0x1D3714u;
        goto label_1d3714;
    }
    ctx->pc = 0x1D370Cu;
    {
        const bool branch_taken_0x1d370c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d370c) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D3714u;
label_1d3714:
    // 0x1d3714: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1d3714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d3718:
    // 0x1d3718: 0xc0a2f28  jal         func_28BCA0
label_1d371c:
    if (ctx->pc == 0x1D371Cu) {
        ctx->pc = 0x1D371Cu;
            // 0x1d371c: 0x248451c0  addiu       $a0, $a0, 0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
        ctx->pc = 0x1D3720u;
        goto label_1d3720;
    }
    ctx->pc = 0x1D3718u;
    SET_GPR_U32(ctx, 31, 0x1D3720u);
    ctx->pc = 0x1D371Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3718u;
            // 0x1d371c: 0x248451c0  addiu       $a0, $a0, 0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BCA0u;
    if (runtime->hasFunction(0x28BCA0u)) {
        auto targetFn = runtime->lookupFunction(0x28BCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3720u; }
        if (ctx->pc != 0x1D3720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEvent__9CGeoStoneFPf_0x28bca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3720u; }
        if (ctx->pc != 0x1D3720u) { return; }
    }
    ctx->pc = 0x1D3720u;
label_1d3720:
    // 0x1d3720: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d3724:
    if (ctx->pc == 0x1D3724u) {
        ctx->pc = 0x1D3724u;
            // 0x1d3724: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D3728u;
        goto label_1d3728;
    }
    ctx->pc = 0x1D3720u;
    {
        const bool branch_taken_0x1d3720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3720u;
            // 0x1d3724: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3720) {
            ctx->pc = 0x1D3744u;
            goto label_1d3744;
        }
    }
    ctx->pc = 0x1D3728u;
label_1d3728:
    // 0x1d3728: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
label_1d372c:
    if (ctx->pc == 0x1D372Cu) {
        ctx->pc = 0x1D3730u;
        goto label_1d3730;
    }
    ctx->pc = 0x1D3728u;
    {
        const bool branch_taken_0x1d3728 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d3728) {
            ctx->pc = 0x1D373Cu;
            goto label_1d373c;
        }
    }
    ctx->pc = 0x1D3730u;
label_1d3730:
    // 0x1d3730: 0x2403046a  addiu       $v1, $zero, 0x46A
    ctx->pc = 0x1d3730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1130));
label_1d3734:
    // 0x1d3734: 0x10000036  b           . + 4 + (0x36 << 2)
label_1d3738:
    if (ctx->pc == 0x1D3738u) {
        ctx->pc = 0x1D3738u;
            // 0x1d3738: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D373Cu;
        goto label_1d373c;
    }
    ctx->pc = 0x1D3734u;
    {
        const bool branch_taken_0x1d3734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3734u;
            // 0x1d3738: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3734) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D373Cu;
label_1d373c:
    // 0x1d373c: 0x8f828dcc  lw          $v0, -0x7234($gp)
    ctx->pc = 0x1d373cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1d3740:
    // 0x1d3740: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x1d3740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
label_1d3744:
    // 0x1d3744: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1d3744u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3748:
    // 0x1d3748: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1d3748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1d374c:
    // 0x1d374c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d374cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3750:
    // 0x1d3750: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d3754:
    // 0x1d3754: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1d3758:
    if (ctx->pc == 0x1D3758u) {
        ctx->pc = 0x1D3758u;
            // 0x1d3758: 0x3c024248  lui         $v0, 0x4248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
        ctx->pc = 0x1D375Cu;
        goto label_1d375c;
    }
    ctx->pc = 0x1D3754u;
    {
        const bool branch_taken_0x1d3754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3754u;
            // 0x1d3758: 0x3c024248  lui         $v0, 0x4248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3754) {
            ctx->pc = 0x1D3760u;
            goto label_1d3760;
        }
    }
    ctx->pc = 0x1D375Cu;
label_1d375c:
    // 0x1d375c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d375cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d3760:
    // 0x1d3760: 0x8f848dd4  lw          $a0, -0x722C($gp)
    ctx->pc = 0x1d3760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938068)));
label_1d3764:
    // 0x1d3764: 0xc0a32b0  jal         func_28CAC0
label_1d3768:
    if (ctx->pc == 0x1D3768u) {
        ctx->pc = 0x1D3768u;
            // 0x1d3768: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1D376Cu;
        goto label_1d376c;
    }
    ctx->pc = 0x1D3764u;
    SET_GPR_U32(ctx, 31, 0x1D376Cu);
    ctx->pc = 0x1D3768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3764u;
            // 0x1d3768: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CAC0u;
    if (runtime->hasFunction(0x28CAC0u)) {
        auto targetFn = runtime->lookupFunction(0x28CAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D376Cu; }
        if (ctx->pc != 0x1D376Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEvent__19CTreasureBoxManagerFPff_0x28cac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D376Cu; }
        if (ctx->pc != 0x1D376Cu) { return; }
    }
    ctx->pc = 0x1D376Cu;
label_1d376c:
    // 0x1d376c: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
label_1d3770:
    if (ctx->pc == 0x1D3770u) {
        ctx->pc = 0x1D3774u;
        goto label_1d3774;
    }
    ctx->pc = 0x1D376Cu;
    {
        const bool branch_taken_0x1d376c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d376c) {
            ctx->pc = 0x1D3798u;
            goto label_1d3798;
        }
    }
    ctx->pc = 0x1D3774u;
label_1d3774:
    // 0x1d3774: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_1d3778:
    if (ctx->pc == 0x1D3778u) {
        ctx->pc = 0x1D3778u;
            // 0x1d3778: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D377Cu;
        goto label_1d377c;
    }
    ctx->pc = 0x1D3774u;
    {
        const bool branch_taken_0x1d3774 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3774u;
            // 0x1d3778: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3774) {
            ctx->pc = 0x1D3798u;
            goto label_1d3798;
        }
    }
    ctx->pc = 0x1D377Cu;
label_1d377c:
    // 0x1d377c: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
label_1d3780:
    if (ctx->pc == 0x1D3780u) {
        ctx->pc = 0x1D3784u;
        goto label_1d3784;
    }
    ctx->pc = 0x1D377Cu;
    {
        const bool branch_taken_0x1d377c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d377c) {
            ctx->pc = 0x1D3790u;
            goto label_1d3790;
        }
    }
    ctx->pc = 0x1D3784u;
label_1d3784:
    // 0x1d3784: 0x2403044c  addiu       $v1, $zero, 0x44C
    ctx->pc = 0x1d3784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
label_1d3788:
    // 0x1d3788: 0x10000021  b           . + 4 + (0x21 << 2)
label_1d378c:
    if (ctx->pc == 0x1D378Cu) {
        ctx->pc = 0x1D378Cu;
            // 0x1d378c: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D3790u;
        goto label_1d3790;
    }
    ctx->pc = 0x1D3788u;
    {
        const bool branch_taken_0x1d3788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D378Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3788u;
            // 0x1d378c: 0xa6630000  sh          $v1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3788) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D3790u;
label_1d3790:
    // 0x1d3790: 0x8f828dcc  lw          $v0, -0x7234($gp)
    ctx->pc = 0x1d3790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1d3794:
    // 0x1d3794: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x1d3794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
label_1d3798:
    // 0x1d3798: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1d3798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1d379c:
    // 0x1d379c: 0xc076ccc  jal         func_1DB330
label_1d37a0:
    if (ctx->pc == 0x1D37A0u) {
        ctx->pc = 0x1D37A0u;
            // 0x1d37a0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1D37A4u;
        goto label_1d37a4;
    }
    ctx->pc = 0x1D379Cu;
    SET_GPR_U32(ctx, 31, 0x1D37A4u);
    ctx->pc = 0x1D37A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D379Cu;
            // 0x1d37a0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB330u;
    if (runtime->hasFunction(0x1DB330u)) {
        auto targetFn = runtime->lookupFunction(0x1DB330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D37A4u; }
        if (ctx->pc != 0x1D37A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMonsterTolk__11CMonsterManFPf_0x1db330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D37A4u; }
        if (ctx->pc != 0x1D37A4u) { return; }
    }
    ctx->pc = 0x1D37A4u;
label_1d37a4:
    // 0x1d37a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d37a8:
    // 0x1d37a8: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
label_1d37ac:
    if (ctx->pc == 0x1D37ACu) {
        ctx->pc = 0x1D37ACu;
            // 0x1d37ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D37B0u;
        goto label_1d37b0;
    }
    ctx->pc = 0x1D37A8u;
    {
        const bool branch_taken_0x1d37a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D37ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D37A8u;
            // 0x1d37ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37a8) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D37B0u;
label_1d37b0:
    // 0x1d37b0: 0x12240005  beq         $s1, $a0, . + 4 + (0x5 << 2)
label_1d37b4:
    if (ctx->pc == 0x1D37B4u) {
        ctx->pc = 0x1D37B4u;
            // 0x1d37b4: 0x2403047e  addiu       $v1, $zero, 0x47E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1150));
        ctx->pc = 0x1D37B8u;
        goto label_1d37b8;
    }
    ctx->pc = 0x1D37B0u;
    {
        const bool branch_taken_0x1d37b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D37B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D37B0u;
            // 0x1d37b4: 0x2403047e  addiu       $v1, $zero, 0x47E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37b0) {
            ctx->pc = 0x1D37C8u;
            goto label_1d37c8;
        }
    }
    ctx->pc = 0x1D37B8u;
label_1d37b8:
    // 0x1d37b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d37b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d37bc:
    // 0x1d37bc: 0x16230012  bne         $s1, $v1, . + 4 + (0x12 << 2)
label_1d37c0:
    if (ctx->pc == 0x1D37C0u) {
        ctx->pc = 0x1D37C4u;
        goto label_1d37c4;
    }
    ctx->pc = 0x1D37BCu;
    {
        const bool branch_taken_0x1d37bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d37bc) {
            ctx->pc = 0x1D3808u;
            goto label_1d3808;
        }
    }
    ctx->pc = 0x1D37C4u;
label_1d37c4:
    // 0x1d37c4: 0x2403047e  addiu       $v1, $zero, 0x47E
    ctx->pc = 0x1d37c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1150));
label_1d37c8:
    // 0x1d37c8: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x1d37c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1d37cc:
    // 0x1d37cc: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x1d37ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_1d37d0:
    // 0x1d37d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1d37d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1d37d4:
    // 0x1d37d4: 0xac24e5ec  sw          $a0, -0x1A14($at)
    ctx->pc = 0x1d37d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960620), GPR_U32(ctx, 4));
label_1d37d8:
    // 0x1d37d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d37dc:
    // 0x1d37dc: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1d37dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1d37e0:
    // 0x1d37e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1d37e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1d37e4:
    // 0x1d37e4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1d37e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d37e8:
    // 0x1d37e8: 0x8c830484  lw          $v1, 0x484($a0)
    ctx->pc = 0x1d37e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1156)));
label_1d37ec:
    // 0x1d37ec: 0x8c631350  lw          $v1, 0x1350($v1)
    ctx->pc = 0x1d37ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4944)));
label_1d37f0:
    // 0x1d37f0: 0xac23e5f4  sw          $v1, -0x1A0C($at)
    ctx->pc = 0x1d37f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960628), GPR_U32(ctx, 3));
label_1d37f4:
    // 0x1d37f4: 0x8c830484  lw          $v1, 0x484($a0)
    ctx->pc = 0x1d37f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1156)));
label_1d37f8:
    // 0x1d37f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1d37f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1d37fc:
    // 0x1d37fc: 0x84631156  lh          $v1, 0x1156($v1)
    ctx->pc = 0x1d37fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4438)));
label_1d3800:
    // 0x1d3800: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d3804:
    if (ctx->pc == 0x1D3804u) {
        ctx->pc = 0x1D3804u;
            // 0x1d3804: 0xac23e5f0  sw          $v1, -0x1A10($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960624), GPR_U32(ctx, 3));
        ctx->pc = 0x1D3808u;
        goto label_1d3808;
    }
    ctx->pc = 0x1D3800u;
    {
        const bool branch_taken_0x1d3800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3800u;
            // 0x1d3804: 0xac23e5f0  sw          $v1, -0x1A10($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3800) {
            ctx->pc = 0x1D3810u;
            goto label_1d3810;
        }
    }
    ctx->pc = 0x1D3808u;
label_1d3808:
    // 0x1d3808: 0x8f838dcc  lw          $v1, -0x7234($gp)
    ctx->pc = 0x1d3808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1d380c:
    // 0x1d380c: 0xac640080  sw          $a0, 0x80($v1)
    ctx->pc = 0x1d380cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 4));
label_1d3810:
    // 0x1d3810: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d3810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d3814:
    // 0x1d3814: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d3814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d3818:
    // 0x1d3818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d3818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d381c:
    // 0x1d381c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d381cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3820:
    // 0x1d3820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d3820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3824:
    // 0x1d3824: 0x3e00008  jr          $ra
label_1d3828:
    if (ctx->pc == 0x1D3828u) {
        ctx->pc = 0x1D3828u;
            // 0x1d3828: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1D382Cu;
        goto label_fallthrough_0x1d3824;
    }
    ctx->pc = 0x1D3824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3824u;
            // 0x1d3828: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d3824:
    ctx->pc = 0x1D382Cu;
}
