#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemCharaDataLoadPack__FiP12CActionCharaP12CActionCharaiPUiP9mgCMemoryii
// Address: 0x2b9580 - 0x2b98c4
void MenuItemCharaDataLoadPack__FiP12CActionCharaP12CActionCharaiPUiP9mgCMemoryii_0x2b9580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemCharaDataLoadPack__FiP12CActionCharaP12CActionCharaiPUiP9mgCMemoryii_0x2b9580");
#endif

    switch (ctx->pc) {
        case 0x2b9580u: goto label_2b9580;
        case 0x2b9584u: goto label_2b9584;
        case 0x2b9588u: goto label_2b9588;
        case 0x2b958cu: goto label_2b958c;
        case 0x2b9590u: goto label_2b9590;
        case 0x2b9594u: goto label_2b9594;
        case 0x2b9598u: goto label_2b9598;
        case 0x2b959cu: goto label_2b959c;
        case 0x2b95a0u: goto label_2b95a0;
        case 0x2b95a4u: goto label_2b95a4;
        case 0x2b95a8u: goto label_2b95a8;
        case 0x2b95acu: goto label_2b95ac;
        case 0x2b95b0u: goto label_2b95b0;
        case 0x2b95b4u: goto label_2b95b4;
        case 0x2b95b8u: goto label_2b95b8;
        case 0x2b95bcu: goto label_2b95bc;
        case 0x2b95c0u: goto label_2b95c0;
        case 0x2b95c4u: goto label_2b95c4;
        case 0x2b95c8u: goto label_2b95c8;
        case 0x2b95ccu: goto label_2b95cc;
        case 0x2b95d0u: goto label_2b95d0;
        case 0x2b95d4u: goto label_2b95d4;
        case 0x2b95d8u: goto label_2b95d8;
        case 0x2b95dcu: goto label_2b95dc;
        case 0x2b95e0u: goto label_2b95e0;
        case 0x2b95e4u: goto label_2b95e4;
        case 0x2b95e8u: goto label_2b95e8;
        case 0x2b95ecu: goto label_2b95ec;
        case 0x2b95f0u: goto label_2b95f0;
        case 0x2b95f4u: goto label_2b95f4;
        case 0x2b95f8u: goto label_2b95f8;
        case 0x2b95fcu: goto label_2b95fc;
        case 0x2b9600u: goto label_2b9600;
        case 0x2b9604u: goto label_2b9604;
        case 0x2b9608u: goto label_2b9608;
        case 0x2b960cu: goto label_2b960c;
        case 0x2b9610u: goto label_2b9610;
        case 0x2b9614u: goto label_2b9614;
        case 0x2b9618u: goto label_2b9618;
        case 0x2b961cu: goto label_2b961c;
        case 0x2b9620u: goto label_2b9620;
        case 0x2b9624u: goto label_2b9624;
        case 0x2b9628u: goto label_2b9628;
        case 0x2b962cu: goto label_2b962c;
        case 0x2b9630u: goto label_2b9630;
        case 0x2b9634u: goto label_2b9634;
        case 0x2b9638u: goto label_2b9638;
        case 0x2b963cu: goto label_2b963c;
        case 0x2b9640u: goto label_2b9640;
        case 0x2b9644u: goto label_2b9644;
        case 0x2b9648u: goto label_2b9648;
        case 0x2b964cu: goto label_2b964c;
        case 0x2b9650u: goto label_2b9650;
        case 0x2b9654u: goto label_2b9654;
        case 0x2b9658u: goto label_2b9658;
        case 0x2b965cu: goto label_2b965c;
        case 0x2b9660u: goto label_2b9660;
        case 0x2b9664u: goto label_2b9664;
        case 0x2b9668u: goto label_2b9668;
        case 0x2b966cu: goto label_2b966c;
        case 0x2b9670u: goto label_2b9670;
        case 0x2b9674u: goto label_2b9674;
        case 0x2b9678u: goto label_2b9678;
        case 0x2b967cu: goto label_2b967c;
        case 0x2b9680u: goto label_2b9680;
        case 0x2b9684u: goto label_2b9684;
        case 0x2b9688u: goto label_2b9688;
        case 0x2b968cu: goto label_2b968c;
        case 0x2b9690u: goto label_2b9690;
        case 0x2b9694u: goto label_2b9694;
        case 0x2b9698u: goto label_2b9698;
        case 0x2b969cu: goto label_2b969c;
        case 0x2b96a0u: goto label_2b96a0;
        case 0x2b96a4u: goto label_2b96a4;
        case 0x2b96a8u: goto label_2b96a8;
        case 0x2b96acu: goto label_2b96ac;
        case 0x2b96b0u: goto label_2b96b0;
        case 0x2b96b4u: goto label_2b96b4;
        case 0x2b96b8u: goto label_2b96b8;
        case 0x2b96bcu: goto label_2b96bc;
        case 0x2b96c0u: goto label_2b96c0;
        case 0x2b96c4u: goto label_2b96c4;
        case 0x2b96c8u: goto label_2b96c8;
        case 0x2b96ccu: goto label_2b96cc;
        case 0x2b96d0u: goto label_2b96d0;
        case 0x2b96d4u: goto label_2b96d4;
        case 0x2b96d8u: goto label_2b96d8;
        case 0x2b96dcu: goto label_2b96dc;
        case 0x2b96e0u: goto label_2b96e0;
        case 0x2b96e4u: goto label_2b96e4;
        case 0x2b96e8u: goto label_2b96e8;
        case 0x2b96ecu: goto label_2b96ec;
        case 0x2b96f0u: goto label_2b96f0;
        case 0x2b96f4u: goto label_2b96f4;
        case 0x2b96f8u: goto label_2b96f8;
        case 0x2b96fcu: goto label_2b96fc;
        case 0x2b9700u: goto label_2b9700;
        case 0x2b9704u: goto label_2b9704;
        case 0x2b9708u: goto label_2b9708;
        case 0x2b970cu: goto label_2b970c;
        case 0x2b9710u: goto label_2b9710;
        case 0x2b9714u: goto label_2b9714;
        case 0x2b9718u: goto label_2b9718;
        case 0x2b971cu: goto label_2b971c;
        case 0x2b9720u: goto label_2b9720;
        case 0x2b9724u: goto label_2b9724;
        case 0x2b9728u: goto label_2b9728;
        case 0x2b972cu: goto label_2b972c;
        case 0x2b9730u: goto label_2b9730;
        case 0x2b9734u: goto label_2b9734;
        case 0x2b9738u: goto label_2b9738;
        case 0x2b973cu: goto label_2b973c;
        case 0x2b9740u: goto label_2b9740;
        case 0x2b9744u: goto label_2b9744;
        case 0x2b9748u: goto label_2b9748;
        case 0x2b974cu: goto label_2b974c;
        case 0x2b9750u: goto label_2b9750;
        case 0x2b9754u: goto label_2b9754;
        case 0x2b9758u: goto label_2b9758;
        case 0x2b975cu: goto label_2b975c;
        case 0x2b9760u: goto label_2b9760;
        case 0x2b9764u: goto label_2b9764;
        case 0x2b9768u: goto label_2b9768;
        case 0x2b976cu: goto label_2b976c;
        case 0x2b9770u: goto label_2b9770;
        case 0x2b9774u: goto label_2b9774;
        case 0x2b9778u: goto label_2b9778;
        case 0x2b977cu: goto label_2b977c;
        case 0x2b9780u: goto label_2b9780;
        case 0x2b9784u: goto label_2b9784;
        case 0x2b9788u: goto label_2b9788;
        case 0x2b978cu: goto label_2b978c;
        case 0x2b9790u: goto label_2b9790;
        case 0x2b9794u: goto label_2b9794;
        case 0x2b9798u: goto label_2b9798;
        case 0x2b979cu: goto label_2b979c;
        case 0x2b97a0u: goto label_2b97a0;
        case 0x2b97a4u: goto label_2b97a4;
        case 0x2b97a8u: goto label_2b97a8;
        case 0x2b97acu: goto label_2b97ac;
        case 0x2b97b0u: goto label_2b97b0;
        case 0x2b97b4u: goto label_2b97b4;
        case 0x2b97b8u: goto label_2b97b8;
        case 0x2b97bcu: goto label_2b97bc;
        case 0x2b97c0u: goto label_2b97c0;
        case 0x2b97c4u: goto label_2b97c4;
        case 0x2b97c8u: goto label_2b97c8;
        case 0x2b97ccu: goto label_2b97cc;
        case 0x2b97d0u: goto label_2b97d0;
        case 0x2b97d4u: goto label_2b97d4;
        case 0x2b97d8u: goto label_2b97d8;
        case 0x2b97dcu: goto label_2b97dc;
        case 0x2b97e0u: goto label_2b97e0;
        case 0x2b97e4u: goto label_2b97e4;
        case 0x2b97e8u: goto label_2b97e8;
        case 0x2b97ecu: goto label_2b97ec;
        case 0x2b97f0u: goto label_2b97f0;
        case 0x2b97f4u: goto label_2b97f4;
        case 0x2b97f8u: goto label_2b97f8;
        case 0x2b97fcu: goto label_2b97fc;
        case 0x2b9800u: goto label_2b9800;
        case 0x2b9804u: goto label_2b9804;
        case 0x2b9808u: goto label_2b9808;
        case 0x2b980cu: goto label_2b980c;
        case 0x2b9810u: goto label_2b9810;
        case 0x2b9814u: goto label_2b9814;
        case 0x2b9818u: goto label_2b9818;
        case 0x2b981cu: goto label_2b981c;
        case 0x2b9820u: goto label_2b9820;
        case 0x2b9824u: goto label_2b9824;
        case 0x2b9828u: goto label_2b9828;
        case 0x2b982cu: goto label_2b982c;
        case 0x2b9830u: goto label_2b9830;
        case 0x2b9834u: goto label_2b9834;
        case 0x2b9838u: goto label_2b9838;
        case 0x2b983cu: goto label_2b983c;
        case 0x2b9840u: goto label_2b9840;
        case 0x2b9844u: goto label_2b9844;
        case 0x2b9848u: goto label_2b9848;
        case 0x2b984cu: goto label_2b984c;
        case 0x2b9850u: goto label_2b9850;
        case 0x2b9854u: goto label_2b9854;
        case 0x2b9858u: goto label_2b9858;
        case 0x2b985cu: goto label_2b985c;
        case 0x2b9860u: goto label_2b9860;
        case 0x2b9864u: goto label_2b9864;
        case 0x2b9868u: goto label_2b9868;
        case 0x2b986cu: goto label_2b986c;
        case 0x2b9870u: goto label_2b9870;
        case 0x2b9874u: goto label_2b9874;
        case 0x2b9878u: goto label_2b9878;
        case 0x2b987cu: goto label_2b987c;
        case 0x2b9880u: goto label_2b9880;
        case 0x2b9884u: goto label_2b9884;
        case 0x2b9888u: goto label_2b9888;
        case 0x2b988cu: goto label_2b988c;
        case 0x2b9890u: goto label_2b9890;
        case 0x2b9894u: goto label_2b9894;
        case 0x2b9898u: goto label_2b9898;
        case 0x2b989cu: goto label_2b989c;
        case 0x2b98a0u: goto label_2b98a0;
        case 0x2b98a4u: goto label_2b98a4;
        case 0x2b98a8u: goto label_2b98a8;
        case 0x2b98acu: goto label_2b98ac;
        case 0x2b98b0u: goto label_2b98b0;
        case 0x2b98b4u: goto label_2b98b4;
        case 0x2b98b8u: goto label_2b98b8;
        case 0x2b98bcu: goto label_2b98bc;
        case 0x2b98c0u: goto label_2b98c0;
        default: break;
    }

    ctx->pc = 0x2b9580u;

label_2b9580:
    // 0x2b9580: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b9580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2b9584:
    // 0x2b9584: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b9584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b9588:
    // 0x2b9588: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2b9588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2b958c:
    // 0x2b958c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2b958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2b9590:
    // 0x2b9590: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2b9590u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9594:
    // 0x2b9594: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b9594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2b9598:
    // 0x2b9598: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2b9598u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b959c:
    // 0x2b959c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b959cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2b95a0:
    // 0x2b95a0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2b95a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b95a4:
    // 0x2b95a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b95a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2b95a8:
    // 0x2b95a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b95a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b95ac:
    // 0x2b95ac: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x2b95acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
label_2b95b0:
    // 0x2b95b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b95b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b95b4:
    // 0x2b95b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2b95b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b95b8:
    // 0x2b95b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b95b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b95bc:
    // 0x2b95bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b95bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b95c0:
    // 0x2b95c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b95c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b95c4:
    // 0x2b95c4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2b95c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2b95c8:
    // 0x2b95c8: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x2b95c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2b95cc:
    // 0x2b95cc: 0xafab00ac  sw          $t3, 0xAC($sp)
    ctx->pc = 0x2b95ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 11));
label_2b95d0:
    // 0x2b95d0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2b95d4:
    if (ctx->pc == 0x2B95D4u) {
        ctx->pc = 0x2B95D4u;
            // 0x2b95d4: 0x26941ef0  addiu       $s4, $s4, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 7920));
        ctx->pc = 0x2B95D8u;
        goto label_2b95d8;
    }
    ctx->pc = 0x2B95D0u;
    {
        const bool branch_taken_0x2b95d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B95D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B95D0u;
            // 0x2b95d4: 0x26941ef0  addiu       $s4, $s4, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95d0) {
            ctx->pc = 0x2B95E4u;
            goto label_2b95e4;
        }
    }
    ctx->pc = 0x2B95D8u;
label_2b95d8:
    // 0x2b95d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b95d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b95dc:
    // 0x2b95dc: 0x16c30005  bne         $s6, $v1, . + 4 + (0x5 << 2)
label_2b95e0:
    if (ctx->pc == 0x2B95E0u) {
        ctx->pc = 0x2B95E0u;
            // 0x2b95e0: 0x2ec10006  sltiu       $at, $s6, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->pc = 0x2B95E4u;
        goto label_2b95e4;
    }
    ctx->pc = 0x2B95DCu;
    {
        const bool branch_taken_0x2b95dc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B95E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B95DCu;
            // 0x2b95e0: 0x2ec10006  sltiu       $at, $s6, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95dc) {
            ctx->pc = 0x2B95F4u;
            goto label_2b95f4;
        }
    }
    ctx->pc = 0x2B95E4u;
label_2b95e4:
    // 0x2b95e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b95e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b95e8:
    // 0x2b95e8: 0x16c300aa  bne         $s6, $v1, . + 4 + (0xAA << 2)
label_2b95ec:
    if (ctx->pc == 0x2B95ECu) {
        ctx->pc = 0x2B95F0u;
        goto label_2b95f0;
    }
    ctx->pc = 0x2B95E8u;
    {
        const bool branch_taken_0x2b95e8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b95e8) {
            ctx->pc = 0x2B9894u;
            goto label_2b9894;
        }
    }
    ctx->pc = 0x2B95F0u;
label_2b95f0:
    // 0x2b95f0: 0x2ec10006  sltiu       $at, $s6, 0x6
    ctx->pc = 0x2b95f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2b95f4:
    // 0x2b95f4: 0x102000a7  beqz        $at, . + 4 + (0xA7 << 2)
label_2b95f8:
    if (ctx->pc == 0x2B95F8u) {
        ctx->pc = 0x2B95F8u;
            // 0x2b95f8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B95FCu;
        goto label_2b95fc;
    }
    ctx->pc = 0x2B95F4u;
    {
        const bool branch_taken_0x2b95f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B95F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B95F4u;
            // 0x2b95f8: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b95f4) {
            ctx->pc = 0x2B9894u;
            goto label_2b9894;
        }
    }
    ctx->pc = 0x2B95FCu;
label_2b95fc:
    // 0x2b95fc: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x2b95fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_2b9600:
    // 0x2b9600: 0x2484f470  addiu       $a0, $a0, -0xB90
    ctx->pc = 0x2b9600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964336));
label_2b9604:
    // 0x2b9604: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b9604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b9608:
    // 0x2b9608: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b9608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b960c:
    // 0x2b960c: 0x600008  jr          $v1
label_2b9610:
    if (ctx->pc == 0x2B9610u) {
        ctx->pc = 0x2B9614u;
        goto label_2b9614;
    }
    ctx->pc = 0x2B960Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B9614u: goto label_2b9614;
            case 0x2B96B4u: goto label_2b96b4;
            case 0x2B96ECu: goto label_2b96ec;
            case 0x2B984Cu: goto label_2b984c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B9614u;
label_2b9614:
    // 0x2b9614: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2b9614u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2b9618:
    // 0x2b9618: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b9618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b961c:
    // 0x2b961c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_2b9620:
    if (ctx->pc == 0x2B9620u) {
        ctx->pc = 0x2B9620u;
            // 0x2b9620: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9624u;
        goto label_2b9624;
    }
    ctx->pc = 0x2B961Cu;
    {
        const bool branch_taken_0x2b961c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B9620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B961Cu;
            // 0x2b9620: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b961c) {
            ctx->pc = 0x2B9668u;
            goto label_2b9668;
        }
    }
    ctx->pc = 0x2B9624u;
label_2b9624:
    // 0x2b9624: 0xc05aa6c  jal         func_16A9B0
label_2b9628:
    if (ctx->pc == 0x2B9628u) {
        ctx->pc = 0x2B962Cu;
        goto label_2b962c;
    }
    ctx->pc = 0x2B9624u;
    SET_GPR_U32(ctx, 31, 0x2B962Cu);
    ctx->pc = 0x16A9B0u;
    if (runtime->hasFunction(0x16A9B0u)) {
        auto targetFn = runtime->lookupFunction(0x16A9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B962Cu; }
        if (ctx->pc != 0x2B962Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllDeleteDamage__12CActionCharaFv_0x16a9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B962Cu; }
        if (ctx->pc != 0x2B962Cu) { return; }
    }
    ctx->pc = 0x2B962Cu;
label_2b962c:
    // 0x2b962c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2b962cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b9630:
    // 0x2b9630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b9630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9634:
    // 0x2b9634: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b9634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b9638:
    // 0x2b9638: 0x320f809  jalr        $t9
label_2b963c:
    if (ctx->pc == 0x2B963Cu) {
        ctx->pc = 0x2B963Cu;
            // 0x2b963c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9640u;
        goto label_2b9640;
    }
    ctx->pc = 0x2B9638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B9640u);
        ctx->pc = 0x2B963Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9638u;
            // 0x2b963c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B9640u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B9640u; }
            if (ctx->pc != 0x2B9640u) { return; }
        }
        }
    }
    ctx->pc = 0x2B9640u;
label_2b9640:
    // 0x2b9640: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2b9640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2b9644:
    // 0x2b9644: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x2b9644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_2b9648:
    // 0x2b9648: 0xac20f720  sw          $zero, -0x8E0($at)
    ctx->pc = 0x2b9648u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965024), GPR_U32(ctx, 0));
label_2b964c:
    // 0x2b964c: 0x2442f720  addiu       $v0, $v0, -0x8E0
    ctx->pc = 0x2b964cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965024));
label_2b9650:
    // 0x2b9650: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2b9650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2b9654:
    // 0x2b9654: 0xac20fa40  sw          $zero, -0x5C0($at)
    ctx->pc = 0x2b9654u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965824), GPR_U32(ctx, 0));
label_2b9658:
    // 0x2b9658: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x2b9658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_2b965c:
    // 0x2b965c: 0xac20fa30  sw          $zero, -0x5D0($at)
    ctx->pc = 0x2b965cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965808), GPR_U32(ctx, 0));
label_2b9660:
    // 0x2b9660: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b9664:
    if (ctx->pc == 0x2B9664u) {
        ctx->pc = 0x2B9664u;
            // 0x2b9664: 0xae6207cc  sw          $v0, 0x7CC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1996), GPR_U32(ctx, 2));
        ctx->pc = 0x2B9668u;
        goto label_2b9668;
    }
    ctx->pc = 0x2B9660u;
    {
        const bool branch_taken_0x2b9660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9660u;
            // 0x2b9664: 0xae6207cc  sw          $v0, 0x7CC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9660) {
            ctx->pc = 0x2B967Cu;
            goto label_2b967c;
        }
    }
    ctx->pc = 0x2B9668u;
label_2b9668:
    // 0x2b9668: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2b9668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b966c:
    // 0x2b966c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9670:
    // 0x2b9670: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b9670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b9674:
    // 0x2b9674: 0x320f809  jalr        $t9
label_2b9678:
    if (ctx->pc == 0x2B9678u) {
        ctx->pc = 0x2B9678u;
            // 0x2b9678: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B967Cu;
        goto label_2b967c;
    }
    ctx->pc = 0x2B9674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B967Cu);
        ctx->pc = 0x2B9678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9674u;
            // 0x2b9678: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B967Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B967Cu; }
            if (ctx->pc != 0x2B967Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2B967Cu;
label_2b967c:
    // 0x2b967c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2b967cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b9680:
    // 0x2b9680: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2b9680u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2b9684:
    // 0x2b9684: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2b9684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b9688:
    // 0x2b9688: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2b9688u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b968c:
    // 0x2b968c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9690:
    // 0x2b9690: 0x24c64c28  addiu       $a2, $a2, 0x4C28
    ctx->pc = 0x2b9690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19496));
label_2b9694:
    // 0x2b9694: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b9694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9698:
    // 0x2b9698: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2b9698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b969c:
    // 0x2b969c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2b969cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b96a0:
    // 0x2b96a0: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2b96a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2b96a4:
    // 0x2b96a4: 0x320f809  jalr        $t9
label_2b96a8:
    if (ctx->pc == 0x2B96A8u) {
        ctx->pc = 0x2B96A8u;
            // 0x2b96a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B96ACu;
        goto label_2b96ac;
    }
    ctx->pc = 0x2B96A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B96ACu);
        ctx->pc = 0x2B96A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B96A4u;
            // 0x2b96a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B96ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B96ACu; }
            if (ctx->pc != 0x2B96ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2B96ACu;
label_2b96ac:
    // 0x2b96ac: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2b96b0:
    if (ctx->pc == 0x2B96B0u) {
        ctx->pc = 0x2B96B0u;
            // 0x2b96b0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2B96B4u;
        goto label_2b96b4;
    }
    ctx->pc = 0x2B96ACu;
    {
        const bool branch_taken_0x2b96ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B96B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B96ACu;
            // 0x2b96b0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b96ac) {
            ctx->pc = 0x2B9898u;
            goto label_2b9898;
        }
    }
    ctx->pc = 0x2B96B4u;
label_2b96b4:
    // 0x2b96b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b96b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b96b8:
    // 0x2b96b8: 0xc04bc54  jal         func_12F150
label_2b96bc:
    if (ctx->pc == 0x2B96BCu) {
        ctx->pc = 0x2B96BCu;
            // 0x2b96bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B96C0u;
        goto label_2b96c0;
    }
    ctx->pc = 0x2B96B8u;
    SET_GPR_U32(ctx, 31, 0x2B96C0u);
    ctx->pc = 0x2B96BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B96B8u;
            // 0x2b96bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F150u;
    if (runtime->hasFunction(0x12F150u)) {
        auto targetFn = runtime->lookupFunction(0x12F150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B96C0u; }
        if (ctx->pc != 0x2B96C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexAnime__17mgCTextureManagerFi_0x12f150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B96C0u; }
        if (ctx->pc != 0x2B96C0u) { return; }
    }
    ctx->pc = 0x2B96C0u;
label_2b96c0:
    // 0x2b96c0: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2b96c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2b96c4:
    // 0x2b96c4: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2b96c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2b96c8:
    // 0x2b96c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b96c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b96cc:
    // 0x2b96cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2b96ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b96d0:
    // 0x2b96d0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2b96d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b96d4:
    // 0x2b96d4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2b96d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b96d8:
    // 0x2b96d8: 0x24c64c28  addiu       $a2, $a2, 0x4C28
    ctx->pc = 0x2b96d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19496));
label_2b96dc:
    // 0x2b96dc: 0xc05d470  jal         func_1751C0
label_2b96e0:
    if (ctx->pc == 0x2B96E0u) {
        ctx->pc = 0x2B96E0u;
            // 0x2b96e0: 0x24e7ed10  addiu       $a3, $a3, -0x12F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962448));
        ctx->pc = 0x2B96E4u;
        goto label_2b96e4;
    }
    ctx->pc = 0x2B96DCu;
    SET_GPR_U32(ctx, 31, 0x2B96E4u);
    ctx->pc = 0x2B96E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B96DCu;
            // 0x2b96e0: 0x24e7ed10  addiu       $a3, $a3, -0x12F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (runtime->hasFunction(0x1751C0u)) {
        auto targetFn = runtime->lookupFunction(0x1751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B96E4u; }
        if (ctx->pc != 0x2B96E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSkin__11CCharacter2FPUiPcPcP9mgCMemoryi_0x1751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B96E4u; }
        if (ctx->pc != 0x2B96E4u) { return; }
    }
    ctx->pc = 0x2B96E4u;
label_2b96e4:
    // 0x2b96e4: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2b96e8:
    if (ctx->pc == 0x2B96E8u) {
        ctx->pc = 0x2B96ECu;
        goto label_2b96ec;
    }
    ctx->pc = 0x2B96E4u;
    {
        const bool branch_taken_0x2b96e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b96e4) {
            ctx->pc = 0x2B9894u;
            goto label_2b9894;
        }
    }
    ctx->pc = 0x2B96ECu;
label_2b96ec:
    // 0x2b96ec: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2b96ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2b96f0:
    // 0x2b96f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b96f4:
    // 0x2b96f4: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_2b96f8:
    if (ctx->pc == 0x2B96F8u) {
        ctx->pc = 0x2B96F8u;
            // 0x2b96f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B96FCu;
        goto label_2b96fc;
    }
    ctx->pc = 0x2B96F4u;
    {
        const bool branch_taken_0x2b96f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B96F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B96F4u;
            // 0x2b96f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b96f4) {
            ctx->pc = 0x2B974Cu;
            goto label_2b974c;
        }
    }
    ctx->pc = 0x2B96FCu;
label_2b96fc:
    // 0x2b96fc: 0x16c2000f  bne         $s6, $v0, . + 4 + (0xF << 2)
label_2b9700:
    if (ctx->pc == 0x2B9700u) {
        ctx->pc = 0x2B9704u;
        goto label_2b9704;
    }
    ctx->pc = 0x2B96FCu;
    {
        const bool branch_taken_0x2b96fc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b96fc) {
            ctx->pc = 0x2B973Cu;
            goto label_2b973c;
        }
    }
    ctx->pc = 0x2B9704u;
label_2b9704:
    // 0x2b9704: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2b9708:
    if (ctx->pc == 0x2B9708u) {
        ctx->pc = 0x2B970Cu;
        goto label_2b970c;
    }
    ctx->pc = 0x2B9704u;
    {
        const bool branch_taken_0x2b9704 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9704) {
            ctx->pc = 0x2B973Cu;
            goto label_2b973c;
        }
    }
    ctx->pc = 0x2B970Cu;
label_2b970c:
    // 0x2b970c: 0x8e5502e0  lw          $s5, 0x2E0($s2)
    ctx->pc = 0x2b970cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
label_2b9710:
    // 0x2b9710: 0x2aa10018  slti        $at, $s5, 0x18
    ctx->pc = 0x2b9710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)24) ? 1 : 0);
label_2b9714:
    // 0x2b9714: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_2b9718:
    if (ctx->pc == 0x2B9718u) {
        ctx->pc = 0x2B971Cu;
        goto label_2b971c;
    }
    ctx->pc = 0x2B9714u;
    {
        const bool branch_taken_0x2b9714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9714) {
            ctx->pc = 0x2B973Cu;
            goto label_2b973c;
        }
    }
    ctx->pc = 0x2B971Cu;
label_2b971c:
    // 0x2b971c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b971cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b9720:
    // 0x2b9720: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9724:
    // 0x2b9724: 0xc04bc40  jal         func_12F100
label_2b9728:
    if (ctx->pc == 0x2B9728u) {
        ctx->pc = 0x2B9728u;
            // 0x2b9728: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B972Cu;
        goto label_2b972c;
    }
    ctx->pc = 0x2B9724u;
    SET_GPR_U32(ctx, 31, 0x2B972Cu);
    ctx->pc = 0x2B9728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9724u;
            // 0x2b9728: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F100u;
    if (runtime->hasFunction(0x12F100u)) {
        auto targetFn = runtime->lookupFunction(0x12F100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B972Cu; }
        if (ctx->pc != 0x2B972Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexAnimeGroup__17mgCTextureManagerFii_0x12f100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B972Cu; }
        if (ctx->pc != 0x2B972Cu) { return; }
    }
    ctx->pc = 0x2B972Cu;
label_2b972c:
    // 0x2b972c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b972cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2b9730:
    // 0x2b9730: 0x2aa20018  slti        $v0, $s5, 0x18
    ctx->pc = 0x2b9730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)24) ? 1 : 0);
label_2b9734:
    // 0x2b9734: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2b9738:
    if (ctx->pc == 0x2B9738u) {
        ctx->pc = 0x2B973Cu;
        goto label_2b973c;
    }
    ctx->pc = 0x2B9734u;
    {
        const bool branch_taken_0x2b9734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9734) {
            ctx->pc = 0x2B971Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b971c;
        }
    }
    ctx->pc = 0x2B973Cu;
label_2b973c:
    // 0x2b973c: 0x0  nop
    ctx->pc = 0x2b973cu;
    // NOP
label_2b9740:
    // 0x2b9740: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b9740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9744:
    // 0x2b9744: 0xc05d398  jal         func_174E60
label_2b9748:
    if (ctx->pc == 0x2B9748u) {
        ctx->pc = 0x2B9748u;
            // 0x2b9748: 0xae6002e0  sw          $zero, 0x2E0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 736), GPR_U32(ctx, 0));
        ctx->pc = 0x2B974Cu;
        goto label_2b974c;
    }
    ctx->pc = 0x2B9744u;
    SET_GPR_U32(ctx, 31, 0x2B974Cu);
    ctx->pc = 0x2B9748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9744u;
            // 0x2b9748: 0xae6002e0  sw          $zero, 0x2E0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174E60u;
    if (runtime->hasFunction(0x174E60u)) {
        auto targetFn = runtime->lookupFunction(0x174E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B974Cu; }
        if (ctx->pc != 0x2B974Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteImage__11CCharacter2Fv_0x174e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B974Cu; }
        if (ctx->pc != 0x2B974Cu) { return; }
    }
    ctx->pc = 0x2B974Cu;
label_2b974c:
    // 0x2b974c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2b974cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b9750:
    // 0x2b9750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b9750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9754:
    // 0x2b9754: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b9754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b9758:
    // 0x2b9758: 0x320f809  jalr        $t9
label_2b975c:
    if (ctx->pc == 0x2B975Cu) {
        ctx->pc = 0x2B975Cu;
            // 0x2b975c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9760u;
        goto label_2b9760;
    }
    ctx->pc = 0x2B9758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B9760u);
        ctx->pc = 0x2B975Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9758u;
            // 0x2b975c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B9760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B9760u; }
            if (ctx->pc != 0x2B9760u) { return; }
        }
        }
    }
    ctx->pc = 0x2B9760u;
label_2b9760:
    // 0x2b9760: 0x17c00014  bnez        $fp, . + 4 + (0x14 << 2)
label_2b9764:
    if (ctx->pc == 0x2B9764u) {
        ctx->pc = 0x2B9764u;
            // 0x2b9764: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x2B9768u;
        goto label_2b9768;
    }
    ctx->pc = 0x2B9760u;
    {
        const bool branch_taken_0x2b9760 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9760u;
            // 0x2b9764: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9760) {
            ctx->pc = 0x2B97B4u;
            goto label_2b97b4;
        }
    }
    ctx->pc = 0x2B9768u;
label_2b9768:
    // 0x2b9768: 0x8c22d8c0  lw          $v0, -0x2740($at)
    ctx->pc = 0x2b9768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
label_2b976c:
    // 0x2b976c: 0xc0664ac  jal         func_1992B0
label_2b9770:
    if (ctx->pc == 0x2B9770u) {
        ctx->pc = 0x2B9770u;
            // 0x2b9770: 0x24440170  addiu       $a0, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->pc = 0x2B9774u;
        goto label_2b9774;
    }
    ctx->pc = 0x2B976Cu;
    SET_GPR_U32(ctx, 31, 0x2B9774u);
    ctx->pc = 0x2B9770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B976Cu;
            // 0x2b9770: 0x24440170  addiu       $a0, $v0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9774u; }
        if (ctx->pc != 0x2B9774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9774u; }
        if (ctx->pc != 0x2B9774u) { return; }
    }
    ctx->pc = 0x2B9774u;
label_2b9774:
    // 0x2b9774: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2b9778:
    if (ctx->pc == 0x2B9778u) {
        ctx->pc = 0x2B977Cu;
        goto label_2b977c;
    }
    ctx->pc = 0x2B9774u;
    {
        const bool branch_taken_0x2b9774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9774) {
            ctx->pc = 0x2B97B4u;
            goto label_2b97b4;
        }
    }
    ctx->pc = 0x2B977Cu;
label_2b977c:
    // 0x2b977c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2b977cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b9780:
    // 0x2b9780: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2b9780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2b9784:
    // 0x2b9784: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2b9784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b9788:
    // 0x2b9788: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2b9788u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b978c:
    // 0x2b978c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b978cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9790:
    // 0x2b9790: 0x24c64c28  addiu       $a2, $a2, 0x4C28
    ctx->pc = 0x2b9790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19496));
label_2b9794:
    // 0x2b9794: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b9794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9798:
    // 0x2b9798: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2b9798u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b979c:
    // 0x2b979c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2b979cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b97a0:
    // 0x2b97a0: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2b97a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2b97a4:
    // 0x2b97a4: 0x320f809  jalr        $t9
label_2b97a8:
    if (ctx->pc == 0x2B97A8u) {
        ctx->pc = 0x2B97A8u;
            // 0x2b97a8: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B97ACu;
        goto label_2b97ac;
    }
    ctx->pc = 0x2B97A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B97ACu);
        ctx->pc = 0x2B97A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B97A4u;
            // 0x2b97a8: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B97ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B97ACu; }
            if (ctx->pc != 0x2B97ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2B97ACu;
label_2b97ac:
    // 0x2b97ac: 0x1000000d  b           . + 4 + (0xD << 2)
label_2b97b0:
    if (ctx->pc == 0x2B97B0u) {
        ctx->pc = 0x2B97B4u;
        goto label_2b97b4;
    }
    ctx->pc = 0x2B97ACu;
    {
        const bool branch_taken_0x2b97ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b97ac) {
            ctx->pc = 0x2B97E4u;
            goto label_2b97e4;
        }
    }
    ctx->pc = 0x2B97B4u;
label_2b97b4:
    // 0x2b97b4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2b97b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b97b8:
    // 0x2b97b8: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2b97b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2b97bc:
    // 0x2b97bc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2b97bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b97c0:
    // 0x2b97c0: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2b97c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b97c4:
    // 0x2b97c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b97c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b97c8:
    // 0x2b97c8: 0x24c64c28  addiu       $a2, $a2, 0x4C28
    ctx->pc = 0x2b97c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19496));
label_2b97cc:
    // 0x2b97cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b97ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b97d0:
    // 0x2b97d0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2b97d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b97d4:
    // 0x2b97d4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2b97d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b97d8:
    // 0x2b97d8: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2b97d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2b97dc:
    // 0x2b97dc: 0x320f809  jalr        $t9
label_2b97e0:
    if (ctx->pc == 0x2B97E0u) {
        ctx->pc = 0x2B97E0u;
            // 0x2b97e0: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B97E4u;
        goto label_2b97e4;
    }
    ctx->pc = 0x2B97DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B97E4u);
        ctx->pc = 0x2B97E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B97DCu;
            // 0x2b97e0: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B97E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B97E4u; }
            if (ctx->pc != 0x2B97E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2B97E4u;
label_2b97e4:
    // 0x2b97e4: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_2b97e8:
    if (ctx->pc == 0x2B97E8u) {
        ctx->pc = 0x2B97E8u;
            // 0x2b97e8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2B97ECu;
        goto label_2b97ec;
    }
    ctx->pc = 0x2B97E4u;
    {
        const bool branch_taken_0x2b97e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B97E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B97E4u;
            // 0x2b97e8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97e4) {
            ctx->pc = 0x2B9894u;
            goto label_2b9894;
        }
    }
    ctx->pc = 0x2B97ECu;
label_2b97ec:
    // 0x2b97ec: 0x16c30029  bne         $s6, $v1, . + 4 + (0x29 << 2)
label_2b97f0:
    if (ctx->pc == 0x2B97F0u) {
        ctx->pc = 0x2B97F4u;
        goto label_2b97f4;
    }
    ctx->pc = 0x2B97ECu;
    {
        const bool branch_taken_0x2b97ec = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b97ec) {
            ctx->pc = 0x2B9894u;
            goto label_2b9894;
        }
    }
    ctx->pc = 0x2B97F4u;
label_2b97f4:
    // 0x2b97f4: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_2b97f8:
    if (ctx->pc == 0x2B97F8u) {
        ctx->pc = 0x2B97FCu;
        goto label_2b97fc;
    }
    ctx->pc = 0x2B97F4u;
    {
        const bool branch_taken_0x2b97f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b97f4) {
            ctx->pc = 0x2B9894u;
            goto label_2b9894;
        }
    }
    ctx->pc = 0x2B97FCu;
label_2b97fc:
    // 0x2b97fc: 0xc0abf58  jal         func_2AFD60
label_2b9800:
    if (ctx->pc == 0x2B9800u) {
        ctx->pc = 0x2B9804u;
        goto label_2b9804;
    }
    ctx->pc = 0x2B97FCu;
    SET_GPR_U32(ctx, 31, 0x2B9804u);
    ctx->pc = 0x2AFD60u;
    if (runtime->hasFunction(0x2AFD60u)) {
        auto targetFn = runtime->lookupFunction(0x2AFD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9804u; }
        if (ctx->pc != 0x2B9804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBattleLoop__Fv_0x2afd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9804u; }
        if (ctx->pc != 0x2B9804u) { return; }
    }
    ctx->pc = 0x2B9804u;
label_2b9804:
    // 0x2b9804: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_2b9808:
    if (ctx->pc == 0x2B9808u) {
        ctx->pc = 0x2B980Cu;
        goto label_2b980c;
    }
    ctx->pc = 0x2B9804u;
    {
        const bool branch_taken_0x2b9804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9804) {
            ctx->pc = 0x2B9894u;
            goto label_2b9894;
        }
    }
    ctx->pc = 0x2B980Cu;
label_2b980c:
    // 0x2b980c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2b980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2b9810:
    // 0x2b9810: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b9810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_2b9814:
    // 0x2b9814: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x2b9814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2b9818:
    // 0x2b9818: 0x2484d010  addiu       $a0, $a0, -0x2FF0
    ctx->pc = 0x2b9818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955024));
label_2b981c:
    // 0x2b981c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2b981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2b9820:
    // 0x2b9820: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2b9820u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2b9824:
    // 0x2b9824: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2b9824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2b9828:
    // 0x2b9828: 0xc04e79c  jal         func_139E70
label_2b982c:
    if (ctx->pc == 0x2B982Cu) {
        ctx->pc = 0x2B982Cu;
            // 0x2b982c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2B9830u;
        goto label_2b9830;
    }
    ctx->pc = 0x2B9828u;
    SET_GPR_U32(ctx, 31, 0x2B9830u);
    ctx->pc = 0x2B982Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9828u;
            // 0x2b982c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9830u; }
        if (ctx->pc != 0x2B9830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9830u; }
        if (ctx->pc != 0x2B9830u) { return; }
    }
    ctx->pc = 0x2B9830u;
label_2b9830:
    // 0x2b9830: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x2b9830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2b9834:
    // 0x2b9834: 0x3c0501f1  lui         $a1, 0x1F1
    ctx->pc = 0x2b9834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)497 << 16));
label_2b9838:
    // 0x2b9838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b9838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b983c:
    // 0x2b983c: 0xc07a358  jal         func_1E8D60
label_2b9840:
    if (ctx->pc == 0x2B9840u) {
        ctx->pc = 0x2B9840u;
            // 0x2b9840: 0x24a5d010  addiu       $a1, $a1, -0x2FF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955024));
        ctx->pc = 0x2B9844u;
        goto label_2b9844;
    }
    ctx->pc = 0x2B983Cu;
    SET_GPR_U32(ctx, 31, 0x2B9844u);
    ctx->pc = 0x2B9840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B983Cu;
            // 0x2b9840: 0x24a5d010  addiu       $a1, $a1, -0x2FF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D60u;
    if (runtime->hasFunction(0x1E8D60u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9844u; }
        if (ctx->pc != 0x2B9844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSwordBlurEffect__FP11CCharacter2P9mgCMemoryi_0x1e8d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9844u; }
        if (ctx->pc != 0x2B9844u) { return; }
    }
    ctx->pc = 0x2B9844u;
label_2b9844:
    // 0x2b9844: 0x10000013  b           . + 4 + (0x13 << 2)
label_2b9848:
    if (ctx->pc == 0x2B9848u) {
        ctx->pc = 0x2B984Cu;
        goto label_2b984c;
    }
    ctx->pc = 0x2B9844u;
    {
        const bool branch_taken_0x2b9844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9844) {
            ctx->pc = 0x2B9894u;
            goto label_2b9894;
        }
    }
    ctx->pc = 0x2B984Cu;
label_2b984c:
    // 0x2b984c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_2b9850:
    if (ctx->pc == 0x2B9850u) {
        ctx->pc = 0x2B9854u;
        goto label_2b9854;
    }
    ctx->pc = 0x2B984Cu;
    {
        const bool branch_taken_0x2b984c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b984c) {
            ctx->pc = 0x2B9870u;
            goto label_2b9870;
        }
    }
    ctx->pc = 0x2B9854u;
label_2b9854:
    // 0x2b9854: 0x12720006  beq         $s3, $s2, . + 4 + (0x6 << 2)
label_2b9858:
    if (ctx->pc == 0x2B9858u) {
        ctx->pc = 0x2B985Cu;
        goto label_2b985c;
    }
    ctx->pc = 0x2B9854u;
    {
        const bool branch_taken_0x2b9854 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        if (branch_taken_0x2b9854) {
            ctx->pc = 0x2B9870u;
            goto label_2b9870;
        }
    }
    ctx->pc = 0x2B985Cu;
label_2b985c:
    // 0x2b985c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2b985cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b9860:
    // 0x2b9860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b9860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b9864:
    // 0x2b9864: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b9864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b9868:
    // 0x2b9868: 0x320f809  jalr        $t9
label_2b986c:
    if (ctx->pc == 0x2B986Cu) {
        ctx->pc = 0x2B986Cu;
            // 0x2b986c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9870u;
        goto label_2b9870;
    }
    ctx->pc = 0x2B9868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B9870u);
        ctx->pc = 0x2B986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9868u;
            // 0x2b986c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B9870u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B9870u; }
            if (ctx->pc != 0x2B9870u) { return; }
        }
        }
    }
    ctx->pc = 0x2B9870u;
label_2b9870:
    // 0x2b9870: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x2b9870u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_2b9874:
    // 0x2b9874: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2b9874u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2b9878:
    // 0x2b9878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b9878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b987c:
    // 0x2b987c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2b987cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b9880:
    // 0x2b9880: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2b9880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9884:
    // 0x2b9884: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2b9884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9888:
    // 0x2b9888: 0x24c64c28  addiu       $a2, $a2, 0x4C28
    ctx->pc = 0x2b9888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19496));
label_2b988c:
    // 0x2b988c: 0xc05d470  jal         func_1751C0
label_2b9890:
    if (ctx->pc == 0x2B9890u) {
        ctx->pc = 0x2B9890u;
            // 0x2b9890: 0x24e7f468  addiu       $a3, $a3, -0xB98 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964328));
        ctx->pc = 0x2B9894u;
        goto label_2b9894;
    }
    ctx->pc = 0x2B988Cu;
    SET_GPR_U32(ctx, 31, 0x2B9894u);
    ctx->pc = 0x2B9890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B988Cu;
            // 0x2b9890: 0x24e7f468  addiu       $a3, $a3, -0xB98 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1751C0u;
    if (runtime->hasFunction(0x1751C0u)) {
        auto targetFn = runtime->lookupFunction(0x1751C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9894u; }
        if (ctx->pc != 0x2B9894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSkin__11CCharacter2FPUiPcPcP9mgCMemoryi_0x1751c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9894u; }
        if (ctx->pc != 0x2B9894u) { return; }
    }
    ctx->pc = 0x2B9894u;
label_2b9894:
    // 0x2b9894: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2b9894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2b9898:
    // 0x2b9898: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2b9898u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2b989c:
    // 0x2b989c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2b989cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b98a0:
    // 0x2b98a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b98a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b98a4:
    // 0x2b98a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b98a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b98a8:
    // 0x2b98a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b98a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b98ac:
    // 0x2b98ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b98acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b98b0:
    // 0x2b98b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b98b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b98b4:
    // 0x2b98b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b98b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b98b8:
    // 0x2b98b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b98b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b98bc:
    // 0x2b98bc: 0x3e00008  jr          $ra
label_2b98c0:
    if (ctx->pc == 0x2B98C0u) {
        ctx->pc = 0x2B98C0u;
            // 0x2b98c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2B98C4u;
        goto label_fallthrough_0x2b98bc;
    }
    ctx->pc = 0x2B98BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B98C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B98BCu;
            // 0x2b98c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b98bc:
    ctx->pc = 0x2B98C4u;
}
