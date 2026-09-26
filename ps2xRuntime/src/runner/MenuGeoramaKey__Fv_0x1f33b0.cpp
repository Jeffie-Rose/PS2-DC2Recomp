#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaKey__Fv
// Address: 0x1f33b0 - 0x1f3750
void MenuGeoramaKey__Fv_0x1f33b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaKey__Fv_0x1f33b0");
#endif

    switch (ctx->pc) {
        case 0x1f33b0u: goto label_1f33b0;
        case 0x1f33b4u: goto label_1f33b4;
        case 0x1f33b8u: goto label_1f33b8;
        case 0x1f33bcu: goto label_1f33bc;
        case 0x1f33c0u: goto label_1f33c0;
        case 0x1f33c4u: goto label_1f33c4;
        case 0x1f33c8u: goto label_1f33c8;
        case 0x1f33ccu: goto label_1f33cc;
        case 0x1f33d0u: goto label_1f33d0;
        case 0x1f33d4u: goto label_1f33d4;
        case 0x1f33d8u: goto label_1f33d8;
        case 0x1f33dcu: goto label_1f33dc;
        case 0x1f33e0u: goto label_1f33e0;
        case 0x1f33e4u: goto label_1f33e4;
        case 0x1f33e8u: goto label_1f33e8;
        case 0x1f33ecu: goto label_1f33ec;
        case 0x1f33f0u: goto label_1f33f0;
        case 0x1f33f4u: goto label_1f33f4;
        case 0x1f33f8u: goto label_1f33f8;
        case 0x1f33fcu: goto label_1f33fc;
        case 0x1f3400u: goto label_1f3400;
        case 0x1f3404u: goto label_1f3404;
        case 0x1f3408u: goto label_1f3408;
        case 0x1f340cu: goto label_1f340c;
        case 0x1f3410u: goto label_1f3410;
        case 0x1f3414u: goto label_1f3414;
        case 0x1f3418u: goto label_1f3418;
        case 0x1f341cu: goto label_1f341c;
        case 0x1f3420u: goto label_1f3420;
        case 0x1f3424u: goto label_1f3424;
        case 0x1f3428u: goto label_1f3428;
        case 0x1f342cu: goto label_1f342c;
        case 0x1f3430u: goto label_1f3430;
        case 0x1f3434u: goto label_1f3434;
        case 0x1f3438u: goto label_1f3438;
        case 0x1f343cu: goto label_1f343c;
        case 0x1f3440u: goto label_1f3440;
        case 0x1f3444u: goto label_1f3444;
        case 0x1f3448u: goto label_1f3448;
        case 0x1f344cu: goto label_1f344c;
        case 0x1f3450u: goto label_1f3450;
        case 0x1f3454u: goto label_1f3454;
        case 0x1f3458u: goto label_1f3458;
        case 0x1f345cu: goto label_1f345c;
        case 0x1f3460u: goto label_1f3460;
        case 0x1f3464u: goto label_1f3464;
        case 0x1f3468u: goto label_1f3468;
        case 0x1f346cu: goto label_1f346c;
        case 0x1f3470u: goto label_1f3470;
        case 0x1f3474u: goto label_1f3474;
        case 0x1f3478u: goto label_1f3478;
        case 0x1f347cu: goto label_1f347c;
        case 0x1f3480u: goto label_1f3480;
        case 0x1f3484u: goto label_1f3484;
        case 0x1f3488u: goto label_1f3488;
        case 0x1f348cu: goto label_1f348c;
        case 0x1f3490u: goto label_1f3490;
        case 0x1f3494u: goto label_1f3494;
        case 0x1f3498u: goto label_1f3498;
        case 0x1f349cu: goto label_1f349c;
        case 0x1f34a0u: goto label_1f34a0;
        case 0x1f34a4u: goto label_1f34a4;
        case 0x1f34a8u: goto label_1f34a8;
        case 0x1f34acu: goto label_1f34ac;
        case 0x1f34b0u: goto label_1f34b0;
        case 0x1f34b4u: goto label_1f34b4;
        case 0x1f34b8u: goto label_1f34b8;
        case 0x1f34bcu: goto label_1f34bc;
        case 0x1f34c0u: goto label_1f34c0;
        case 0x1f34c4u: goto label_1f34c4;
        case 0x1f34c8u: goto label_1f34c8;
        case 0x1f34ccu: goto label_1f34cc;
        case 0x1f34d0u: goto label_1f34d0;
        case 0x1f34d4u: goto label_1f34d4;
        case 0x1f34d8u: goto label_1f34d8;
        case 0x1f34dcu: goto label_1f34dc;
        case 0x1f34e0u: goto label_1f34e0;
        case 0x1f34e4u: goto label_1f34e4;
        case 0x1f34e8u: goto label_1f34e8;
        case 0x1f34ecu: goto label_1f34ec;
        case 0x1f34f0u: goto label_1f34f0;
        case 0x1f34f4u: goto label_1f34f4;
        case 0x1f34f8u: goto label_1f34f8;
        case 0x1f34fcu: goto label_1f34fc;
        case 0x1f3500u: goto label_1f3500;
        case 0x1f3504u: goto label_1f3504;
        case 0x1f3508u: goto label_1f3508;
        case 0x1f350cu: goto label_1f350c;
        case 0x1f3510u: goto label_1f3510;
        case 0x1f3514u: goto label_1f3514;
        case 0x1f3518u: goto label_1f3518;
        case 0x1f351cu: goto label_1f351c;
        case 0x1f3520u: goto label_1f3520;
        case 0x1f3524u: goto label_1f3524;
        case 0x1f3528u: goto label_1f3528;
        case 0x1f352cu: goto label_1f352c;
        case 0x1f3530u: goto label_1f3530;
        case 0x1f3534u: goto label_1f3534;
        case 0x1f3538u: goto label_1f3538;
        case 0x1f353cu: goto label_1f353c;
        case 0x1f3540u: goto label_1f3540;
        case 0x1f3544u: goto label_1f3544;
        case 0x1f3548u: goto label_1f3548;
        case 0x1f354cu: goto label_1f354c;
        case 0x1f3550u: goto label_1f3550;
        case 0x1f3554u: goto label_1f3554;
        case 0x1f3558u: goto label_1f3558;
        case 0x1f355cu: goto label_1f355c;
        case 0x1f3560u: goto label_1f3560;
        case 0x1f3564u: goto label_1f3564;
        case 0x1f3568u: goto label_1f3568;
        case 0x1f356cu: goto label_1f356c;
        case 0x1f3570u: goto label_1f3570;
        case 0x1f3574u: goto label_1f3574;
        case 0x1f3578u: goto label_1f3578;
        case 0x1f357cu: goto label_1f357c;
        case 0x1f3580u: goto label_1f3580;
        case 0x1f3584u: goto label_1f3584;
        case 0x1f3588u: goto label_1f3588;
        case 0x1f358cu: goto label_1f358c;
        case 0x1f3590u: goto label_1f3590;
        case 0x1f3594u: goto label_1f3594;
        case 0x1f3598u: goto label_1f3598;
        case 0x1f359cu: goto label_1f359c;
        case 0x1f35a0u: goto label_1f35a0;
        case 0x1f35a4u: goto label_1f35a4;
        case 0x1f35a8u: goto label_1f35a8;
        case 0x1f35acu: goto label_1f35ac;
        case 0x1f35b0u: goto label_1f35b0;
        case 0x1f35b4u: goto label_1f35b4;
        case 0x1f35b8u: goto label_1f35b8;
        case 0x1f35bcu: goto label_1f35bc;
        case 0x1f35c0u: goto label_1f35c0;
        case 0x1f35c4u: goto label_1f35c4;
        case 0x1f35c8u: goto label_1f35c8;
        case 0x1f35ccu: goto label_1f35cc;
        case 0x1f35d0u: goto label_1f35d0;
        case 0x1f35d4u: goto label_1f35d4;
        case 0x1f35d8u: goto label_1f35d8;
        case 0x1f35dcu: goto label_1f35dc;
        case 0x1f35e0u: goto label_1f35e0;
        case 0x1f35e4u: goto label_1f35e4;
        case 0x1f35e8u: goto label_1f35e8;
        case 0x1f35ecu: goto label_1f35ec;
        case 0x1f35f0u: goto label_1f35f0;
        case 0x1f35f4u: goto label_1f35f4;
        case 0x1f35f8u: goto label_1f35f8;
        case 0x1f35fcu: goto label_1f35fc;
        case 0x1f3600u: goto label_1f3600;
        case 0x1f3604u: goto label_1f3604;
        case 0x1f3608u: goto label_1f3608;
        case 0x1f360cu: goto label_1f360c;
        case 0x1f3610u: goto label_1f3610;
        case 0x1f3614u: goto label_1f3614;
        case 0x1f3618u: goto label_1f3618;
        case 0x1f361cu: goto label_1f361c;
        case 0x1f3620u: goto label_1f3620;
        case 0x1f3624u: goto label_1f3624;
        case 0x1f3628u: goto label_1f3628;
        case 0x1f362cu: goto label_1f362c;
        case 0x1f3630u: goto label_1f3630;
        case 0x1f3634u: goto label_1f3634;
        case 0x1f3638u: goto label_1f3638;
        case 0x1f363cu: goto label_1f363c;
        case 0x1f3640u: goto label_1f3640;
        case 0x1f3644u: goto label_1f3644;
        case 0x1f3648u: goto label_1f3648;
        case 0x1f364cu: goto label_1f364c;
        case 0x1f3650u: goto label_1f3650;
        case 0x1f3654u: goto label_1f3654;
        case 0x1f3658u: goto label_1f3658;
        case 0x1f365cu: goto label_1f365c;
        case 0x1f3660u: goto label_1f3660;
        case 0x1f3664u: goto label_1f3664;
        case 0x1f3668u: goto label_1f3668;
        case 0x1f366cu: goto label_1f366c;
        case 0x1f3670u: goto label_1f3670;
        case 0x1f3674u: goto label_1f3674;
        case 0x1f3678u: goto label_1f3678;
        case 0x1f367cu: goto label_1f367c;
        case 0x1f3680u: goto label_1f3680;
        case 0x1f3684u: goto label_1f3684;
        case 0x1f3688u: goto label_1f3688;
        case 0x1f368cu: goto label_1f368c;
        case 0x1f3690u: goto label_1f3690;
        case 0x1f3694u: goto label_1f3694;
        case 0x1f3698u: goto label_1f3698;
        case 0x1f369cu: goto label_1f369c;
        case 0x1f36a0u: goto label_1f36a0;
        case 0x1f36a4u: goto label_1f36a4;
        case 0x1f36a8u: goto label_1f36a8;
        case 0x1f36acu: goto label_1f36ac;
        case 0x1f36b0u: goto label_1f36b0;
        case 0x1f36b4u: goto label_1f36b4;
        case 0x1f36b8u: goto label_1f36b8;
        case 0x1f36bcu: goto label_1f36bc;
        case 0x1f36c0u: goto label_1f36c0;
        case 0x1f36c4u: goto label_1f36c4;
        case 0x1f36c8u: goto label_1f36c8;
        case 0x1f36ccu: goto label_1f36cc;
        case 0x1f36d0u: goto label_1f36d0;
        case 0x1f36d4u: goto label_1f36d4;
        case 0x1f36d8u: goto label_1f36d8;
        case 0x1f36dcu: goto label_1f36dc;
        case 0x1f36e0u: goto label_1f36e0;
        case 0x1f36e4u: goto label_1f36e4;
        case 0x1f36e8u: goto label_1f36e8;
        case 0x1f36ecu: goto label_1f36ec;
        case 0x1f36f0u: goto label_1f36f0;
        case 0x1f36f4u: goto label_1f36f4;
        case 0x1f36f8u: goto label_1f36f8;
        case 0x1f36fcu: goto label_1f36fc;
        case 0x1f3700u: goto label_1f3700;
        case 0x1f3704u: goto label_1f3704;
        case 0x1f3708u: goto label_1f3708;
        case 0x1f370cu: goto label_1f370c;
        case 0x1f3710u: goto label_1f3710;
        case 0x1f3714u: goto label_1f3714;
        case 0x1f3718u: goto label_1f3718;
        case 0x1f371cu: goto label_1f371c;
        case 0x1f3720u: goto label_1f3720;
        case 0x1f3724u: goto label_1f3724;
        case 0x1f3728u: goto label_1f3728;
        case 0x1f372cu: goto label_1f372c;
        case 0x1f3730u: goto label_1f3730;
        case 0x1f3734u: goto label_1f3734;
        case 0x1f3738u: goto label_1f3738;
        case 0x1f373cu: goto label_1f373c;
        case 0x1f3740u: goto label_1f3740;
        case 0x1f3744u: goto label_1f3744;
        case 0x1f3748u: goto label_1f3748;
        case 0x1f374cu: goto label_1f374c;
        default: break;
    }

    ctx->pc = 0x1f33b0u;

label_1f33b0:
    // 0x1f33b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f33b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f33b4:
    // 0x1f33b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f33b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f33b8:
    // 0x1f33b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f33b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f33bc:
    // 0x1f33bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f33bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f33c0:
    // 0x1f33c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f33c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f33c4:
    // 0x1f33c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f33c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f33c8:
    // 0x1f33c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f33c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f33cc:
    // 0x1f33cc: 0x8f908ffc  lw          $s0, -0x7004($gp)
    ctx->pc = 0x1f33ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
label_1f33d0:
    // 0x1f33d0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1f33d4:
    if (ctx->pc == 0x1F33D4u) {
        ctx->pc = 0x1F33D4u;
            // 0x1f33d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F33D8u;
        goto label_1f33d8;
    }
    ctx->pc = 0x1F33D0u;
    {
        const bool branch_taken_0x1f33d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F33D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F33D0u;
            // 0x1f33d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33d0) {
            ctx->pc = 0x1F33E0u;
            goto label_1f33e0;
        }
    }
    ctx->pc = 0x1F33D8u;
label_1f33d8:
    // 0x1f33d8: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_1f33dc:
    if (ctx->pc == 0x1F33DCu) {
        ctx->pc = 0x1F33DCu;
            // 0x1f33dc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1F33E0u;
        goto label_1f33e0;
    }
    ctx->pc = 0x1F33D8u;
    {
        const bool branch_taken_0x1f33d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F33DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F33D8u;
            // 0x1f33dc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33d8) {
            ctx->pc = 0x1F3734u;
            goto label_1f3734;
        }
    }
    ctx->pc = 0x1F33E0u;
label_1f33e0:
    // 0x1f33e0: 0x8f828ff8  lw          $v0, -0x7008($gp)
    ctx->pc = 0x1f33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
label_1f33e4:
    // 0x1f33e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f33e8:
    if (ctx->pc == 0x1F33E8u) {
        ctx->pc = 0x1F33E8u;
            // 0x1f33e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F33ECu;
        goto label_1f33ec;
    }
    ctx->pc = 0x1F33E4u;
    {
        const bool branch_taken_0x1f33e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F33E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F33E4u;
            // 0x1f33e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33e4) {
            ctx->pc = 0x1F33F4u;
            goto label_1f33f4;
        }
    }
    ctx->pc = 0x1F33ECu;
label_1f33ec:
    // 0x1f33ec: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_1f33f0:
    if (ctx->pc == 0x1F33F0u) {
        ctx->pc = 0x1F33F4u;
        goto label_1f33f4;
    }
    ctx->pc = 0x1F33ECu;
    {
        const bool branch_taken_0x1f33ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f33ec) {
            ctx->pc = 0x1F3730u;
            goto label_1f3730;
        }
    }
    ctx->pc = 0x1F33F4u;
label_1f33f4:
    // 0x1f33f4: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x1f33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_1f33f8:
    // 0x1f33f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f33fc:
    if (ctx->pc == 0x1F33FCu) {
        ctx->pc = 0x1F33FCu;
            // 0x1f33fc: 0x8f9494f8  lw          $s4, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x1F3400u;
        goto label_1f3400;
    }
    ctx->pc = 0x1F33F8u;
    {
        const bool branch_taken_0x1f33f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F33FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F33F8u;
            // 0x1f33fc: 0x8f9494f8  lw          $s4, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f33f8) {
            ctx->pc = 0x1F3410u;
            goto label_1f3410;
        }
    }
    ctx->pc = 0x1F3400u;
label_1f3400:
    // 0x1f3400: 0xc07cc78  jal         func_1F31E0
label_1f3404:
    if (ctx->pc == 0x1F3404u) {
        ctx->pc = 0x1F3408u;
        goto label_1f3408;
    }
    ctx->pc = 0x1F3400u;
    SET_GPR_U32(ctx, 31, 0x1F3408u);
    ctx->pc = 0x1F31E0u;
    if (runtime->hasFunction(0x1F31E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F31E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3408u; }
        if (ctx->pc != 0x1F3408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuGeoDebugKey__Fv_0x1f31e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3408u; }
        if (ctx->pc != 0x1F3408u) { return; }
    }
    ctx->pc = 0x1F3408u;
label_1f3408:
    // 0x1f3408: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_1f340c:
    if (ctx->pc == 0x1F340Cu) {
        ctx->pc = 0x1F340Cu;
            // 0x1f340c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3410u;
        goto label_1f3410;
    }
    ctx->pc = 0x1F3408u;
    {
        const bool branch_taken_0x1f3408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F340Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3408u;
            // 0x1f340c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3408) {
            ctx->pc = 0x1F3730u;
            goto label_1f3730;
        }
    }
    ctx->pc = 0x1F3410u;
label_1f3410:
    // 0x1f3410: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f3410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f3414:
    // 0x1f3414: 0xc08f80c  jal         func_23E030
label_1f3418:
    if (ctx->pc == 0x1F3418u) {
        ctx->pc = 0x1F3418u;
            // 0x1f3418: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F341Cu;
        goto label_1f341c;
    }
    ctx->pc = 0x1F3414u;
    SET_GPR_U32(ctx, 31, 0x1F341Cu);
    ctx->pc = 0x1F3418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3414u;
            // 0x1f3418: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F341Cu; }
        if (ctx->pc != 0x1F341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F341Cu; }
        if (ctx->pc != 0x1F341Cu) { return; }
    }
    ctx->pc = 0x1F341Cu;
label_1f341c:
    // 0x1f341c: 0xc08f840  jal         func_23E100
label_1f3420:
    if (ctx->pc == 0x1F3420u) {
        ctx->pc = 0x1F3420u;
            // 0x1f3420: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3424u;
        goto label_1f3424;
    }
    ctx->pc = 0x1F341Cu;
    SET_GPR_U32(ctx, 31, 0x1F3424u);
    ctx->pc = 0x1F3420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F341Cu;
            // 0x1f3420: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3424u; }
        if (ctx->pc != 0x1F3424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3424u; }
        if (ctx->pc != 0x1F3424u) { return; }
    }
    ctx->pc = 0x1F3424u;
label_1f3424:
    // 0x1f3424: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f3424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3428:
    // 0x1f3428: 0xc08f8c8  jal         func_23E320
label_1f342c:
    if (ctx->pc == 0x1F342Cu) {
        ctx->pc = 0x1F342Cu;
            // 0x1f342c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3430u;
        goto label_1f3430;
    }
    ctx->pc = 0x1F3428u;
    SET_GPR_U32(ctx, 31, 0x1F3430u);
    ctx->pc = 0x1F342Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3428u;
            // 0x1f342c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3430u; }
        if (ctx->pc != 0x1F3430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3430u; }
        if (ctx->pc != 0x1F3430u) { return; }
    }
    ctx->pc = 0x1F3430u;
label_1f3430:
    // 0x1f3430: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f3430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3434:
    // 0x1f3434: 0xc08f91c  jal         func_23E470
label_1f3438:
    if (ctx->pc == 0x1F3438u) {
        ctx->pc = 0x1F3438u;
            // 0x1f3438: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F343Cu;
        goto label_1f343c;
    }
    ctx->pc = 0x1F3434u;
    SET_GPR_U32(ctx, 31, 0x1F343Cu);
    ctx->pc = 0x1F3438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3434u;
            // 0x1f3438: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E470u;
    if (runtime->hasFunction(0x23E470u)) {
        auto targetFn = runtime->lookupFunction(0x23E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F343Cu; }
        if (ctx->pc != 0x1F343Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKeyInput__12CMenuKeyFuncFv_0x23e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F343Cu; }
        if (ctx->pc != 0x1F343Cu) { return; }
    }
    ctx->pc = 0x1F343Cu;
label_1f343c:
    // 0x1f343c: 0xc05239c  jal         func_148E70
label_1f3440:
    if (ctx->pc == 0x1F3440u) {
        ctx->pc = 0x1F3444u;
        goto label_1f3444;
    }
    ctx->pc = 0x1F343Cu;
    SET_GPR_U32(ctx, 31, 0x1F3444u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3444u; }
        if (ctx->pc != 0x1F3444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3444u; }
        if (ctx->pc != 0x1F3444u) { return; }
    }
    ctx->pc = 0x1F3444u;
label_1f3444:
    // 0x1f3444: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f3444u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f3448:
    // 0x1f3448: 0x83829050  lb          $v0, -0x6FB0($gp)
    ctx->pc = 0x1f3448u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938704)));
label_1f344c:
    // 0x1f344c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1f3450:
    if (ctx->pc == 0x1F3450u) {
        ctx->pc = 0x1F3450u;
            // 0x1f3450: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1F3454u;
        goto label_1f3454;
    }
    ctx->pc = 0x1F344Cu;
    {
        const bool branch_taken_0x1f344c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F344Cu;
            // 0x1f3450: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f344c) {
            ctx->pc = 0x1F3460u;
            goto label_1f3460;
        }
    }
    ctx->pc = 0x1F3454u;
label_1f3454:
    // 0x1f3454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3458:
    // 0x1f3458: 0xaf83904c  sw          $v1, -0x6FB4($gp)
    ctx->pc = 0x1f3458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938700), GPR_U32(ctx, 3));
label_1f345c:
    // 0x1f345c: 0xa3829050  sb          $v0, -0x6FB0($gp)
    ctx->pc = 0x1f345cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938704), (uint8_t)GPR_U32(ctx, 2));
label_1f3460:
    // 0x1f3460: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1f3460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1f3464:
    // 0x1f3464: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_1f3468:
    if (ctx->pc == 0x1F3468u) {
        ctx->pc = 0x1F3468u;
            // 0x1f3468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F346Cu;
        goto label_1f346c;
    }
    ctx->pc = 0x1F3464u;
    {
        const bool branch_taken_0x1f3464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3464u;
            // 0x1f3468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3464) {
            ctx->pc = 0x1F3524u;
            goto label_1f3524;
        }
    }
    ctx->pc = 0x1F346Cu;
label_1f346c:
    // 0x1f346c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f3470:
    // 0x1f3470: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_1f3474:
    if (ctx->pc == 0x1F3474u) {
        ctx->pc = 0x1F3474u;
            // 0x1f3474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F3478u;
        goto label_1f3478;
    }
    ctx->pc = 0x1F3470u;
    {
        const bool branch_taken_0x1f3470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3470u;
            // 0x1f3474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3470) {
            ctx->pc = 0x1F34E8u;
            goto label_1f34e8;
        }
    }
    ctx->pc = 0x1F3478u;
label_1f3478:
    // 0x1f3478: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1f347c:
    if (ctx->pc == 0x1F347Cu) {
        ctx->pc = 0x1F3480u;
        goto label_1f3480;
    }
    ctx->pc = 0x1F3478u;
    {
        const bool branch_taken_0x1f3478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f3478) {
            ctx->pc = 0x1F3488u;
            goto label_1f3488;
        }
    }
    ctx->pc = 0x1F3480u;
label_1f3480:
    // 0x1f3480: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1f3484:
    if (ctx->pc == 0x1F3484u) {
        ctx->pc = 0x1F3484u;
            // 0x1f3484: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3488u;
        goto label_1f3488;
    }
    ctx->pc = 0x1F3480u;
    {
        const bool branch_taken_0x1f3480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3480u;
            // 0x1f3484: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3480) {
            ctx->pc = 0x1F3540u;
            goto label_1f3540;
        }
    }
    ctx->pc = 0x1F3488u;
label_1f3488:
    // 0x1f3488: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x1f3488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_1f348c:
    // 0x1f348c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f348cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f3490:
    // 0x1f3490: 0xae020144  sw          $v0, 0x144($s0)
    ctx->pc = 0x1f3490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
label_1f3494:
    // 0x1f3494: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x1f3494u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1f3498:
    // 0x1f3498: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1f349c:
    if (ctx->pc == 0x1F349Cu) {
        ctx->pc = 0x1F34A0u;
        goto label_1f34a0;
    }
    ctx->pc = 0x1F3498u;
    {
        const bool branch_taken_0x1f3498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3498) {
            ctx->pc = 0x1F34C0u;
            goto label_1f34c0;
        }
    }
    ctx->pc = 0x1F34A0u;
label_1f34a0:
    // 0x1f34a0: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
label_1f34a4:
    if (ctx->pc == 0x1F34A4u) {
        ctx->pc = 0x1F34A8u;
        goto label_1f34a8;
    }
    ctx->pc = 0x1F34A0u;
    {
        const bool branch_taken_0x1f34a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f34a0) {
            ctx->pc = 0x1F34C0u;
            goto label_1f34c0;
        }
    }
    ctx->pc = 0x1F34A8u;
label_1f34a8:
    // 0x1f34a8: 0x8e19010c  lw          $t9, 0x10C($s0)
    ctx->pc = 0x1f34a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1f34ac:
    // 0x1f34ac: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f34acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f34b0:
    // 0x1f34b0: 0x320f809  jalr        $t9
label_1f34b4:
    if (ctx->pc == 0x1F34B4u) {
        ctx->pc = 0x1F34B4u;
            // 0x1f34b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F34B8u;
        goto label_1f34b8;
    }
    ctx->pc = 0x1F34B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F34B8u);
        ctx->pc = 0x1F34B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F34B0u;
            // 0x1f34b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F34B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F34B8u; }
            if (ctx->pc != 0x1F34B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1F34B8u;
label_1f34b8:
    // 0x1f34b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f34b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f34bc:
    // 0x1f34bc: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x1f34bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_1f34c0:
    // 0x1f34c0: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x1f34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_1f34c4:
    // 0x1f34c4: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x1f34c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_1f34c8:
    // 0x1f34c8: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
label_1f34cc:
    if (ctx->pc == 0x1F34CCu) {
        ctx->pc = 0x1F34D0u;
        goto label_1f34d0;
    }
    ctx->pc = 0x1F34C8u;
    {
        const bool branch_taken_0x1f34c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f34c8) {
            ctx->pc = 0x1F354Cu;
            goto label_1f354c;
        }
    }
    ctx->pc = 0x1F34D0u;
label_1f34d0:
    // 0x1f34d0: 0x1680001e  bnez        $s4, . + 4 + (0x1E << 2)
label_1f34d4:
    if (ctx->pc == 0x1F34D4u) {
        ctx->pc = 0x1F34D8u;
        goto label_1f34d8;
    }
    ctx->pc = 0x1F34D0u;
    {
        const bool branch_taken_0x1f34d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f34d0) {
            ctx->pc = 0x1F354Cu;
            goto label_1f354c;
        }
    }
    ctx->pc = 0x1F34D8u;
label_1f34d8:
    // 0x1f34d8: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x1f34d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_1f34dc:
    // 0x1f34dc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1f34dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f34e0:
    // 0x1f34e0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1f34e4:
    if (ctx->pc == 0x1F34E4u) {
        ctx->pc = 0x1F34E4u;
            // 0x1f34e4: 0xaf82904c  sw          $v0, -0x6FB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938700), GPR_U32(ctx, 2));
        ctx->pc = 0x1F34E8u;
        goto label_1f34e8;
    }
    ctx->pc = 0x1F34E0u;
    {
        const bool branch_taken_0x1f34e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F34E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F34E0u;
            // 0x1f34e4: 0xaf82904c  sw          $v0, -0x6FB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f34e0) {
            ctx->pc = 0x1F354Cu;
            goto label_1f354c;
        }
    }
    ctx->pc = 0x1F34E8u;
label_1f34e8:
    // 0x1f34e8: 0x8f82904c  lw          $v0, -0x6FB4($gp)
    ctx->pc = 0x1f34e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938700)));
label_1f34ec:
    // 0x1f34ec: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1f34ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1f34f0:
    // 0x1f34f0: 0xaf82904c  sw          $v0, -0x6FB4($gp)
    ctx->pc = 0x1f34f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938700), GPR_U32(ctx, 2));
label_1f34f4:
    // 0x1f34f4: 0x8f82904c  lw          $v0, -0x6FB4($gp)
    ctx->pc = 0x1f34f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938700)));
label_1f34f8:
    // 0x1f34f8: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
label_1f34fc:
    if (ctx->pc == 0x1F34FCu) {
        ctx->pc = 0x1F34FCu;
            // 0x1f34fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3500u;
        goto label_1f3500;
    }
    ctx->pc = 0x1F34F8u;
    {
        const bool branch_taken_0x1f34f8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1F34FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F34F8u;
            // 0x1f34fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f34f8) {
            ctx->pc = 0x1F354Cu;
            goto label_1f354c;
        }
    }
    ctx->pc = 0x1F3500u;
label_1f3500:
    // 0x1f3500: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f3500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f3504:
    // 0x1f3504: 0xc07e5b0  jal         func_1F96C0
label_1f3508:
    if (ctx->pc == 0x1F3508u) {
        ctx->pc = 0x1F3508u;
            // 0x1f3508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F350Cu;
        goto label_1f350c;
    }
    ctx->pc = 0x1F3504u;
    SET_GPR_U32(ctx, 31, 0x1F350Cu);
    ctx->pc = 0x1F3508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3504u;
            // 0x1f3508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F96C0u;
    if (runtime->hasFunction(0x1F96C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F350Cu; }
        if (ctx->pc != 0x1F350Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadGeoramaPart__12CMenuGeoramaFii_0x1f96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F350Cu; }
        if (ctx->pc != 0x1F350Cu) { return; }
    }
    ctx->pc = 0x1F350Cu;
label_1f350c:
    // 0x1f350c: 0x8e19010c  lw          $t9, 0x10C($s0)
    ctx->pc = 0x1f350cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1f3510:
    // 0x1f3510: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f3510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f3514:
    // 0x1f3514: 0x320f809  jalr        $t9
label_1f3518:
    if (ctx->pc == 0x1F3518u) {
        ctx->pc = 0x1F3518u;
            // 0x1f3518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F351Cu;
        goto label_1f351c;
    }
    ctx->pc = 0x1F3514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F351Cu);
        ctx->pc = 0x1F3518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3514u;
            // 0x1f3518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F351Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F351Cu; }
            if (ctx->pc != 0x1F351Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F351Cu;
label_1f351c:
    // 0x1f351c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1f3520:
    if (ctx->pc == 0x1F3520u) {
        ctx->pc = 0x1F3520u;
            // 0x1f3520: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F3524u;
        goto label_1f3524;
    }
    ctx->pc = 0x1F351Cu;
    {
        const bool branch_taken_0x1f351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F351Cu;
            // 0x1f3520: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f351c) {
            ctx->pc = 0x1F354Cu;
            goto label_1f354c;
        }
    }
    ctx->pc = 0x1F3524u;
label_1f3524:
    // 0x1f3524: 0xc07e770  jal         func_1F9DC0
label_1f3528:
    if (ctx->pc == 0x1F3528u) {
        ctx->pc = 0x1F352Cu;
        goto label_1f352c;
    }
    ctx->pc = 0x1F3524u;
    SET_GPR_U32(ctx, 31, 0x1F352Cu);
    ctx->pc = 0x1F9DC0u;
    if (runtime->hasFunction(0x1F9DC0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F352Cu; }
        if (ctx->pc != 0x1F352Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LRCheck__12CMenuGeoramaFv_0x1f9dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F352Cu; }
        if (ctx->pc != 0x1F352Cu) { return; }
    }
    ctx->pc = 0x1F352Cu;
label_1f352c:
    // 0x1f352c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f352cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f3530:
    // 0x1f3530: 0xc07f220  jal         func_1FC880
label_1f3534:
    if (ctx->pc == 0x1F3534u) {
        ctx->pc = 0x1F3534u;
            // 0x1f3534: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3538u;
        goto label_1f3538;
    }
    ctx->pc = 0x1F3530u;
    SET_GPR_U32(ctx, 31, 0x1F3538u);
    ctx->pc = 0x1F3534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3530u;
            // 0x1f3534: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC880u;
    if (runtime->hasFunction(0x1FC880u)) {
        auto targetFn = runtime->lookupFunction(0x1FC880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3538u; }
        if (ctx->pc != 0x1F3538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuGeoramaPushKey__Fii_0x1fc880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3538u; }
        if (ctx->pc != 0x1F3538u) { return; }
    }
    ctx->pc = 0x1F3538u;
label_1f3538:
    // 0x1f3538: 0x10000005  b           . + 4 + (0x5 << 2)
label_1f353c:
    if (ctx->pc == 0x1F353Cu) {
        ctx->pc = 0x1F353Cu;
            // 0x1f353c: 0x86030000  lh          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1F3540u;
        goto label_1f3540;
    }
    ctx->pc = 0x1F3538u;
    {
        const bool branch_taken_0x1f3538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F353Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3538u;
            // 0x1f353c: 0x86030000  lh          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3538) {
            ctx->pc = 0x1F3550u;
            goto label_1f3550;
        }
    }
    ctx->pc = 0x1F3540u;
label_1f3540:
    // 0x1f3540: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f3540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3544:
    // 0x1f3544: 0xc08e7d4  jal         func_239F50
label_1f3548:
    if (ctx->pc == 0x1F3548u) {
        ctx->pc = 0x1F3548u;
            // 0x1f3548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F354Cu;
        goto label_1f354c;
    }
    ctx->pc = 0x1F3544u;
    SET_GPR_U32(ctx, 31, 0x1F354Cu);
    ctx->pc = 0x1F3548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3544u;
            // 0x1f3548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F50u;
    if (runtime->hasFunction(0x239F50u)) {
        auto targetFn = runtime->lookupFunction(0x239F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F354Cu; }
        if (ctx->pc != 0x1F354Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendCommand__14CBaseMenuClassFii_0x239f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F354Cu; }
        if (ctx->pc != 0x1F354Cu) { return; }
    }
    ctx->pc = 0x1F354Cu;
label_1f354c:
    // 0x1f354c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1f354cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1f3550:
    // 0x1f3550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f3550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f3554:
    // 0x1f3554: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_1f3558:
    if (ctx->pc == 0x1F3558u) {
        ctx->pc = 0x1F355Cu;
        goto label_1f355c;
    }
    ctx->pc = 0x1F3554u;
    {
        const bool branch_taken_0x1f3554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f3554) {
            ctx->pc = 0x1F3588u;
            goto label_1f3588;
        }
    }
    ctx->pc = 0x1F355Cu;
label_1f355c:
    // 0x1f355c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x1f355cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_1f3560:
    // 0x1f3560: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f3564:
    if (ctx->pc == 0x1F3564u) {
        ctx->pc = 0x1F3564u;
            // 0x1f3564: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1F3568u;
        goto label_1f3568;
    }
    ctx->pc = 0x1F3560u;
    {
        const bool branch_taken_0x1f3560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3560u;
            // 0x1f3564: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3560) {
            ctx->pc = 0x1F3588u;
            goto label_1f3588;
        }
    }
    ctx->pc = 0x1F3568u;
label_1f3568:
    // 0x1f3568: 0x2405fffa  addiu       $a1, $zero, -0x6
    ctx->pc = 0x1f3568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_1f356c:
    // 0x1f356c: 0xc094558  jal         func_251560
label_1f3570:
    if (ctx->pc == 0x1F3570u) {
        ctx->pc = 0x1F3570u;
            // 0x1f3570: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1F3574u;
        goto label_1f3574;
    }
    ctx->pc = 0x1F356Cu;
    SET_GPR_U32(ctx, 31, 0x1F3574u);
    ctx->pc = 0x1F3570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F356Cu;
            // 0x1f3570: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3574u; }
        if (ctx->pc != 0x1F3574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3574u; }
        if (ctx->pc != 0x1F3574u) { return; }
    }
    ctx->pc = 0x1F3574u;
label_1f3574:
    // 0x1f3574: 0x87829024  lh          $v0, -0x6FDC($gp)
    ctx->pc = 0x1f3574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938660)));
label_1f3578:
    // 0x1f3578: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1f357c:
    if (ctx->pc == 0x1F357Cu) {
        ctx->pc = 0x1F3580u;
        goto label_1f3580;
    }
    ctx->pc = 0x1F3578u;
    {
        const bool branch_taken_0x1f3578 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f3578) {
            ctx->pc = 0x1F3588u;
            goto label_1f3588;
        }
    }
    ctx->pc = 0x1F3580u;
label_1f3580:
    // 0x1f3580: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f3580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f3584:
    // 0x1f3584: 0xa7829024  sh          $v0, -0x6FDC($gp)
    ctx->pc = 0x1f3584u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938660), (uint16_t)GPR_U32(ctx, 2));
label_1f3588:
    // 0x1f3588: 0xc08acc8  jal         func_22B320
label_1f358c:
    if (ctx->pc == 0x1F358Cu) {
        ctx->pc = 0x1F358Cu;
            // 0x1f358c: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x1F3590u;
        goto label_1f3590;
    }
    ctx->pc = 0x1F3588u;
    SET_GPR_U32(ctx, 31, 0x1F3590u);
    ctx->pc = 0x1F358Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3588u;
            // 0x1f358c: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B320u;
    if (runtime->hasFunction(0x22B320u)) {
        auto targetFn = runtime->lookupFunction(0x22B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3590u; }
        if (ctx->pc != 0x1F3590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormStep__14CPosDataManageFv_0x22b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3590u; }
        if (ctx->pc != 0x1F3590u) { return; }
    }
    ctx->pc = 0x1F3590u;
label_1f3590:
    // 0x1f3590: 0xc07e8d8  jal         func_1FA360
label_1f3594:
    if (ctx->pc == 0x1F3594u) {
        ctx->pc = 0x1F3594u;
            // 0x1f3594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3598u;
        goto label_1f3598;
    }
    ctx->pc = 0x1F3590u;
    SET_GPR_U32(ctx, 31, 0x1F3598u);
    ctx->pc = 0x1F3594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3590u;
            // 0x1f3594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA360u;
    if (runtime->hasFunction(0x1FA360u)) {
        auto targetFn = runtime->lookupFunction(0x1FA360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3598u; }
        if (ctx->pc != 0x1F3598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCursorPosition__12CMenuGeoramaFv_0x1fa360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3598u; }
        if (ctx->pc != 0x1F3598u) { return; }
    }
    ctx->pc = 0x1F3598u;
label_1f3598:
    // 0x1f3598: 0xc07e99c  jal         func_1FA670
label_1f359c:
    if (ctx->pc == 0x1F359Cu) {
        ctx->pc = 0x1F359Cu;
            // 0x1f359c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F35A0u;
        goto label_1f35a0;
    }
    ctx->pc = 0x1F3598u;
    SET_GPR_U32(ctx, 31, 0x1F35A0u);
    ctx->pc = 0x1F359Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3598u;
            // 0x1f359c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA670u;
    if (runtime->hasFunction(0x1FA670u)) {
        auto targetFn = runtime->lookupFunction(0x1FA670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F35A0u; }
        if (ctx->pc != 0x1F35A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcTex__12CMenuGeoramaFv_0x1fa670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F35A0u; }
        if (ctx->pc != 0x1F35A0u) { return; }
    }
    ctx->pc = 0x1F35A0u;
label_1f35a0:
    // 0x1f35a0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f35a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1f35a4:
    // 0x1f35a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f35a8:
    // 0x1f35a8: 0x8c34ca40  lw          $s4, -0x35C0($at)
    ctx->pc = 0x1f35a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
label_1f35ac:
    // 0x1f35ac: 0xae820184  sw          $v0, 0x184($s4)
    ctx->pc = 0x1f35acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 388), GPR_U32(ctx, 2));
label_1f35b0:
    // 0x1f35b0: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x1f35b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_1f35b4:
    // 0x1f35b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f35b8:
    if (ctx->pc == 0x1F35B8u) {
        ctx->pc = 0x1F35BCu;
        goto label_1f35bc;
    }
    ctx->pc = 0x1F35B4u;
    {
        const bool branch_taken_0x1f35b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f35b4) {
            ctx->pc = 0x1F35C4u;
            goto label_1f35c4;
        }
    }
    ctx->pc = 0x1F35BCu;
label_1f35bc:
    // 0x1f35bc: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f35c0:
    if (ctx->pc == 0x1F35C0u) {
        ctx->pc = 0x1F35C0u;
            // 0x1f35c0: 0x8e050148  lw          $a1, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->pc = 0x1F35C4u;
        goto label_1f35c4;
    }
    ctx->pc = 0x1F35BCu;
    {
        const bool branch_taken_0x1f35bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F35C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F35BCu;
            // 0x1f35c0: 0x8e050148  lw          $a1, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35bc) {
            ctx->pc = 0x1F35FCu;
            goto label_1f35fc;
        }
    }
    ctx->pc = 0x1F35C4u;
label_1f35c4:
    // 0x1f35c4: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x1f35c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1f35c8:
    // 0x1f35c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f35cc:
    // 0x1f35cc: 0x8e030140  lw          $v1, 0x140($s0)
    ctx->pc = 0x1f35ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_1f35d0:
    // 0x1f35d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1f35d4:
    if (ctx->pc == 0x1F35D4u) {
        ctx->pc = 0x1F35D4u;
            // 0x1f35d4: 0x2484000a  addiu       $a0, $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
        ctx->pc = 0x1F35D8u;
        goto label_1f35d8;
    }
    ctx->pc = 0x1F35D0u;
    {
        const bool branch_taken_0x1f35d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F35D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F35D0u;
            // 0x1f35d4: 0x2484000a  addiu       $a0, $a0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35d0) {
            ctx->pc = 0x1F35E8u;
            goto label_1f35e8;
        }
    }
    ctx->pc = 0x1F35D8u;
label_1f35d8:
    // 0x1f35d8: 0x2881000e  slti        $at, $a0, 0xE
    ctx->pc = 0x1f35d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
label_1f35dc:
    // 0x1f35dc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1f35e0:
    if (ctx->pc == 0x1F35E0u) {
        ctx->pc = 0x1F35E0u;
            // 0x1f35e0: 0x24850640  addiu       $a1, $a0, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
        ctx->pc = 0x1F35E4u;
        goto label_1f35e4;
    }
    ctx->pc = 0x1F35DCu;
    {
        const bool branch_taken_0x1f35dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F35E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F35DCu;
            // 0x1f35e0: 0x24850640  addiu       $a1, $a0, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35dc) {
            ctx->pc = 0x1F35ECu;
            goto label_1f35ec;
        }
    }
    ctx->pc = 0x1F35E4u;
label_1f35e4:
    // 0x1f35e4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1f35e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1f35e8:
    // 0x1f35e8: 0x24850640  addiu       $a1, $a0, 0x640
    ctx->pc = 0x1f35e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
label_1f35ec:
    // 0x1f35ec: 0xc0877e0  jal         func_21DF80
label_1f35f0:
    if (ctx->pc == 0x1F35F0u) {
        ctx->pc = 0x1F35F0u;
            // 0x1f35f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F35F4u;
        goto label_1f35f4;
    }
    ctx->pc = 0x1F35ECu;
    SET_GPR_U32(ctx, 31, 0x1F35F4u);
    ctx->pc = 0x1F35F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F35ECu;
            // 0x1f35f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F35F4u; }
        if (ctx->pc != 0x1F35F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F35F4u; }
        if (ctx->pc != 0x1F35F4u) { return; }
    }
    ctx->pc = 0x1F35F4u;
label_1f35f4:
    // 0x1f35f4: 0x10000027  b           . + 4 + (0x27 << 2)
label_1f35f8:
    if (ctx->pc == 0x1F35F8u) {
        ctx->pc = 0x1F35F8u;
            // 0x1f35f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F35FCu;
        goto label_1f35fc;
    }
    ctx->pc = 0x1F35F4u;
    {
        const bool branch_taken_0x1f35f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F35F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F35F4u;
            // 0x1f35f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f35f4) {
            ctx->pc = 0x1F3694u;
            goto label_1f3694;
        }
    }
    ctx->pc = 0x1F35FCu;
label_1f35fc:
    // 0x1f35fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f35fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3600:
    // 0x1f3600: 0x8e060154  lw          $a2, 0x154($s0)
    ctx->pc = 0x1f3600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1f3604:
    // 0x1f3604: 0x24124e20  addiu       $s2, $zero, 0x4E20
    ctx->pc = 0x1f3604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
label_1f3608:
    // 0x1f3608: 0xc07e580  jal         func_1F9600
label_1f360c:
    if (ctx->pc == 0x1F360Cu) {
        ctx->pc = 0x1F360Cu;
            // 0x1f360c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3610u;
        goto label_1f3610;
    }
    ctx->pc = 0x1F3608u;
    SET_GPR_U32(ctx, 31, 0x1F3610u);
    ctx->pc = 0x1F360Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3608u;
            // 0x1f360c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9600u;
    if (runtime->hasFunction(0x1F9600u)) {
        auto targetFn = runtime->lookupFunction(0x1F9600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3610u; }
        if (ctx->pc != 0x1F3610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSelectEditPartsInfo__12CMenuGeoramaFii_0x1f9600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3610u; }
        if (ctx->pc != 0x1F3610u) { return; }
    }
    ctx->pc = 0x1F3610u;
label_1f3610:
    // 0x1f3610: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f3614:
    if (ctx->pc == 0x1F3614u) {
        ctx->pc = 0x1F3618u;
        goto label_1f3618;
    }
    ctx->pc = 0x1F3610u;
    {
        const bool branch_taken_0x1f3610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3610) {
            ctx->pc = 0x1F3620u;
            goto label_1f3620;
        }
    }
    ctx->pc = 0x1F3618u;
label_1f3618:
    // 0x1f3618: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f361c:
    if (ctx->pc == 0x1F361Cu) {
        ctx->pc = 0x1F361Cu;
            // 0x1f361c: 0x8c530048  lw          $s3, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x1F3620u;
        goto label_1f3620;
    }
    ctx->pc = 0x1F3618u;
    {
        const bool branch_taken_0x1f3618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F361Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3618u;
            // 0x1f361c: 0x8c530048  lw          $s3, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3618) {
            ctx->pc = 0x1F3634u;
            goto label_1f3634;
        }
    }
    ctx->pc = 0x1F3620u;
label_1f3620:
    // 0x1f3620: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1f3620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1f3624:
    // 0x1f3624: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f3624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f3628:
    // 0x1f3628: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1f362c:
    if (ctx->pc == 0x1F362Cu) {
        ctx->pc = 0x1F362Cu;
            // 0x1f362c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3630u;
        goto label_1f3630;
    }
    ctx->pc = 0x1F3628u;
    {
        const bool branch_taken_0x1f3628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F362Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3628u;
            // 0x1f362c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3628) {
            ctx->pc = 0x1F3634u;
            goto label_1f3634;
        }
    }
    ctx->pc = 0x1F3630u;
label_1f3630:
    // 0x1f3630: 0x241259d8  addiu       $s2, $zero, 0x59D8
    ctx->pc = 0x1f3630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 23000));
label_1f3634:
    // 0x1f3634: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_1f3638:
    if (ctx->pc == 0x1F3638u) {
        ctx->pc = 0x1F3638u;
            // 0x1f3638: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F363Cu;
        goto label_1f363c;
    }
    ctx->pc = 0x1F3634u;
    {
        const bool branch_taken_0x1f3634 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3634u;
            // 0x1f3638: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3634) {
            ctx->pc = 0x1F3650u;
            goto label_1f3650;
        }
    }
    ctx->pc = 0x1F363Cu;
label_1f363c:
    // 0x1f363c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f363cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f3640:
    // 0x1f3640: 0xc0877e4  jal         func_21DF90
label_1f3644:
    if (ctx->pc == 0x1F3644u) {
        ctx->pc = 0x1F3644u;
            // 0x1f3644: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3648u;
        goto label_1f3648;
    }
    ctx->pc = 0x1F3640u;
    SET_GPR_U32(ctx, 31, 0x1F3648u);
    ctx->pc = 0x1F3644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3640u;
            // 0x1f3644: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF90u;
    if (runtime->hasFunction(0x21DF90u)) {
        auto targetFn = runtime->lookupFunction(0x21DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3648u; }
        if (ctx->pc != 0x1F3648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFPc_0x21df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3648u; }
        if (ctx->pc != 0x1F3648u) { return; }
    }
    ctx->pc = 0x1F3648u;
label_1f3648:
    // 0x1f3648: 0x10000006  b           . + 4 + (0x6 << 2)
label_1f364c:
    if (ctx->pc == 0x1F364Cu) {
        ctx->pc = 0x1F364Cu;
            // 0x1f364c: 0x86030014  lh          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x1F3650u;
        goto label_1f3650;
    }
    ctx->pc = 0x1F3648u;
    {
        const bool branch_taken_0x1f3648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F364Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3648u;
            // 0x1f364c: 0x86030014  lh          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3648) {
            ctx->pc = 0x1F3664u;
            goto label_1f3664;
        }
    }
    ctx->pc = 0x1F3650u;
label_1f3650:
    // 0x1f3650: 0xc0877e0  jal         func_21DF80
label_1f3654:
    if (ctx->pc == 0x1F3654u) {
        ctx->pc = 0x1F3654u;
            // 0x1f3654: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3658u;
        goto label_1f3658;
    }
    ctx->pc = 0x1F3650u;
    SET_GPR_U32(ctx, 31, 0x1F3658u);
    ctx->pc = 0x1F3654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3650u;
            // 0x1f3654: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3658u; }
        if (ctx->pc != 0x1F3658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3658u; }
        if (ctx->pc != 0x1F3658u) { return; }
    }
    ctx->pc = 0x1F3658u;
label_1f3658:
    // 0x1f3658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f365c:
    // 0x1f365c: 0xae82018c  sw          $v0, 0x18C($s4)
    ctx->pc = 0x1f365cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 2));
label_1f3660:
    // 0x1f3660: 0x86030014  lh          $v1, 0x14($s0)
    ctx->pc = 0x1f3660u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_1f3664:
    // 0x1f3664: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f3664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f3668:
    // 0x1f3668: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1f366c:
    if (ctx->pc == 0x1F366Cu) {
        ctx->pc = 0x1F3670u;
        goto label_1f3670;
    }
    ctx->pc = 0x1F3668u;
    {
        const bool branch_taken_0x1f3668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3668) {
            ctx->pc = 0x1F3690u;
            goto label_1f3690;
        }
    }
    ctx->pc = 0x1F3670u;
label_1f3670:
    // 0x1f3670: 0x8e030140  lw          $v1, 0x140($s0)
    ctx->pc = 0x1f3670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_1f3674:
    // 0x1f3674: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f3674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f3678:
    // 0x1f3678: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1f367c:
    if (ctx->pc == 0x1F367Cu) {
        ctx->pc = 0x1F367Cu;
            // 0x1f367c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3680u;
        goto label_1f3680;
    }
    ctx->pc = 0x1F3678u;
    {
        const bool branch_taken_0x1f3678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F367Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3678u;
            // 0x1f367c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3678) {
            ctx->pc = 0x1F3690u;
            goto label_1f3690;
        }
    }
    ctx->pc = 0x1F3680u;
label_1f3680:
    // 0x1f3680: 0xc0877e0  jal         func_21DF80
label_1f3684:
    if (ctx->pc == 0x1F3684u) {
        ctx->pc = 0x1F3684u;
            // 0x1f3684: 0x2405064e  addiu       $a1, $zero, 0x64E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1614));
        ctx->pc = 0x1F3688u;
        goto label_1f3688;
    }
    ctx->pc = 0x1F3680u;
    SET_GPR_U32(ctx, 31, 0x1F3688u);
    ctx->pc = 0x1F3684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3680u;
            // 0x1f3684: 0x2405064e  addiu       $a1, $zero, 0x64E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1614));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3688u; }
        if (ctx->pc != 0x1F3688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3688u; }
        if (ctx->pc != 0x1F3688u) { return; }
    }
    ctx->pc = 0x1F3688u;
label_1f3688:
    // 0x1f3688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f368c:
    // 0x1f368c: 0xae82018c  sw          $v0, 0x18C($s4)
    ctx->pc = 0x1f368cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 396), GPR_U32(ctx, 2));
label_1f3690:
    // 0x1f3690: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f3690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f3694:
    // 0x1f3694: 0xc07de08  jal         func_1F7820
label_1f3698:
    if (ctx->pc == 0x1F3698u) {
        ctx->pc = 0x1F369Cu;
        goto label_1f369c;
    }
    ctx->pc = 0x1F3694u;
    SET_GPR_U32(ctx, 31, 0x1F369Cu);
    ctx->pc = 0x1F7820u;
    if (runtime->hasFunction(0x1F7820u)) {
        auto targetFn = runtime->lookupFunction(0x1F7820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F369Cu; }
        if (ctx->pc != 0x1F369Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuGeoramaMessageMake__Fi_0x1f7820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F369Cu; }
        if (ctx->pc != 0x1F369Cu) { return; }
    }
    ctx->pc = 0x1F369Cu;
label_1f369c:
    // 0x1f369c: 0x8e040148  lw          $a0, 0x148($s0)
    ctx->pc = 0x1f369cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1f36a0:
    // 0x1f36a0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f36a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f36a4:
    // 0x1f36a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f36a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f36a8:
    // 0x1f36a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f36a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f36ac:
    // 0x1f36ac: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
label_1f36b0:
    if (ctx->pc == 0x1F36B0u) {
        ctx->pc = 0x1F36B0u;
            // 0x1f36b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F36B4u;
        goto label_1f36b4;
    }
    ctx->pc = 0x1F36ACu;
    {
        const bool branch_taken_0x1f36ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F36B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F36ACu;
            // 0x1f36b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f36ac) {
            ctx->pc = 0x1F3724u;
            goto label_1f3724;
        }
    }
    ctx->pc = 0x1F36B4u;
label_1f36b4:
    // 0x1f36b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f36b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f36b8:
    // 0x1f36b8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f36b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_1f36bc:
    // 0x1f36bc: 0xaf838f68  sw          $v1, -0x7098($gp)
    ctx->pc = 0x1f36bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938472), GPR_U32(ctx, 3));
label_1f36c0:
    // 0x1f36c0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f36c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1f36c4:
    // 0x1f36c4: 0x8c23b814  lw          $v1, -0x47EC($at)
    ctx->pc = 0x1f36c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948884)));
label_1f36c8:
    // 0x1f36c8: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x1f36c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1f36cc:
    // 0x1f36cc: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_1f36d0:
    if (ctx->pc == 0x1F36D0u) {
        ctx->pc = 0x1F36D4u;
        goto label_1f36d4;
    }
    ctx->pc = 0x1F36CCu;
    {
        const bool branch_taken_0x1f36cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f36cc) {
            ctx->pc = 0x1F3700u;
            goto label_1f3700;
        }
    }
    ctx->pc = 0x1F36D4u;
label_1f36d4:
    // 0x1f36d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f36d8:
    // 0x1f36d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f36d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1f36dc:
    // 0x1f36dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1f36dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f36e0:
    // 0x1f36e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f36e4:
    // 0x1f36e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f36e8:
    // 0x1f36e8: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1f36e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1f36ec:
    // 0x1f36ec: 0x8c2263c4  lw          $v0, 0x63C4($at)
    ctx->pc = 0x1f36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 25540)));
label_1f36f0:
    // 0x1f36f0: 0xaf828f68  sw          $v0, -0x7098($gp)
    ctx->pc = 0x1f36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938472), GPR_U32(ctx, 2));
label_1f36f4:
    // 0x1f36f4: 0x8f858f68  lw          $a1, -0x7098($gp)
    ctx->pc = 0x1f36f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938472)));
label_1f36f8:
    // 0x1f36f8: 0xc06c310  jal         func_1B0C40
label_1f36fc:
    if (ctx->pc == 0x1F36FCu) {
        ctx->pc = 0x1F36FCu;
            // 0x1f36fc: 0x8f848ff8  lw          $a0, -0x7008($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
        ctx->pc = 0x1F3700u;
        goto label_1f3700;
    }
    ctx->pc = 0x1F36F8u;
    SET_GPR_U32(ctx, 31, 0x1F3700u);
    ctx->pc = 0x1F36FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F36F8u;
            // 0x1f36fc: 0x8f848ff8  lw          $a0, -0x7008($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3700u; }
        if (ctx->pc != 0x1F3700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3700u; }
        if (ctx->pc != 0x1F3700u) { return; }
    }
    ctx->pc = 0x1F3700u;
label_1f3700:
    // 0x1f3700: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f3704:
    if (ctx->pc == 0x1F3704u) {
        ctx->pc = 0x1F3704u;
            // 0x1f3704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F3708u;
        goto label_1f3708;
    }
    ctx->pc = 0x1F3700u;
    {
        const bool branch_taken_0x1f3700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3700u;
            // 0x1f3704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3700) {
            ctx->pc = 0x1F3718u;
            goto label_1f3718;
        }
    }
    ctx->pc = 0x1F3708u;
label_1f3708:
    // 0x1f3708: 0x8c520324  lw          $s2, 0x324($v0)
    ctx->pc = 0x1f3708u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
label_1f370c:
    // 0x1f370c: 0x8c530328  lw          $s3, 0x328($v0)
    ctx->pc = 0x1f370cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 808)));
label_1f3710:
    // 0x1f3710: 0x0  nop
    ctx->pc = 0x1f3710u;
    // NOP
label_1f3714:
    // 0x1f3714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f3714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f3718:
    // 0x1f3718: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f3718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f371c:
    // 0x1f371c: 0xc07dd00  jal         func_1F7400
label_1f3720:
    if (ctx->pc == 0x1F3720u) {
        ctx->pc = 0x1F3720u;
            // 0x1f3720: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F3724u;
        goto label_1f3724;
    }
    ctx->pc = 0x1F371Cu;
    SET_GPR_U32(ctx, 31, 0x1F3724u);
    ctx->pc = 0x1F3720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F371Cu;
            // 0x1f3720: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7400u;
    if (runtime->hasFunction(0x1F7400u)) {
        auto targetFn = runtime->lookupFunction(0x1F7400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3724u; }
        if (ctx->pc != 0x1F3724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPlacedHouseMessMake__FP14CEditPartsInfoP10CEditHousei_0x1f7400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3724u; }
        if (ctx->pc != 0x1F3724u) { return; }
    }
    ctx->pc = 0x1F3724u;
label_1f3724:
    // 0x1f3724: 0xc07dd8c  jal         func_1F7630
label_1f3728:
    if (ctx->pc == 0x1F3728u) {
        ctx->pc = 0x1F372Cu;
        goto label_1f372c;
    }
    ctx->pc = 0x1F3724u;
    SET_GPR_U32(ctx, 31, 0x1F372Cu);
    ctx->pc = 0x1F7630u;
    if (runtime->hasFunction(0x1F7630u)) {
        auto targetFn = runtime->lookupFunction(0x1F7630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F372Cu; }
        if (ctx->pc != 0x1F372Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPlacedHousePosLinkMes__Fv_0x1f7630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F372Cu; }
        if (ctx->pc != 0x1F372Cu) { return; }
    }
    ctx->pc = 0x1F372Cu;
label_1f372c:
    // 0x1f372c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f372cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f3730:
    // 0x1f3730: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f3730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f3734:
    // 0x1f3734: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f3734u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f3738:
    // 0x1f3738: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f3738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f373c:
    // 0x1f373c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f373cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f3740:
    // 0x1f3740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f3740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3744:
    // 0x1f3744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f3744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3748:
    // 0x1f3748: 0x3e00008  jr          $ra
label_1f374c:
    if (ctx->pc == 0x1F374Cu) {
        ctx->pc = 0x1F374Cu;
            // 0x1f374c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1F3750u;
        goto label_fallthrough_0x1f3748;
    }
    ctx->pc = 0x1F3748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F374Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3748u;
            // 0x1f374c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1f3748:
    ctx->pc = 0x1F3750u;
}
