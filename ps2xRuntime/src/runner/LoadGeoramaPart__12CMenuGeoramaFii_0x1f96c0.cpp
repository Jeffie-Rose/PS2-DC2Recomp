#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadGeoramaPart__12CMenuGeoramaFii
// Address: 0x1f96c0 - 0x1f9a2c
void LoadGeoramaPart__12CMenuGeoramaFii_0x1f96c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadGeoramaPart__12CMenuGeoramaFii_0x1f96c0");
#endif

    switch (ctx->pc) {
        case 0x1f96c0u: goto label_1f96c0;
        case 0x1f96c4u: goto label_1f96c4;
        case 0x1f96c8u: goto label_1f96c8;
        case 0x1f96ccu: goto label_1f96cc;
        case 0x1f96d0u: goto label_1f96d0;
        case 0x1f96d4u: goto label_1f96d4;
        case 0x1f96d8u: goto label_1f96d8;
        case 0x1f96dcu: goto label_1f96dc;
        case 0x1f96e0u: goto label_1f96e0;
        case 0x1f96e4u: goto label_1f96e4;
        case 0x1f96e8u: goto label_1f96e8;
        case 0x1f96ecu: goto label_1f96ec;
        case 0x1f96f0u: goto label_1f96f0;
        case 0x1f96f4u: goto label_1f96f4;
        case 0x1f96f8u: goto label_1f96f8;
        case 0x1f96fcu: goto label_1f96fc;
        case 0x1f9700u: goto label_1f9700;
        case 0x1f9704u: goto label_1f9704;
        case 0x1f9708u: goto label_1f9708;
        case 0x1f970cu: goto label_1f970c;
        case 0x1f9710u: goto label_1f9710;
        case 0x1f9714u: goto label_1f9714;
        case 0x1f9718u: goto label_1f9718;
        case 0x1f971cu: goto label_1f971c;
        case 0x1f9720u: goto label_1f9720;
        case 0x1f9724u: goto label_1f9724;
        case 0x1f9728u: goto label_1f9728;
        case 0x1f972cu: goto label_1f972c;
        case 0x1f9730u: goto label_1f9730;
        case 0x1f9734u: goto label_1f9734;
        case 0x1f9738u: goto label_1f9738;
        case 0x1f973cu: goto label_1f973c;
        case 0x1f9740u: goto label_1f9740;
        case 0x1f9744u: goto label_1f9744;
        case 0x1f9748u: goto label_1f9748;
        case 0x1f974cu: goto label_1f974c;
        case 0x1f9750u: goto label_1f9750;
        case 0x1f9754u: goto label_1f9754;
        case 0x1f9758u: goto label_1f9758;
        case 0x1f975cu: goto label_1f975c;
        case 0x1f9760u: goto label_1f9760;
        case 0x1f9764u: goto label_1f9764;
        case 0x1f9768u: goto label_1f9768;
        case 0x1f976cu: goto label_1f976c;
        case 0x1f9770u: goto label_1f9770;
        case 0x1f9774u: goto label_1f9774;
        case 0x1f9778u: goto label_1f9778;
        case 0x1f977cu: goto label_1f977c;
        case 0x1f9780u: goto label_1f9780;
        case 0x1f9784u: goto label_1f9784;
        case 0x1f9788u: goto label_1f9788;
        case 0x1f978cu: goto label_1f978c;
        case 0x1f9790u: goto label_1f9790;
        case 0x1f9794u: goto label_1f9794;
        case 0x1f9798u: goto label_1f9798;
        case 0x1f979cu: goto label_1f979c;
        case 0x1f97a0u: goto label_1f97a0;
        case 0x1f97a4u: goto label_1f97a4;
        case 0x1f97a8u: goto label_1f97a8;
        case 0x1f97acu: goto label_1f97ac;
        case 0x1f97b0u: goto label_1f97b0;
        case 0x1f97b4u: goto label_1f97b4;
        case 0x1f97b8u: goto label_1f97b8;
        case 0x1f97bcu: goto label_1f97bc;
        case 0x1f97c0u: goto label_1f97c0;
        case 0x1f97c4u: goto label_1f97c4;
        case 0x1f97c8u: goto label_1f97c8;
        case 0x1f97ccu: goto label_1f97cc;
        case 0x1f97d0u: goto label_1f97d0;
        case 0x1f97d4u: goto label_1f97d4;
        case 0x1f97d8u: goto label_1f97d8;
        case 0x1f97dcu: goto label_1f97dc;
        case 0x1f97e0u: goto label_1f97e0;
        case 0x1f97e4u: goto label_1f97e4;
        case 0x1f97e8u: goto label_1f97e8;
        case 0x1f97ecu: goto label_1f97ec;
        case 0x1f97f0u: goto label_1f97f0;
        case 0x1f97f4u: goto label_1f97f4;
        case 0x1f97f8u: goto label_1f97f8;
        case 0x1f97fcu: goto label_1f97fc;
        case 0x1f9800u: goto label_1f9800;
        case 0x1f9804u: goto label_1f9804;
        case 0x1f9808u: goto label_1f9808;
        case 0x1f980cu: goto label_1f980c;
        case 0x1f9810u: goto label_1f9810;
        case 0x1f9814u: goto label_1f9814;
        case 0x1f9818u: goto label_1f9818;
        case 0x1f981cu: goto label_1f981c;
        case 0x1f9820u: goto label_1f9820;
        case 0x1f9824u: goto label_1f9824;
        case 0x1f9828u: goto label_1f9828;
        case 0x1f982cu: goto label_1f982c;
        case 0x1f9830u: goto label_1f9830;
        case 0x1f9834u: goto label_1f9834;
        case 0x1f9838u: goto label_1f9838;
        case 0x1f983cu: goto label_1f983c;
        case 0x1f9840u: goto label_1f9840;
        case 0x1f9844u: goto label_1f9844;
        case 0x1f9848u: goto label_1f9848;
        case 0x1f984cu: goto label_1f984c;
        case 0x1f9850u: goto label_1f9850;
        case 0x1f9854u: goto label_1f9854;
        case 0x1f9858u: goto label_1f9858;
        case 0x1f985cu: goto label_1f985c;
        case 0x1f9860u: goto label_1f9860;
        case 0x1f9864u: goto label_1f9864;
        case 0x1f9868u: goto label_1f9868;
        case 0x1f986cu: goto label_1f986c;
        case 0x1f9870u: goto label_1f9870;
        case 0x1f9874u: goto label_1f9874;
        case 0x1f9878u: goto label_1f9878;
        case 0x1f987cu: goto label_1f987c;
        case 0x1f9880u: goto label_1f9880;
        case 0x1f9884u: goto label_1f9884;
        case 0x1f9888u: goto label_1f9888;
        case 0x1f988cu: goto label_1f988c;
        case 0x1f9890u: goto label_1f9890;
        case 0x1f9894u: goto label_1f9894;
        case 0x1f9898u: goto label_1f9898;
        case 0x1f989cu: goto label_1f989c;
        case 0x1f98a0u: goto label_1f98a0;
        case 0x1f98a4u: goto label_1f98a4;
        case 0x1f98a8u: goto label_1f98a8;
        case 0x1f98acu: goto label_1f98ac;
        case 0x1f98b0u: goto label_1f98b0;
        case 0x1f98b4u: goto label_1f98b4;
        case 0x1f98b8u: goto label_1f98b8;
        case 0x1f98bcu: goto label_1f98bc;
        case 0x1f98c0u: goto label_1f98c0;
        case 0x1f98c4u: goto label_1f98c4;
        case 0x1f98c8u: goto label_1f98c8;
        case 0x1f98ccu: goto label_1f98cc;
        case 0x1f98d0u: goto label_1f98d0;
        case 0x1f98d4u: goto label_1f98d4;
        case 0x1f98d8u: goto label_1f98d8;
        case 0x1f98dcu: goto label_1f98dc;
        case 0x1f98e0u: goto label_1f98e0;
        case 0x1f98e4u: goto label_1f98e4;
        case 0x1f98e8u: goto label_1f98e8;
        case 0x1f98ecu: goto label_1f98ec;
        case 0x1f98f0u: goto label_1f98f0;
        case 0x1f98f4u: goto label_1f98f4;
        case 0x1f98f8u: goto label_1f98f8;
        case 0x1f98fcu: goto label_1f98fc;
        case 0x1f9900u: goto label_1f9900;
        case 0x1f9904u: goto label_1f9904;
        case 0x1f9908u: goto label_1f9908;
        case 0x1f990cu: goto label_1f990c;
        case 0x1f9910u: goto label_1f9910;
        case 0x1f9914u: goto label_1f9914;
        case 0x1f9918u: goto label_1f9918;
        case 0x1f991cu: goto label_1f991c;
        case 0x1f9920u: goto label_1f9920;
        case 0x1f9924u: goto label_1f9924;
        case 0x1f9928u: goto label_1f9928;
        case 0x1f992cu: goto label_1f992c;
        case 0x1f9930u: goto label_1f9930;
        case 0x1f9934u: goto label_1f9934;
        case 0x1f9938u: goto label_1f9938;
        case 0x1f993cu: goto label_1f993c;
        case 0x1f9940u: goto label_1f9940;
        case 0x1f9944u: goto label_1f9944;
        case 0x1f9948u: goto label_1f9948;
        case 0x1f994cu: goto label_1f994c;
        case 0x1f9950u: goto label_1f9950;
        case 0x1f9954u: goto label_1f9954;
        case 0x1f9958u: goto label_1f9958;
        case 0x1f995cu: goto label_1f995c;
        case 0x1f9960u: goto label_1f9960;
        case 0x1f9964u: goto label_1f9964;
        case 0x1f9968u: goto label_1f9968;
        case 0x1f996cu: goto label_1f996c;
        case 0x1f9970u: goto label_1f9970;
        case 0x1f9974u: goto label_1f9974;
        case 0x1f9978u: goto label_1f9978;
        case 0x1f997cu: goto label_1f997c;
        case 0x1f9980u: goto label_1f9980;
        case 0x1f9984u: goto label_1f9984;
        case 0x1f9988u: goto label_1f9988;
        case 0x1f998cu: goto label_1f998c;
        case 0x1f9990u: goto label_1f9990;
        case 0x1f9994u: goto label_1f9994;
        case 0x1f9998u: goto label_1f9998;
        case 0x1f999cu: goto label_1f999c;
        case 0x1f99a0u: goto label_1f99a0;
        case 0x1f99a4u: goto label_1f99a4;
        case 0x1f99a8u: goto label_1f99a8;
        case 0x1f99acu: goto label_1f99ac;
        case 0x1f99b0u: goto label_1f99b0;
        case 0x1f99b4u: goto label_1f99b4;
        case 0x1f99b8u: goto label_1f99b8;
        case 0x1f99bcu: goto label_1f99bc;
        case 0x1f99c0u: goto label_1f99c0;
        case 0x1f99c4u: goto label_1f99c4;
        case 0x1f99c8u: goto label_1f99c8;
        case 0x1f99ccu: goto label_1f99cc;
        case 0x1f99d0u: goto label_1f99d0;
        case 0x1f99d4u: goto label_1f99d4;
        case 0x1f99d8u: goto label_1f99d8;
        case 0x1f99dcu: goto label_1f99dc;
        case 0x1f99e0u: goto label_1f99e0;
        case 0x1f99e4u: goto label_1f99e4;
        case 0x1f99e8u: goto label_1f99e8;
        case 0x1f99ecu: goto label_1f99ec;
        case 0x1f99f0u: goto label_1f99f0;
        case 0x1f99f4u: goto label_1f99f4;
        case 0x1f99f8u: goto label_1f99f8;
        case 0x1f99fcu: goto label_1f99fc;
        case 0x1f9a00u: goto label_1f9a00;
        case 0x1f9a04u: goto label_1f9a04;
        case 0x1f9a08u: goto label_1f9a08;
        case 0x1f9a0cu: goto label_1f9a0c;
        case 0x1f9a10u: goto label_1f9a10;
        case 0x1f9a14u: goto label_1f9a14;
        case 0x1f9a18u: goto label_1f9a18;
        case 0x1f9a1cu: goto label_1f9a1c;
        case 0x1f9a20u: goto label_1f9a20;
        case 0x1f9a24u: goto label_1f9a24;
        case 0x1f9a28u: goto label_1f9a28;
        default: break;
    }

    ctx->pc = 0x1f96c0u;

label_1f96c0:
    // 0x1f96c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f96c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1f96c4:
    // 0x1f96c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f96c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1f96c8:
    // 0x1f96c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f96c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1f96cc:
    // 0x1f96cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f96ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f96d0:
    // 0x1f96d0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f96d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f96d4:
    // 0x1f96d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f96d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f96d8:
    // 0x1f96d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f96d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f96dc:
    // 0x1f96dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f96dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f96e0:
    // 0x1f96e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f96e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f96e4:
    // 0x1f96e4: 0x8f838ff8  lw          $v1, -0x7008($gp)
    ctx->pc = 0x1f96e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
label_1f96e8:
    // 0x1f96e8: 0x106000c8  beqz        $v1, . + 4 + (0xC8 << 2)
label_1f96ec:
    if (ctx->pc == 0x1F96ECu) {
        ctx->pc = 0x1F96ECu;
            // 0x1f96ec: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F96F0u;
        goto label_1f96f0;
    }
    ctx->pc = 0x1F96E8u;
    {
        const bool branch_taken_0x1f96e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F96ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F96E8u;
            // 0x1f96ec: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96e8) {
            ctx->pc = 0x1F9A0Cu;
            goto label_1f9a0c;
        }
    }
    ctx->pc = 0x1F96F0u;
label_1f96f0:
    // 0x1f96f0: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1f96f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f96f4:
    // 0x1f96f4: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_1f96f8:
    if (ctx->pc == 0x1F96F8u) {
        ctx->pc = 0x1F96FCu;
        goto label_1f96fc;
    }
    ctx->pc = 0x1F96F4u;
    {
        const bool branch_taken_0x1f96f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f96f4) {
            ctx->pc = 0x1F977Cu;
            goto label_1f977c;
        }
    }
    ctx->pc = 0x1F96FCu;
label_1f96fc:
    // 0x1f96fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f96fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9700:
    // 0x1f9700: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f9700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f9704:
    // 0x1f9704: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f9704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f9708:
    // 0x1f9708: 0x0  nop
    ctx->pc = 0x1f9708u;
    // NOP
label_1f970c:
    // 0x1f970c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1f970cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1f9710:
    // 0x1f9710: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1f9710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1f9714:
    // 0x1f9714: 0x320f809  jalr        $t9
label_1f9718:
    if (ctx->pc == 0x1F9718u) {
        ctx->pc = 0x1F9718u;
            // 0x1f9718: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1F971Cu;
        goto label_1f971c;
    }
    ctx->pc = 0x1F9714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F971Cu);
        ctx->pc = 0x1F9718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9714u;
            // 0x1f9718: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F971Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F971Cu; }
            if (ctx->pc != 0x1F971Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F971Cu;
label_1f971c:
    // 0x1f971c: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1f971cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f9720:
    // 0x1f9720: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f9720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f9724:
    // 0x1f9724: 0x0  nop
    ctx->pc = 0x1f9724u;
    // NOP
label_1f9728:
    // 0x1f9728: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1f9728u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1f972c:
    // 0x1f972c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f972cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9730:
    // 0x1f9730: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1f9730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1f9734:
    // 0x1f9734: 0x320f809  jalr        $t9
label_1f9738:
    if (ctx->pc == 0x1F9738u) {
        ctx->pc = 0x1F9738u;
            // 0x1f9738: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1F973Cu;
        goto label_1f973c;
    }
    ctx->pc = 0x1F9734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F973Cu);
        ctx->pc = 0x1F9738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9734u;
            // 0x1f9738: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F973Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F973Cu; }
            if (ctx->pc != 0x1F973Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F973Cu;
label_1f973c:
    // 0x1f973c: 0x93838fc4  lbu         $v1, -0x703C($gp)
    ctx->pc = 0x1f973cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938564)));
label_1f9740:
    // 0x1f9740: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1f9744:
    if (ctx->pc == 0x1F9744u) {
        ctx->pc = 0x1F9748u;
        goto label_1f9748;
    }
    ctx->pc = 0x1F9740u;
    {
        const bool branch_taken_0x1f9740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9740) {
            ctx->pc = 0x1F977Cu;
            goto label_1f977c;
        }
    }
    ctx->pc = 0x1F9748u;
label_1f9748:
    // 0x1f9748: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1f9748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f974c:
    // 0x1f974c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x1f974cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_1f9750:
    // 0x1f9750: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f9750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9754:
    // 0x1f9754: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f9754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f9758:
    // 0x1f9758: 0x320f809  jalr        $t9
label_1f975c:
    if (ctx->pc == 0x1F975Cu) {
        ctx->pc = 0x1F975Cu;
            // 0x1f975c: 0x24a5e350  addiu       $a1, $a1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959952));
        ctx->pc = 0x1F9760u;
        goto label_1f9760;
    }
    ctx->pc = 0x1F9758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9760u);
        ctx->pc = 0x1F975Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9758u;
            // 0x1f975c: 0x24a5e350  addiu       $a1, $a1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959952));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9760u; }
            if (ctx->pc != 0x1F9760u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9760u;
label_1f9760:
    // 0x1f9760: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1f9760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f9764:
    // 0x1f9764: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x1f9764u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_1f9768:
    // 0x1f9768: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f9768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f976c:
    // 0x1f976c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f976cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f9770:
    // 0x1f9770: 0x320f809  jalr        $t9
label_1f9774:
    if (ctx->pc == 0x1F9774u) {
        ctx->pc = 0x1F9774u;
            // 0x1f9774: 0x24a5e360  addiu       $a1, $a1, -0x1CA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959968));
        ctx->pc = 0x1F9778u;
        goto label_1f9778;
    }
    ctx->pc = 0x1F9770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9778u);
        ctx->pc = 0x1F9774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9770u;
            // 0x1f9774: 0x24a5e360  addiu       $a1, $a1, -0x1CA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959968));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9778u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9778u; }
            if (ctx->pc != 0x1F9778u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9778u;
label_1f9778:
    // 0x1f9778: 0xa3808fc4  sb          $zero, -0x703C($gp)
    ctx->pc = 0x1f9778u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938564), (uint8_t)GPR_U32(ctx, 0));
label_1f977c:
    // 0x1f977c: 0xae600118  sw          $zero, 0x118($s3)
    ctx->pc = 0x1f977cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
label_1f9780:
    // 0x1f9780: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1f9780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f9784:
    // 0x1f9784: 0xae600114  sw          $zero, 0x114($s3)
    ctx->pc = 0x1f9784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 0));
label_1f9788:
    // 0x1f9788: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
label_1f978c:
    if (ctx->pc == 0x1F978Cu) {
        ctx->pc = 0x1F978Cu;
            // 0x1f978c: 0xae600110  sw          $zero, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1F9790u;
        goto label_1f9790;
    }
    ctx->pc = 0x1F9788u;
    {
        const bool branch_taken_0x1f9788 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F978Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9788u;
            // 0x1f978c: 0xae600110  sw          $zero, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9788) {
            ctx->pc = 0x1F97C0u;
            goto label_1f97c0;
        }
    }
    ctx->pc = 0x1F9790u;
label_1f9790:
    // 0x1f9790: 0x8f848ff8  lw          $a0, -0x7008($gp)
    ctx->pc = 0x1f9790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
label_1f9794:
    // 0x1f9794: 0xc06c2d4  jal         func_1B0B50
label_1f9798:
    if (ctx->pc == 0x1F9798u) {
        ctx->pc = 0x1F9798u;
            // 0x1f9798: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F979Cu;
        goto label_1f979c;
    }
    ctx->pc = 0x1F9794u;
    SET_GPR_U32(ctx, 31, 0x1F979Cu);
    ctx->pc = 0x1F9798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9794u;
            // 0x1f9798: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F979Cu; }
        if (ctx->pc != 0x1F979Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F979Cu; }
        if (ctx->pc != 0x1F979Cu) { return; }
    }
    ctx->pc = 0x1F979Cu;
label_1f979c:
    // 0x1f979c: 0xae620110  sw          $v0, 0x110($s3)
    ctx->pc = 0x1f979cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
label_1f97a0:
    // 0x1f97a0: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x1f97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1f97a4:
    // 0x1f97a4: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_1f97a8:
    if (ctx->pc == 0x1F97A8u) {
        ctx->pc = 0x1F97ACu;
        goto label_1f97ac;
    }
    ctx->pc = 0x1F97A4u;
    {
        const bool branch_taken_0x1f97a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f97a4) {
            ctx->pc = 0x1F983Cu;
            goto label_1f983c;
        }
    }
    ctx->pc = 0x1F97ACu;
label_1f97ac:
    // 0x1f97ac: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x1f97acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1f97b0:
    // 0x1f97b0: 0xae630118  sw          $v1, 0x118($s3)
    ctx->pc = 0x1f97b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 3));
label_1f97b4:
    // 0x1f97b4: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x1f97b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1f97b8:
    // 0x1f97b8: 0x10000020  b           . + 4 + (0x20 << 2)
label_1f97bc:
    if (ctx->pc == 0x1F97BCu) {
        ctx->pc = 0x1F97BCu;
            // 0x1f97bc: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x1F97C0u;
        goto label_1f97c0;
    }
    ctx->pc = 0x1F97B8u;
    {
        const bool branch_taken_0x1f97b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F97BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F97B8u;
            // 0x1f97bc: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97b8) {
            ctx->pc = 0x1F983Cu;
            goto label_1f983c;
        }
    }
    ctx->pc = 0x1F97C0u;
label_1f97c0:
    // 0x1f97c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f97c4:
    // 0x1f97c4: 0x1623000d  bne         $s1, $v1, . + 4 + (0xD << 2)
label_1f97c8:
    if (ctx->pc == 0x1F97C8u) {
        ctx->pc = 0x1F97C8u;
            // 0x1f97c8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F97CCu;
        goto label_1f97cc;
    }
    ctx->pc = 0x1F97C4u;
    {
        const bool branch_taken_0x1f97c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F97C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F97C4u;
            // 0x1f97c8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97c4) {
            ctx->pc = 0x1F97FCu;
            goto label_1f97fc;
        }
    }
    ctx->pc = 0x1F97CCu;
label_1f97cc:
    // 0x1f97cc: 0x8f848ff8  lw          $a0, -0x7008($gp)
    ctx->pc = 0x1f97ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
label_1f97d0:
    // 0x1f97d0: 0xc06c2cc  jal         func_1B0B30
label_1f97d4:
    if (ctx->pc == 0x1F97D4u) {
        ctx->pc = 0x1F97D4u;
            // 0x1f97d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F97D8u;
        goto label_1f97d8;
    }
    ctx->pc = 0x1F97D0u;
    SET_GPR_U32(ctx, 31, 0x1F97D8u);
    ctx->pc = 0x1F97D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F97D0u;
            // 0x1f97d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B30u;
    if (runtime->hasFunction(0x1B0B30u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F97D8u; }
        if (ctx->pc != 0x1F97D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfo__8CEditMapFi_0x1b0b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F97D8u; }
        if (ctx->pc != 0x1F97D8u) { return; }
    }
    ctx->pc = 0x1F97D8u;
label_1f97d8:
    // 0x1f97d8: 0xae620110  sw          $v0, 0x110($s3)
    ctx->pc = 0x1f97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
label_1f97dc:
    // 0x1f97dc: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x1f97dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1f97e0:
    // 0x1f97e0: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_1f97e4:
    if (ctx->pc == 0x1F97E4u) {
        ctx->pc = 0x1F97E8u;
        goto label_1f97e8;
    }
    ctx->pc = 0x1F97E0u;
    {
        const bool branch_taken_0x1f97e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f97e0) {
            ctx->pc = 0x1F983Cu;
            goto label_1f983c;
        }
    }
    ctx->pc = 0x1F97E8u;
label_1f97e8:
    // 0x1f97e8: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x1f97e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1f97ec:
    // 0x1f97ec: 0xae630118  sw          $v1, 0x118($s3)
    ctx->pc = 0x1f97ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 3));
label_1f97f0:
    // 0x1f97f0: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x1f97f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1f97f4:
    // 0x1f97f4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1f97f8:
    if (ctx->pc == 0x1F97F8u) {
        ctx->pc = 0x1F97F8u;
            // 0x1f97f8: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x1F97FCu;
        goto label_1f97fc;
    }
    ctx->pc = 0x1F97F4u;
    {
        const bool branch_taken_0x1f97f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F97F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F97F4u;
            // 0x1f97f8: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97f4) {
            ctx->pc = 0x1F983Cu;
            goto label_1f983c;
        }
    }
    ctx->pc = 0x1F97FCu;
label_1f97fc:
    // 0x1f97fc: 0x1623000f  bne         $s1, $v1, . + 4 + (0xF << 2)
label_1f9800:
    if (ctx->pc == 0x1F9800u) {
        ctx->pc = 0x1F9804u;
        goto label_1f9804;
    }
    ctx->pc = 0x1F97FCu;
    {
        const bool branch_taken_0x1f97fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f97fc) {
            ctx->pc = 0x1F983Cu;
            goto label_1f983c;
        }
    }
    ctx->pc = 0x1F9804u;
label_1f9804:
    // 0x1f9804: 0x8f848ff8  lw          $a0, -0x7008($gp)
    ctx->pc = 0x1f9804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938616)));
label_1f9808:
    // 0x1f9808: 0xc06c310  jal         func_1B0C40
label_1f980c:
    if (ctx->pc == 0x1F980Cu) {
        ctx->pc = 0x1F980Cu;
            // 0x1f980c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9810u;
        goto label_1f9810;
    }
    ctx->pc = 0x1F9808u;
    SET_GPR_U32(ctx, 31, 0x1F9810u);
    ctx->pc = 0x1F980Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9808u;
            // 0x1f980c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9810u; }
        if (ctx->pc != 0x1F9810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9810u; }
        if (ctx->pc != 0x1F9810u) { return; }
    }
    ctx->pc = 0x1F9810u;
label_1f9810:
    // 0x1f9810: 0xae620114  sw          $v0, 0x114($s3)
    ctx->pc = 0x1f9810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 2));
label_1f9814:
    // 0x1f9814: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x1f9814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_1f9818:
    // 0x1f9818: 0xae630118  sw          $v1, 0x118($s3)
    ctx->pc = 0x1f9818u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 3));
label_1f981c:
    // 0x1f981c: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x1f981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_1f9820:
    // 0x1f9820: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1f9824:
    if (ctx->pc == 0x1F9824u) {
        ctx->pc = 0x1F9824u;
            // 0x1f9824: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F9828u;
        goto label_1f9828;
    }
    ctx->pc = 0x1F9820u;
    {
        const bool branch_taken_0x1f9820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9820u;
            // 0x1f9824: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9820) {
            ctx->pc = 0x1F983Cu;
            goto label_1f983c;
        }
    }
    ctx->pc = 0x1F9828u;
label_1f9828:
    // 0x1f9828: 0xa3838fc4  sb          $v1, -0x703C($gp)
    ctx->pc = 0x1f9828u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938564), (uint8_t)GPR_U32(ctx, 3));
label_1f982c:
    // 0x1f982c: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x1f982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_1f9830:
    // 0x1f9830: 0x8c630324  lw          $v1, 0x324($v1)
    ctx->pc = 0x1f9830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 804)));
label_1f9834:
    // 0x1f9834: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1f9834u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f9838:
    // 0x1f9838: 0x0  nop
    ctx->pc = 0x1f9838u;
    // NOP
label_1f983c:
    // 0x1f983c: 0x8e630118  lw          $v1, 0x118($s3)
    ctx->pc = 0x1f983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f9840:
    // 0x1f9840: 0xaf838fcc  sw          $v1, -0x7034($gp)
    ctx->pc = 0x1f9840u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938572), GPR_U32(ctx, 3));
label_1f9844:
    // 0x1f9844: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1f9844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f9848:
    // 0x1f9848: 0x10800070  beqz        $a0, . + 4 + (0x70 << 2)
label_1f984c:
    if (ctx->pc == 0x1F984Cu) {
        ctx->pc = 0x1F9850u;
        goto label_1f9850;
    }
    ctx->pc = 0x1F9848u;
    {
        const bool branch_taken_0x1f9848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9848) {
            ctx->pc = 0x1F9A0Cu;
            goto label_1f9a0c;
        }
    }
    ctx->pc = 0x1F9850u;
label_1f9850:
    // 0x1f9850: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f9850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9854:
    // 0x1f9854: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x1f9854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_1f9858:
    // 0x1f9858: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f9858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f985c:
    // 0x1f985c: 0x320f809  jalr        $t9
label_1f9860:
    if (ctx->pc == 0x1F9860u) {
        ctx->pc = 0x1F9860u;
            // 0x1f9860: 0x24a5e350  addiu       $a1, $a1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959952));
        ctx->pc = 0x1F9864u;
        goto label_1f9864;
    }
    ctx->pc = 0x1F985Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9864u);
        ctx->pc = 0x1F9860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F985Cu;
            // 0x1f9860: 0x24a5e350  addiu       $a1, $a1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959952));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9864u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9864u; }
            if (ctx->pc != 0x1F9864u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9864u;
label_1f9864:
    // 0x1f9864: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1f9864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f9868:
    // 0x1f9868: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x1f9868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_1f986c:
    // 0x1f986c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f986cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9870:
    // 0x1f9870: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1f9870u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1f9874:
    // 0x1f9874: 0x320f809  jalr        $t9
label_1f9878:
    if (ctx->pc == 0x1F9878u) {
        ctx->pc = 0x1F9878u;
            // 0x1f9878: 0x24a5e360  addiu       $a1, $a1, -0x1CA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959968));
        ctx->pc = 0x1F987Cu;
        goto label_1f987c;
    }
    ctx->pc = 0x1F9874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F987Cu);
        ctx->pc = 0x1F9878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9874u;
            // 0x1f9878: 0x24a5e360  addiu       $a1, $a1, -0x1CA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959968));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F987Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F987Cu; }
            if (ctx->pc != 0x1F987Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F987Cu;
label_1f987c:
    // 0x1f987c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f987cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f9880:
    // 0x1f9880: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x1f9880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_1f9884:
    // 0x1f9884: 0x2484e370  addiu       $a0, $a0, -0x1C90
    ctx->pc = 0x1f9884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959984));
label_1f9888:
    // 0x1f9888: 0xc04bc8c  jal         func_12F230
label_1f988c:
    if (ctx->pc == 0x1F988Cu) {
        ctx->pc = 0x1F988Cu;
            // 0x1f988c: 0xa3828fc4  sb          $v0, -0x703C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938564), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1F9890u;
        goto label_1f9890;
    }
    ctx->pc = 0x1F9888u;
    SET_GPR_U32(ctx, 31, 0x1F9890u);
    ctx->pc = 0x1F988Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9888u;
            // 0x1f988c: 0xa3828fc4  sb          $v0, -0x703C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938564), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9890u; }
        if (ctx->pc != 0x1F9890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9890u; }
        if (ctx->pc != 0x1F9890u) { return; }
    }
    ctx->pc = 0x1F9890u;
label_1f9890:
    // 0x1f9890: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x1f9890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
label_1f9894:
    // 0x1f9894: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1f9894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_1f9898:
    // 0x1f9898: 0xac22e374  sw          $v0, -0x1C8C($at)
    ctx->pc = 0x1f9898u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959988), GPR_U32(ctx, 2));
label_1f989c:
    // 0x1f989c: 0x3c03c160  lui         $v1, 0xC160
    ctx->pc = 0x1f989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49504 << 16));
label_1f98a0:
    // 0x1f98a0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1f98a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_1f98a4:
    // 0x1f98a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f98a8:
    // 0x1f98a8: 0xac23e378  sw          $v1, -0x1C88($at)
    ctx->pc = 0x1f98a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959992), GPR_U32(ctx, 3));
label_1f98ac:
    // 0x1f98ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f98acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f98b0:
    // 0x1f98b0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1f98b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_1f98b4:
    // 0x1f98b4: 0xac22e37c  sw          $v0, -0x1C84($at)
    ctx->pc = 0x1f98b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959996), GPR_U32(ctx, 2));
label_1f98b8:
    // 0x1f98b8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1f98b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1f98bc:
    // 0x1f98bc: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1f98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_1f98c0:
    // 0x1f98c0: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x1f98c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_1f98c4:
    // 0x1f98c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1f98c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f98c8:
    // 0x1f98c8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1f98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_1f98cc:
    // 0x1f98cc: 0x2442e380  addiu       $v0, $v0, -0x1C80
    ctx->pc = 0x1f98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960000));
label_1f98d0:
    // 0x1f98d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1f98d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1f98d4:
    // 0x1f98d4: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1f98d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f98d8:
    // 0x1f98d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f98d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f98dc:
    // 0x1f98dc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1f98dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1f98e0:
    // 0x1f98e0: 0x320f809  jalr        $t9
label_1f98e4:
    if (ctx->pc == 0x1F98E4u) {
        ctx->pc = 0x1F98E4u;
            // 0x1f98e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1F98E8u;
        goto label_1f98e8;
    }
    ctx->pc = 0x1F98E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F98E8u);
        ctx->pc = 0x1F98E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F98E0u;
            // 0x1f98e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F98E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F98E8u; }
            if (ctx->pc != 0x1F98E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1F98E8u;
label_1f98e8:
    // 0x1f98e8: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1f98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f98ec:
    // 0x1f98ec: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_1f98f0:
    if (ctx->pc == 0x1F98F0u) {
        ctx->pc = 0x1F98F4u;
        goto label_1f98f4;
    }
    ctx->pc = 0x1F98ECu;
    {
        const bool branch_taken_0x1f98ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f98ec) {
            ctx->pc = 0x1F9930u;
            goto label_1f9930;
        }
    }
    ctx->pc = 0x1F98F4u;
label_1f98f4:
    // 0x1f98f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f98f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f98f8:
    // 0x1f98f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f98f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f98fc:
    // 0x1f98fc: 0x0  nop
    ctx->pc = 0x1f98fcu;
    // NOP
label_1f9900:
    // 0x1f9900: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1f9900u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1f9904:
    // 0x1f9904: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1f9904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f9908:
    // 0x1f9908: 0x320f809  jalr        $t9
label_1f990c:
    if (ctx->pc == 0x1F990Cu) {
        ctx->pc = 0x1F990Cu;
            // 0x1f990c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1F9910u;
        goto label_1f9910;
    }
    ctx->pc = 0x1F9908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9910u);
        ctx->pc = 0x1F990Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9908u;
            // 0x1f990c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9910u; }
            if (ctx->pc != 0x1F9910u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9910u;
label_1f9910:
    // 0x1f9910: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1f9910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f9914:
    // 0x1f9914: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f9914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f9918:
    // 0x1f9918: 0x0  nop
    ctx->pc = 0x1f9918u;
    // NOP
label_1f991c:
    // 0x1f991c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1f991cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1f9920:
    // 0x1f9920: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f9920u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9924:
    // 0x1f9924: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1f9924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1f9928:
    // 0x1f9928: 0x320f809  jalr        $t9
label_1f992c:
    if (ctx->pc == 0x1F992Cu) {
        ctx->pc = 0x1F992Cu;
            // 0x1f992c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1F9930u;
        goto label_1f9930;
    }
    ctx->pc = 0x1F9928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9930u);
        ctx->pc = 0x1F992Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9928u;
            // 0x1f992c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9930u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9930u; }
            if (ctx->pc != 0x1F9930u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9930u;
label_1f9930:
    // 0x1f9930: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1f9930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f9934:
    // 0x1f9934: 0xc059c88  jal         func_167220
label_1f9938:
    if (ctx->pc == 0x1F9938u) {
        ctx->pc = 0x1F9938u;
            // 0x1f9938: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1F993Cu;
        goto label_1f993c;
    }
    ctx->pc = 0x1F9934u;
    SET_GPR_U32(ctx, 31, 0x1F993Cu);
    ctx->pc = 0x1F9938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9934u;
            // 0x1f9938: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167220u;
    if (runtime->hasFunction(0x167220u)) {
        auto targetFn = runtime->lookupFunction(0x167220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F993Cu; }
        if (ctx->pc != 0x1F993Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBoundBox__9CMapPartsFP9mgVu0FBOX_0x167220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F993Cu; }
        if (ctx->pc != 0x1F993Cu) { return; }
    }
    ctx->pc = 0x1F993Cu;
label_1f993c:
    // 0x1f993c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1f993cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_1f9940:
    // 0x1f9940: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f9940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f9944:
    // 0x1f9944: 0xc094208  jal         func_250820
label_1f9948:
    if (ctx->pc == 0x1F9948u) {
        ctx->pc = 0x1F9948u;
            // 0x1f9948: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1F994Cu;
        goto label_1f994c;
    }
    ctx->pc = 0x1F9944u;
    SET_GPR_U32(ctx, 31, 0x1F994Cu);
    ctx->pc = 0x1F9948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9944u;
            // 0x1f9948: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250820u;
    if (runtime->hasFunction(0x250820u)) {
        auto targetFn = runtime->lookupFunction(0x250820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F994Cu; }
        if (ctx->pc != 0x1F994Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAdjustPolygonScale__F9mgVu0FBOXf_0x250820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F994Cu; }
        if (ctx->pc != 0x1F994Cu) { return; }
    }
    ctx->pc = 0x1F994Cu;
label_1f994c:
    // 0x1f994c: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1f994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f9950:
    // 0x1f9950: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1f9950u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1f9954:
    // 0x1f9954: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f9954u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f9958:
    // 0x1f9958: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1f9958u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1f995c:
    // 0x1f995c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f995cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9960:
    // 0x1f9960: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1f9960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1f9964:
    // 0x1f9964: 0x320f809  jalr        $t9
label_1f9968:
    if (ctx->pc == 0x1F9968u) {
        ctx->pc = 0x1F9968u;
            // 0x1f9968: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1F996Cu;
        goto label_1f996c;
    }
    ctx->pc = 0x1F9964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F996Cu);
        ctx->pc = 0x1F9968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9964u;
            // 0x1f9968: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F996Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F996Cu; }
            if (ctx->pc != 0x1F996Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F996Cu;
label_1f996c:
    // 0x1f996c: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x1f996cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1f9970:
    // 0x1f9970: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_1f9974:
    if (ctx->pc == 0x1F9974u) {
        ctx->pc = 0x1F9978u;
        goto label_1f9978;
    }
    ctx->pc = 0x1F9970u;
    {
        const bool branch_taken_0x1f9970 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9970) {
            ctx->pc = 0x1F99A8u;
            goto label_1f99a8;
        }
    }
    ctx->pc = 0x1F9978u;
label_1f9978:
    // 0x1f9978: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1f9978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f997c:
    // 0x1f997c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1f997cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_1f9980:
    // 0x1f9980: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1f9980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f9984:
    // 0x1f9984: 0x2442e410  addiu       $v0, $v0, -0x1BF0
    ctx->pc = 0x1f9984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960144));
label_1f9988:
    // 0x1f9988: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f9988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f998c:
    // 0x1f998c: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x1f998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f9990:
    // 0x1f9990: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f9990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9994:
    // 0x1f9994: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f9994u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f9998:
    // 0x1f9998: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1f9998u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1f999c:
    // 0x1f999c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1f999cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1f99a0:
    // 0x1f99a0: 0x320f809  jalr        $t9
label_1f99a4:
    if (ctx->pc == 0x1F99A4u) {
        ctx->pc = 0x1F99A4u;
            // 0x1f99a4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1F99A8u;
        goto label_1f99a8;
    }
    ctx->pc = 0x1F99A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F99A8u);
        ctx->pc = 0x1F99A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F99A0u;
            // 0x1f99a4: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F99A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F99A8u; }
            if (ctx->pc != 0x1F99A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1F99A8u;
label_1f99a8:
    // 0x1f99a8: 0x8e620110  lw          $v0, 0x110($s3)
    ctx->pc = 0x1f99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1f99ac:
    // 0x1f99ac: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1f99b0:
    if (ctx->pc == 0x1F99B0u) {
        ctx->pc = 0x1F99B0u;
            // 0x1f99b0: 0x3c010035  lui         $at, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x1F99B4u;
        goto label_1f99b4;
    }
    ctx->pc = 0x1F99ACu;
    {
        const bool branch_taken_0x1f99ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F99B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F99ACu;
            // 0x1f99b0: 0x3c010035  lui         $at, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f99ac) {
            ctx->pc = 0x1F99F4u;
            goto label_1f99f4;
        }
    }
    ctx->pc = 0x1F99B4u;
label_1f99b4:
    // 0x1f99b4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1f99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_1f99b8:
    // 0x1f99b8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1f99b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f99bc:
    // 0x1f99bc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1f99bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f99c0:
    // 0x1f99c0: 0xc422e384  lwc1        $f2, -0x1C7C($at)
    ctx->pc = 0x1f99c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f99c4:
    // 0x1f99c4: 0x2442e590  addiu       $v0, $v0, -0x1A70
    ctx->pc = 0x1f99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960528));
label_1f99c8:
    // 0x1f99c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f99cc:
    // 0x1f99cc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1f99ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1f99d0:
    // 0x1f99d0: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1f99d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_1f99d4:
    // 0x1f99d4: 0xc420e388  lwc1        $f0, -0x1C78($at)
    ctx->pc = 0x1f99d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f99d8:
    // 0x1f99d8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1f99d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1f99dc:
    // 0x1f99dc: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1f99dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_1f99e0:
    // 0x1f99e0: 0xe421e384  swc1        $f1, -0x1C7C($at)
    ctx->pc = 0x1f99e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960004), bits); }
label_1f99e4:
    // 0x1f99e4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1f99e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f99e8:
    // 0x1f99e8: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x1f99e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_1f99ec:
    // 0x1f99ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f99ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1f99f0:
    // 0x1f99f0: 0xe420e388  swc1        $f0, -0x1C78($at)
    ctx->pc = 0x1f99f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960008), bits); }
label_1f99f4:
    // 0x1f99f4: 0x8e640118  lw          $a0, 0x118($s3)
    ctx->pc = 0x1f99f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1f99f8:
    // 0x1f99f8: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x1f99f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_1f99fc:
    // 0x1f99fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f99fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f9a00:
    // 0x1f9a00: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f9a00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f9a04:
    // 0x1f9a04: 0x320f809  jalr        $t9
label_1f9a08:
    if (ctx->pc == 0x1F9A08u) {
        ctx->pc = 0x1F9A08u;
            // 0x1f9a08: 0x24a5e380  addiu       $a1, $a1, -0x1C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960000));
        ctx->pc = 0x1F9A0Cu;
        goto label_1f9a0c;
    }
    ctx->pc = 0x1F9A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F9A0Cu);
        ctx->pc = 0x1F9A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A04u;
            // 0x1f9a08: 0x24a5e380  addiu       $a1, $a1, -0x1C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960000));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9A0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A0Cu; }
            if (ctx->pc != 0x1F9A0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1F9A0Cu;
label_1f9a0c:
    // 0x1f9a0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f9a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f9a10:
    // 0x1f9a10: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f9a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f9a14:
    // 0x1f9a14: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f9a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f9a18:
    // 0x1f9a18: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f9a18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f9a1c:
    // 0x1f9a1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f9a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f9a20:
    // 0x1f9a20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f9a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9a24:
    // 0x1f9a24: 0x3e00008  jr          $ra
label_1f9a28:
    if (ctx->pc == 0x1F9A28u) {
        ctx->pc = 0x1F9A28u;
            // 0x1f9a28: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1F9A2Cu;
        goto label_fallthrough_0x1f9a24;
    }
    ctx->pc = 0x1F9A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A24u;
            // 0x1f9a28: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1f9a24:
    ctx->pc = 0x1F9A2Cu;
}
