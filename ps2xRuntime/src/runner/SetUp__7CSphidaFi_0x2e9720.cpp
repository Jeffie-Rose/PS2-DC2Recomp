#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetUp__7CSphidaFi
// Address: 0x2e9720 - 0x2e9ba0
void SetUp__7CSphidaFi_0x2e9720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetUp__7CSphidaFi_0x2e9720");
#endif

    switch (ctx->pc) {
        case 0x2e9720u: goto label_2e9720;
        case 0x2e9724u: goto label_2e9724;
        case 0x2e9728u: goto label_2e9728;
        case 0x2e972cu: goto label_2e972c;
        case 0x2e9730u: goto label_2e9730;
        case 0x2e9734u: goto label_2e9734;
        case 0x2e9738u: goto label_2e9738;
        case 0x2e973cu: goto label_2e973c;
        case 0x2e9740u: goto label_2e9740;
        case 0x2e9744u: goto label_2e9744;
        case 0x2e9748u: goto label_2e9748;
        case 0x2e974cu: goto label_2e974c;
        case 0x2e9750u: goto label_2e9750;
        case 0x2e9754u: goto label_2e9754;
        case 0x2e9758u: goto label_2e9758;
        case 0x2e975cu: goto label_2e975c;
        case 0x2e9760u: goto label_2e9760;
        case 0x2e9764u: goto label_2e9764;
        case 0x2e9768u: goto label_2e9768;
        case 0x2e976cu: goto label_2e976c;
        case 0x2e9770u: goto label_2e9770;
        case 0x2e9774u: goto label_2e9774;
        case 0x2e9778u: goto label_2e9778;
        case 0x2e977cu: goto label_2e977c;
        case 0x2e9780u: goto label_2e9780;
        case 0x2e9784u: goto label_2e9784;
        case 0x2e9788u: goto label_2e9788;
        case 0x2e978cu: goto label_2e978c;
        case 0x2e9790u: goto label_2e9790;
        case 0x2e9794u: goto label_2e9794;
        case 0x2e9798u: goto label_2e9798;
        case 0x2e979cu: goto label_2e979c;
        case 0x2e97a0u: goto label_2e97a0;
        case 0x2e97a4u: goto label_2e97a4;
        case 0x2e97a8u: goto label_2e97a8;
        case 0x2e97acu: goto label_2e97ac;
        case 0x2e97b0u: goto label_2e97b0;
        case 0x2e97b4u: goto label_2e97b4;
        case 0x2e97b8u: goto label_2e97b8;
        case 0x2e97bcu: goto label_2e97bc;
        case 0x2e97c0u: goto label_2e97c0;
        case 0x2e97c4u: goto label_2e97c4;
        case 0x2e97c8u: goto label_2e97c8;
        case 0x2e97ccu: goto label_2e97cc;
        case 0x2e97d0u: goto label_2e97d0;
        case 0x2e97d4u: goto label_2e97d4;
        case 0x2e97d8u: goto label_2e97d8;
        case 0x2e97dcu: goto label_2e97dc;
        case 0x2e97e0u: goto label_2e97e0;
        case 0x2e97e4u: goto label_2e97e4;
        case 0x2e97e8u: goto label_2e97e8;
        case 0x2e97ecu: goto label_2e97ec;
        case 0x2e97f0u: goto label_2e97f0;
        case 0x2e97f4u: goto label_2e97f4;
        case 0x2e97f8u: goto label_2e97f8;
        case 0x2e97fcu: goto label_2e97fc;
        case 0x2e9800u: goto label_2e9800;
        case 0x2e9804u: goto label_2e9804;
        case 0x2e9808u: goto label_2e9808;
        case 0x2e980cu: goto label_2e980c;
        case 0x2e9810u: goto label_2e9810;
        case 0x2e9814u: goto label_2e9814;
        case 0x2e9818u: goto label_2e9818;
        case 0x2e981cu: goto label_2e981c;
        case 0x2e9820u: goto label_2e9820;
        case 0x2e9824u: goto label_2e9824;
        case 0x2e9828u: goto label_2e9828;
        case 0x2e982cu: goto label_2e982c;
        case 0x2e9830u: goto label_2e9830;
        case 0x2e9834u: goto label_2e9834;
        case 0x2e9838u: goto label_2e9838;
        case 0x2e983cu: goto label_2e983c;
        case 0x2e9840u: goto label_2e9840;
        case 0x2e9844u: goto label_2e9844;
        case 0x2e9848u: goto label_2e9848;
        case 0x2e984cu: goto label_2e984c;
        case 0x2e9850u: goto label_2e9850;
        case 0x2e9854u: goto label_2e9854;
        case 0x2e9858u: goto label_2e9858;
        case 0x2e985cu: goto label_2e985c;
        case 0x2e9860u: goto label_2e9860;
        case 0x2e9864u: goto label_2e9864;
        case 0x2e9868u: goto label_2e9868;
        case 0x2e986cu: goto label_2e986c;
        case 0x2e9870u: goto label_2e9870;
        case 0x2e9874u: goto label_2e9874;
        case 0x2e9878u: goto label_2e9878;
        case 0x2e987cu: goto label_2e987c;
        case 0x2e9880u: goto label_2e9880;
        case 0x2e9884u: goto label_2e9884;
        case 0x2e9888u: goto label_2e9888;
        case 0x2e988cu: goto label_2e988c;
        case 0x2e9890u: goto label_2e9890;
        case 0x2e9894u: goto label_2e9894;
        case 0x2e9898u: goto label_2e9898;
        case 0x2e989cu: goto label_2e989c;
        case 0x2e98a0u: goto label_2e98a0;
        case 0x2e98a4u: goto label_2e98a4;
        case 0x2e98a8u: goto label_2e98a8;
        case 0x2e98acu: goto label_2e98ac;
        case 0x2e98b0u: goto label_2e98b0;
        case 0x2e98b4u: goto label_2e98b4;
        case 0x2e98b8u: goto label_2e98b8;
        case 0x2e98bcu: goto label_2e98bc;
        case 0x2e98c0u: goto label_2e98c0;
        case 0x2e98c4u: goto label_2e98c4;
        case 0x2e98c8u: goto label_2e98c8;
        case 0x2e98ccu: goto label_2e98cc;
        case 0x2e98d0u: goto label_2e98d0;
        case 0x2e98d4u: goto label_2e98d4;
        case 0x2e98d8u: goto label_2e98d8;
        case 0x2e98dcu: goto label_2e98dc;
        case 0x2e98e0u: goto label_2e98e0;
        case 0x2e98e4u: goto label_2e98e4;
        case 0x2e98e8u: goto label_2e98e8;
        case 0x2e98ecu: goto label_2e98ec;
        case 0x2e98f0u: goto label_2e98f0;
        case 0x2e98f4u: goto label_2e98f4;
        case 0x2e98f8u: goto label_2e98f8;
        case 0x2e98fcu: goto label_2e98fc;
        case 0x2e9900u: goto label_2e9900;
        case 0x2e9904u: goto label_2e9904;
        case 0x2e9908u: goto label_2e9908;
        case 0x2e990cu: goto label_2e990c;
        case 0x2e9910u: goto label_2e9910;
        case 0x2e9914u: goto label_2e9914;
        case 0x2e9918u: goto label_2e9918;
        case 0x2e991cu: goto label_2e991c;
        case 0x2e9920u: goto label_2e9920;
        case 0x2e9924u: goto label_2e9924;
        case 0x2e9928u: goto label_2e9928;
        case 0x2e992cu: goto label_2e992c;
        case 0x2e9930u: goto label_2e9930;
        case 0x2e9934u: goto label_2e9934;
        case 0x2e9938u: goto label_2e9938;
        case 0x2e993cu: goto label_2e993c;
        case 0x2e9940u: goto label_2e9940;
        case 0x2e9944u: goto label_2e9944;
        case 0x2e9948u: goto label_2e9948;
        case 0x2e994cu: goto label_2e994c;
        case 0x2e9950u: goto label_2e9950;
        case 0x2e9954u: goto label_2e9954;
        case 0x2e9958u: goto label_2e9958;
        case 0x2e995cu: goto label_2e995c;
        case 0x2e9960u: goto label_2e9960;
        case 0x2e9964u: goto label_2e9964;
        case 0x2e9968u: goto label_2e9968;
        case 0x2e996cu: goto label_2e996c;
        case 0x2e9970u: goto label_2e9970;
        case 0x2e9974u: goto label_2e9974;
        case 0x2e9978u: goto label_2e9978;
        case 0x2e997cu: goto label_2e997c;
        case 0x2e9980u: goto label_2e9980;
        case 0x2e9984u: goto label_2e9984;
        case 0x2e9988u: goto label_2e9988;
        case 0x2e998cu: goto label_2e998c;
        case 0x2e9990u: goto label_2e9990;
        case 0x2e9994u: goto label_2e9994;
        case 0x2e9998u: goto label_2e9998;
        case 0x2e999cu: goto label_2e999c;
        case 0x2e99a0u: goto label_2e99a0;
        case 0x2e99a4u: goto label_2e99a4;
        case 0x2e99a8u: goto label_2e99a8;
        case 0x2e99acu: goto label_2e99ac;
        case 0x2e99b0u: goto label_2e99b0;
        case 0x2e99b4u: goto label_2e99b4;
        case 0x2e99b8u: goto label_2e99b8;
        case 0x2e99bcu: goto label_2e99bc;
        case 0x2e99c0u: goto label_2e99c0;
        case 0x2e99c4u: goto label_2e99c4;
        case 0x2e99c8u: goto label_2e99c8;
        case 0x2e99ccu: goto label_2e99cc;
        case 0x2e99d0u: goto label_2e99d0;
        case 0x2e99d4u: goto label_2e99d4;
        case 0x2e99d8u: goto label_2e99d8;
        case 0x2e99dcu: goto label_2e99dc;
        case 0x2e99e0u: goto label_2e99e0;
        case 0x2e99e4u: goto label_2e99e4;
        case 0x2e99e8u: goto label_2e99e8;
        case 0x2e99ecu: goto label_2e99ec;
        case 0x2e99f0u: goto label_2e99f0;
        case 0x2e99f4u: goto label_2e99f4;
        case 0x2e99f8u: goto label_2e99f8;
        case 0x2e99fcu: goto label_2e99fc;
        case 0x2e9a00u: goto label_2e9a00;
        case 0x2e9a04u: goto label_2e9a04;
        case 0x2e9a08u: goto label_2e9a08;
        case 0x2e9a0cu: goto label_2e9a0c;
        case 0x2e9a10u: goto label_2e9a10;
        case 0x2e9a14u: goto label_2e9a14;
        case 0x2e9a18u: goto label_2e9a18;
        case 0x2e9a1cu: goto label_2e9a1c;
        case 0x2e9a20u: goto label_2e9a20;
        case 0x2e9a24u: goto label_2e9a24;
        case 0x2e9a28u: goto label_2e9a28;
        case 0x2e9a2cu: goto label_2e9a2c;
        case 0x2e9a30u: goto label_2e9a30;
        case 0x2e9a34u: goto label_2e9a34;
        case 0x2e9a38u: goto label_2e9a38;
        case 0x2e9a3cu: goto label_2e9a3c;
        case 0x2e9a40u: goto label_2e9a40;
        case 0x2e9a44u: goto label_2e9a44;
        case 0x2e9a48u: goto label_2e9a48;
        case 0x2e9a4cu: goto label_2e9a4c;
        case 0x2e9a50u: goto label_2e9a50;
        case 0x2e9a54u: goto label_2e9a54;
        case 0x2e9a58u: goto label_2e9a58;
        case 0x2e9a5cu: goto label_2e9a5c;
        case 0x2e9a60u: goto label_2e9a60;
        case 0x2e9a64u: goto label_2e9a64;
        case 0x2e9a68u: goto label_2e9a68;
        case 0x2e9a6cu: goto label_2e9a6c;
        case 0x2e9a70u: goto label_2e9a70;
        case 0x2e9a74u: goto label_2e9a74;
        case 0x2e9a78u: goto label_2e9a78;
        case 0x2e9a7cu: goto label_2e9a7c;
        case 0x2e9a80u: goto label_2e9a80;
        case 0x2e9a84u: goto label_2e9a84;
        case 0x2e9a88u: goto label_2e9a88;
        case 0x2e9a8cu: goto label_2e9a8c;
        case 0x2e9a90u: goto label_2e9a90;
        case 0x2e9a94u: goto label_2e9a94;
        case 0x2e9a98u: goto label_2e9a98;
        case 0x2e9a9cu: goto label_2e9a9c;
        case 0x2e9aa0u: goto label_2e9aa0;
        case 0x2e9aa4u: goto label_2e9aa4;
        case 0x2e9aa8u: goto label_2e9aa8;
        case 0x2e9aacu: goto label_2e9aac;
        case 0x2e9ab0u: goto label_2e9ab0;
        case 0x2e9ab4u: goto label_2e9ab4;
        case 0x2e9ab8u: goto label_2e9ab8;
        case 0x2e9abcu: goto label_2e9abc;
        case 0x2e9ac0u: goto label_2e9ac0;
        case 0x2e9ac4u: goto label_2e9ac4;
        case 0x2e9ac8u: goto label_2e9ac8;
        case 0x2e9accu: goto label_2e9acc;
        case 0x2e9ad0u: goto label_2e9ad0;
        case 0x2e9ad4u: goto label_2e9ad4;
        case 0x2e9ad8u: goto label_2e9ad8;
        case 0x2e9adcu: goto label_2e9adc;
        case 0x2e9ae0u: goto label_2e9ae0;
        case 0x2e9ae4u: goto label_2e9ae4;
        case 0x2e9ae8u: goto label_2e9ae8;
        case 0x2e9aecu: goto label_2e9aec;
        case 0x2e9af0u: goto label_2e9af0;
        case 0x2e9af4u: goto label_2e9af4;
        case 0x2e9af8u: goto label_2e9af8;
        case 0x2e9afcu: goto label_2e9afc;
        case 0x2e9b00u: goto label_2e9b00;
        case 0x2e9b04u: goto label_2e9b04;
        case 0x2e9b08u: goto label_2e9b08;
        case 0x2e9b0cu: goto label_2e9b0c;
        case 0x2e9b10u: goto label_2e9b10;
        case 0x2e9b14u: goto label_2e9b14;
        case 0x2e9b18u: goto label_2e9b18;
        case 0x2e9b1cu: goto label_2e9b1c;
        case 0x2e9b20u: goto label_2e9b20;
        case 0x2e9b24u: goto label_2e9b24;
        case 0x2e9b28u: goto label_2e9b28;
        case 0x2e9b2cu: goto label_2e9b2c;
        case 0x2e9b30u: goto label_2e9b30;
        case 0x2e9b34u: goto label_2e9b34;
        case 0x2e9b38u: goto label_2e9b38;
        case 0x2e9b3cu: goto label_2e9b3c;
        case 0x2e9b40u: goto label_2e9b40;
        case 0x2e9b44u: goto label_2e9b44;
        case 0x2e9b48u: goto label_2e9b48;
        case 0x2e9b4cu: goto label_2e9b4c;
        case 0x2e9b50u: goto label_2e9b50;
        case 0x2e9b54u: goto label_2e9b54;
        case 0x2e9b58u: goto label_2e9b58;
        case 0x2e9b5cu: goto label_2e9b5c;
        case 0x2e9b60u: goto label_2e9b60;
        case 0x2e9b64u: goto label_2e9b64;
        case 0x2e9b68u: goto label_2e9b68;
        case 0x2e9b6cu: goto label_2e9b6c;
        case 0x2e9b70u: goto label_2e9b70;
        case 0x2e9b74u: goto label_2e9b74;
        case 0x2e9b78u: goto label_2e9b78;
        case 0x2e9b7cu: goto label_2e9b7c;
        case 0x2e9b80u: goto label_2e9b80;
        case 0x2e9b84u: goto label_2e9b84;
        case 0x2e9b88u: goto label_2e9b88;
        case 0x2e9b8cu: goto label_2e9b8c;
        case 0x2e9b90u: goto label_2e9b90;
        case 0x2e9b94u: goto label_2e9b94;
        case 0x2e9b98u: goto label_2e9b98;
        case 0x2e9b9cu: goto label_2e9b9c;
        default: break;
    }

    ctx->pc = 0x2e9720u;

label_2e9720:
    // 0x2e9720: 0x27bdd360  addiu       $sp, $sp, -0x2CA0
    ctx->pc = 0x2e9720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294955872));
label_2e9724:
    // 0x2e9724: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e9724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2e9728:
    // 0x2e9728: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e9728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e972c:
    // 0x2e972c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e972cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e9730:
    // 0x2e9730: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e9730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e9734:
    // 0x2e9734: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e9738:
    // 0x2e9738: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e9738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e973c:
    // 0x2e973c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x2e973cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2e9740:
    // 0x2e9740: 0xc0a0ed8  jal         func_283B60
label_2e9744:
    if (ctx->pc == 0x2E9744u) {
        ctx->pc = 0x2E9744u;
            // 0x2e9744: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x2E9748u;
        goto label_2e9748;
    }
    ctx->pc = 0x2E9740u;
    SET_GPR_U32(ctx, 31, 0x2E9748u);
    ctx->pc = 0x2E9744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9740u;
            // 0x2e9744: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9748u; }
        if (ctx->pc != 0x2E9748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9748u; }
        if (ctx->pc != 0x2E9748u) { return; }
    }
    ctx->pc = 0x2E9748u;
label_2e9748:
    // 0x2e9748: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2e9748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e974c:
    // 0x2e974c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e974cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9750:
    // 0x2e9750: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e9750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e9754:
    // 0x2e9754: 0x320f809  jalr        $t9
label_2e9758:
    if (ctx->pc == 0x2E9758u) {
        ctx->pc = 0x2E9758u;
            // 0x2e9758: 0x27a50440  addiu       $a1, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->pc = 0x2E975Cu;
        goto label_2e975c;
    }
    ctx->pc = 0x2E9754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E975Cu);
        ctx->pc = 0x2E9758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9754u;
            // 0x2e9758: 0x27a50440  addiu       $a1, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E975Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E975Cu; }
            if (ctx->pc != 0x2E975Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E975Cu;
label_2e975c:
    // 0x2e975c: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x2e975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2e9760:
    // 0x2e9760: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e9760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9764:
    // 0x2e9764: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e9764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e9768:
    // 0x2e9768: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x2e9768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_2e976c:
    // 0x2e976c: 0x8c50300c  lw          $s0, 0x300C($v0)
    ctx->pc = 0x2e976cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12300)));
label_2e9770:
    // 0x2e9770: 0xc0a34d0  jal         func_28D340
label_2e9774:
    if (ctx->pc == 0x2E9774u) {
        ctx->pc = 0x2E9774u;
            // 0x2e9774: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2E9778u;
        goto label_2e9778;
    }
    ctx->pc = 0x2E9770u;
    SET_GPR_U32(ctx, 31, 0x2E9778u);
    ctx->pc = 0x2E9774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9770u;
            // 0x2e9774: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D340u;
    if (runtime->hasFunction(0x28D340u)) {
        auto targetFn = runtime->lookupFunction(0x28D340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9778u; }
        if (ctx->pc != 0x2E9778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapEventParts__FiPP9CMapPartsPfi_0x28d340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9778u; }
        if (ctx->pc != 0x2E9778u) { return; }
    }
    ctx->pc = 0x2E9778u;
label_2e9778:
    // 0x2e9778: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x2e9778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_2e977c:
    // 0x2e977c: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x2e977cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2e9780:
    // 0x2e9780: 0xc0a3524  jal         func_28D490
label_2e9784:
    if (ctx->pc == 0x2E9784u) {
        ctx->pc = 0x2E9784u;
            // 0x2e9784: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->pc = 0x2E9788u;
        goto label_2e9788;
    }
    ctx->pc = 0x2E9780u;
    SET_GPR_U32(ctx, 31, 0x2E9788u);
    ctx->pc = 0x2E9784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9780u;
            // 0x2e9784: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D490u;
    if (runtime->hasFunction(0x28D490u)) {
        auto targetFn = runtime->lookupFunction(0x28D490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9788u; }
        if (ctx->pc != 0x2E9788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapFlatPosition__FPfP11CAutoMapGen_0x28d490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9788u; }
        if (ctx->pc != 0x2E9788u) { return; }
    }
    ctx->pc = 0x2E9788u;
label_2e9788:
    // 0x2e9788: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
label_2e978c:
    if (ctx->pc == 0x2E978Cu) {
        ctx->pc = 0x2E9790u;
        goto label_2e9790;
    }
    ctx->pc = 0x2E9788u;
    {
        const bool branch_taken_0x2e9788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9788) {
            ctx->pc = 0x2E9778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9778;
        }
    }
    ctx->pc = 0x2E9790u;
label_2e9790:
    // 0x2e9790: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e9790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_2e9794:
    // 0x2e9794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e9798:
    // 0x2e9798: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e9798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e979c:
    // 0x2e979c: 0xc0a319c  jal         func_28C670
label_2e97a0:
    if (ctx->pc == 0x2E97A0u) {
        ctx->pc = 0x2E97A0u;
            // 0x2e97a0: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x2E97A4u;
        goto label_2e97a4;
    }
    ctx->pc = 0x2E979Cu;
    SET_GPR_U32(ctx, 31, 0x2E97A4u);
    ctx->pc = 0x2E97A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E979Cu;
            // 0x2e97a0: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C670u;
    if (runtime->hasFunction(0x28C670u)) {
        auto targetFn = runtime->lookupFunction(0x28C670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97A4u; }
        if (ctx->pc != 0x2E97A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckArea__19CTreasureBoxManagerFPff_0x28c670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97A4u; }
        if (ctx->pc != 0x2E97A4u) { return; }
    }
    ctx->pc = 0x2E97A4u;
label_2e97a4:
    // 0x2e97a4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
label_2e97a8:
    if (ctx->pc == 0x2E97A8u) {
        ctx->pc = 0x2E97ACu;
        goto label_2e97ac;
    }
    ctx->pc = 0x2E97A4u;
    {
        const bool branch_taken_0x2e97a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e97a4) {
            ctx->pc = 0x2E9778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9778;
        }
    }
    ctx->pc = 0x2E97ACu;
label_2e97ac:
    // 0x2e97ac: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e97acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_2e97b0:
    // 0x2e97b0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2e97b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_2e97b4:
    // 0x2e97b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e97b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e97b8:
    // 0x2e97b8: 0x24844b20  addiu       $a0, $a0, 0x4B20
    ctx->pc = 0x2e97b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
label_2e97bc:
    // 0x2e97bc: 0xc0a2fbc  jal         func_28BEF0
label_2e97c0:
    if (ctx->pc == 0x2E97C0u) {
        ctx->pc = 0x2E97C0u;
            // 0x2e97c0: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x2E97C4u;
        goto label_2e97c4;
    }
    ctx->pc = 0x2E97BCu;
    SET_GPR_U32(ctx, 31, 0x2E97C4u);
    ctx->pc = 0x2E97C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E97BCu;
            // 0x2e97c0: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BEF0u;
    if (runtime->hasFunction(0x28BEF0u)) {
        auto targetFn = runtime->lookupFunction(0x28BEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97C4u; }
        if (ctx->pc != 0x2E97C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckArea__13CRandomCircleFPff_0x28bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97C4u; }
        if (ctx->pc != 0x2E97C4u) { return; }
    }
    ctx->pc = 0x2E97C4u;
label_2e97c4:
    // 0x2e97c4: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
label_2e97c8:
    if (ctx->pc == 0x2E97C8u) {
        ctx->pc = 0x2E97CCu;
        goto label_2e97cc;
    }
    ctx->pc = 0x2E97C4u;
    {
        const bool branch_taken_0x2e97c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e97c4) {
            ctx->pc = 0x2E9778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9778;
        }
    }
    ctx->pc = 0x2E97CCu;
label_2e97cc:
    // 0x2e97cc: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x2e97ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_2e97d0:
    // 0x2e97d0: 0xc04c018  jal         func_130060
label_2e97d4:
    if (ctx->pc == 0x2E97D4u) {
        ctx->pc = 0x2E97D4u;
            // 0x2e97d4: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x2E97D8u;
        goto label_2e97d8;
    }
    ctx->pc = 0x2E97D0u;
    SET_GPR_U32(ctx, 31, 0x2E97D8u);
    ctx->pc = 0x2E97D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E97D0u;
            // 0x2e97d4: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97D8u; }
        if (ctx->pc != 0x2E97D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E97D8u; }
        if (ctx->pc != 0x2E97D8u) { return; }
    }
    ctx->pc = 0x2E97D8u;
label_2e97d8:
    // 0x2e97d8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_2e97dc:
    // 0x2e97dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e97dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e97e0:
    // 0x2e97e0: 0x0  nop
    ctx->pc = 0x2e97e0u;
    // NOP
label_2e97e4:
    // 0x2e97e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e97e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e97e8:
    // 0x2e97e8: 0x0  nop
    ctx->pc = 0x2e97e8u;
    // NOP
label_2e97ec:
    // 0x2e97ec: 0x4501ffe2  bc1t        . + 4 + (-0x1E << 2)
label_2e97f0:
    if (ctx->pc == 0x2E97F0u) {
        ctx->pc = 0x2E97F4u;
        goto label_2e97f4;
    }
    ctx->pc = 0x2E97ECu;
    {
        const bool branch_taken_0x2e97ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e97ec) {
            ctx->pc = 0x2E9778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9778;
        }
    }
    ctx->pc = 0x2E97F4u;
label_2e97f4:
    // 0x2e97f4: 0xc6410094  lwc1        $f1, 0x94($s2)
    ctx->pc = 0x2e97f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e97f8:
    // 0x2e97f8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2e97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2e97fc:
    // 0x2e97fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e97fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e9800:
    // 0x2e9800: 0x0  nop
    ctx->pc = 0x2e9800u;
    // NOP
label_2e9804:
    // 0x2e9804: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e9804u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e9808:
    // 0x2e9808: 0xe6400094  swc1        $f0, 0x94($s2)
    ctx->pc = 0x2e9808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
label_2e980c:
    // 0x2e980c: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x2e980cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_2e9810:
    // 0x2e9810: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x2e9810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_2e9814:
    // 0x2e9814: 0xc0a3524  jal         func_28D490
label_2e9818:
    if (ctx->pc == 0x2E9818u) {
        ctx->pc = 0x2E9818u;
            // 0x2e9818: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->pc = 0x2E981Cu;
        goto label_2e981c;
    }
    ctx->pc = 0x2E9814u;
    SET_GPR_U32(ctx, 31, 0x2E981Cu);
    ctx->pc = 0x2E9818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9814u;
            // 0x2e9818: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D490u;
    if (runtime->hasFunction(0x28D490u)) {
        auto targetFn = runtime->lookupFunction(0x28D490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E981Cu; }
        if (ctx->pc != 0x2E981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapFlatPosition__FPfP11CAutoMapGen_0x28d490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E981Cu; }
        if (ctx->pc != 0x2E981Cu) { return; }
    }
    ctx->pc = 0x2E981Cu;
label_2e981c:
    // 0x2e981c: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
label_2e9820:
    if (ctx->pc == 0x2E9820u) {
        ctx->pc = 0x2E9824u;
        goto label_2e9824;
    }
    ctx->pc = 0x2E981Cu;
    {
        const bool branch_taken_0x2e981c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e981c) {
            ctx->pc = 0x2E980Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e980c;
        }
    }
    ctx->pc = 0x2E9824u;
label_2e9824:
    // 0x2e9824: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2e9824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_2e9828:
    // 0x2e9828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e982c:
    // 0x2e982c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e982cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e9830:
    // 0x2e9830: 0xc0a319c  jal         func_28C670
label_2e9834:
    if (ctx->pc == 0x2E9834u) {
        ctx->pc = 0x2E9834u;
            // 0x2e9834: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->pc = 0x2E9838u;
        goto label_2e9838;
    }
    ctx->pc = 0x2E9830u;
    SET_GPR_U32(ctx, 31, 0x2E9838u);
    ctx->pc = 0x2E9834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9830u;
            // 0x2e9834: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C670u;
    if (runtime->hasFunction(0x28C670u)) {
        auto targetFn = runtime->lookupFunction(0x28C670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9838u; }
        if (ctx->pc != 0x2E9838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckArea__19CTreasureBoxManagerFPff_0x28c670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9838u; }
        if (ctx->pc != 0x2E9838u) { return; }
    }
    ctx->pc = 0x2E9838u;
label_2e9838:
    // 0x2e9838: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
label_2e983c:
    if (ctx->pc == 0x2E983Cu) {
        ctx->pc = 0x2E9840u;
        goto label_2e9840;
    }
    ctx->pc = 0x2E9838u;
    {
        const bool branch_taken_0x2e9838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9838) {
            ctx->pc = 0x2E980Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e980c;
        }
    }
    ctx->pc = 0x2E9840u;
label_2e9840:
    // 0x2e9840: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e9840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_2e9844:
    // 0x2e9844: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2e9844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_2e9848:
    // 0x2e9848: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e9848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e984c:
    // 0x2e984c: 0x24844b20  addiu       $a0, $a0, 0x4B20
    ctx->pc = 0x2e984cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
label_2e9850:
    // 0x2e9850: 0xc0a2fbc  jal         func_28BEF0
label_2e9854:
    if (ctx->pc == 0x2E9854u) {
        ctx->pc = 0x2E9854u;
            // 0x2e9854: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x2E9858u;
        goto label_2e9858;
    }
    ctx->pc = 0x2E9850u;
    SET_GPR_U32(ctx, 31, 0x2E9858u);
    ctx->pc = 0x2E9854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9850u;
            // 0x2e9854: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BEF0u;
    if (runtime->hasFunction(0x28BEF0u)) {
        auto targetFn = runtime->lookupFunction(0x28BEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9858u; }
        if (ctx->pc != 0x2E9858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckArea__13CRandomCircleFPff_0x28bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9858u; }
        if (ctx->pc != 0x2E9858u) { return; }
    }
    ctx->pc = 0x2E9858u;
label_2e9858:
    // 0x2e9858: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
label_2e985c:
    if (ctx->pc == 0x2E985Cu) {
        ctx->pc = 0x2E9860u;
        goto label_2e9860;
    }
    ctx->pc = 0x2E9858u;
    {
        const bool branch_taken_0x2e9858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9858) {
            ctx->pc = 0x2E980Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e980c;
        }
    }
    ctx->pc = 0x2E9860u;
label_2e9860:
    // 0x2e9860: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x2e9860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2e9864:
    // 0x2e9864: 0xc04c018  jal         func_130060
label_2e9868:
    if (ctx->pc == 0x2E9868u) {
        ctx->pc = 0x2E9868u;
            // 0x2e9868: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->pc = 0x2E986Cu;
        goto label_2e986c;
    }
    ctx->pc = 0x2E9864u;
    SET_GPR_U32(ctx, 31, 0x2E986Cu);
    ctx->pc = 0x2E9868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9864u;
            // 0x2e9868: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E986Cu; }
        if (ctx->pc != 0x2E986Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E986Cu; }
        if (ctx->pc != 0x2E986Cu) { return; }
    }
    ctx->pc = 0x2E986Cu;
label_2e986c:
    // 0x2e986c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2e986cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_2e9870:
    // 0x2e9870: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e9874:
    // 0x2e9874: 0x0  nop
    ctx->pc = 0x2e9874u;
    // NOP
label_2e9878:
    // 0x2e9878: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e9878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e987c:
    // 0x2e987c: 0x0  nop
    ctx->pc = 0x2e987cu;
    // NOP
label_2e9880:
    // 0x2e9880: 0x4501ffe2  bc1t        . + 4 + (-0x1E << 2)
label_2e9884:
    if (ctx->pc == 0x2E9884u) {
        ctx->pc = 0x2E9888u;
        goto label_2e9888;
    }
    ctx->pc = 0x2E9880u;
    {
        const bool branch_taken_0x2e9880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9880) {
            ctx->pc = 0x2E980Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e980c;
        }
    }
    ctx->pc = 0x2E9888u;
label_2e9888:
    // 0x2e9888: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x2e9888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e988c:
    // 0x2e988c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2e988cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2e9890:
    // 0x2e9890: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e9894:
    // 0x2e9894: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2e9894u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_2e9898:
    // 0x2e9898: 0x27a42c70  addiu       $a0, $sp, 0x2C70
    ctx->pc = 0x2e9898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 11376));
label_2e989c:
    // 0x2e989c: 0x27a32c80  addiu       $v1, $sp, 0x2C80
    ctx->pc = 0x2e989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 11392));
label_2e98a0:
    // 0x2e98a0: 0x3c024190  lui         $v0, 0x4190
    ctx->pc = 0x2e98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16784 << 16));
label_2e98a4:
    // 0x2e98a4: 0x27a50450  addiu       $a1, $sp, 0x450
    ctx->pc = 0x2e98a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_2e98a8:
    // 0x2e98a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2e98a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2e98ac:
    // 0x2e98ac: 0x27a62c50  addiu       $a2, $sp, 0x2C50
    ctx->pc = 0x2e98acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 11344));
label_2e98b0:
    // 0x2e98b0: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2e98b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2e98b4:
    // 0x2e98b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e98b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e98b8:
    // 0x2e98b8: 0xe7a02c50  swc1        $f0, 0x2C50($sp)
    ctx->pc = 0x2e98b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11344), bits); }
label_2e98bc:
    // 0x2e98bc: 0xc64000a0  lwc1        $f0, 0xA0($s2)
    ctx->pc = 0x2e98bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e98c0:
    // 0x2e98c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e98c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e98c4:
    // 0x2e98c4: 0xe7a02c60  swc1        $f0, 0x2C60($sp)
    ctx->pc = 0x2e98c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11360), bits); }
label_2e98c8:
    // 0x2e98c8: 0xc64000a4  lwc1        $f0, 0xA4($s2)
    ctx->pc = 0x2e98c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e98cc:
    // 0x2e98cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e98ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e98d0:
    // 0x2e98d0: 0xe7a02c54  swc1        $f0, 0x2C54($sp)
    ctx->pc = 0x2e98d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11348), bits); }
label_2e98d4:
    // 0x2e98d4: 0xc64000a4  lwc1        $f0, 0xA4($s2)
    ctx->pc = 0x2e98d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e98d8:
    // 0x2e98d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e98d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e98dc:
    // 0x2e98dc: 0xe7a02c64  swc1        $f0, 0x2C64($sp)
    ctx->pc = 0x2e98dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11364), bits); }
label_2e98e0:
    // 0x2e98e0: 0xc64000a8  lwc1        $f0, 0xA8($s2)
    ctx->pc = 0x2e98e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e98e4:
    // 0x2e98e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e98e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e98e8:
    // 0x2e98e8: 0xe7a02c58  swc1        $f0, 0x2C58($sp)
    ctx->pc = 0x2e98e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11352), bits); }
label_2e98ec:
    // 0x2e98ec: 0xc64000a8  lwc1        $f0, 0xA8($s2)
    ctx->pc = 0x2e98ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e98f0:
    // 0x2e98f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e98f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e98f4:
    // 0x2e98f4: 0xafa82c5c  sw          $t0, 0x2C5C($sp)
    ctx->pc = 0x2e98f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 11356), GPR_U32(ctx, 8));
label_2e98f8:
    // 0x2e98f8: 0xafa82c6c  sw          $t0, 0x2C6C($sp)
    ctx->pc = 0x2e98f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 11372), GPR_U32(ctx, 8));
label_2e98fc:
    // 0x2e98fc: 0xe7a02c68  swc1        $f0, 0x2C68($sp)
    ctx->pc = 0x2e98fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11368), bits); }
label_2e9900:
    // 0x2e9900: 0x7a4200a0  lq          $v0, 0xA0($s2)
    ctx->pc = 0x2e9900u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 160)));
label_2e9904:
    // 0x2e9904: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2e9904u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_2e9908:
    // 0x2e9908: 0x7a4200a0  lq          $v0, 0xA0($s2)
    ctx->pc = 0x2e9908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 160)));
label_2e990c:
    // 0x2e990c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2e990cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_2e9910:
    // 0x2e9910: 0xc7a12c74  lwc1        $f1, 0x2C74($sp)
    ctx->pc = 0x2e9910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e9914:
    // 0x2e9914: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x2e9914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_2e9918:
    // 0x2e9918: 0xc7a02c84  lwc1        $f0, 0x2C84($sp)
    ctx->pc = 0x2e9918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 11396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e991c:
    // 0x2e991c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2e991cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2e9920:
    // 0x2e9920: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2e9920u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2e9924:
    // 0x2e9924: 0xe7a12c74  swc1        $f1, 0x2C74($sp)
    ctx->pc = 0x2e9924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11380), bits); }
label_2e9928:
    // 0x2e9928: 0xc0b1ed4  jal         func_2C7B50
label_2e992c:
    if (ctx->pc == 0x2E992Cu) {
        ctx->pc = 0x2E992Cu;
            // 0x2e992c: 0xe7a02c84  swc1        $f0, 0x2C84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11396), bits); }
        ctx->pc = 0x2E9930u;
        goto label_2e9930;
    }
    ctx->pc = 0x2E9928u;
    SET_GPR_U32(ctx, 31, 0x2E9930u);
    ctx->pc = 0x2E992Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9928u;
            // 0x2e992c: 0xe7a02c84  swc1        $f0, 0x2C84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 11396), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9930u; }
        if (ctx->pc != 0x2E9930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9930u; }
        if (ctx->pc != 0x2E9930u) { return; }
    }
    ctx->pc = 0x2E9930u;
label_2e9930:
    // 0x2e9930: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x2e9930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_2e9934:
    // 0x2e9934: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e9934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9938:
    // 0x2e9938: 0x27a62c70  addiu       $a2, $sp, 0x2C70
    ctx->pc = 0x2e9938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 11376));
label_2e993c:
    // 0x2e993c: 0x27a72c80  addiu       $a3, $sp, 0x2C80
    ctx->pc = 0x2e993cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 11392));
label_2e9940:
    // 0x2e9940: 0x27a82c90  addiu       $t0, $sp, 0x2C90
    ctx->pc = 0x2e9940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 11408));
label_2e9944:
    // 0x2e9944: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2e9944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9948:
    // 0x2e9948: 0xc053794  jal         func_14DE50
label_2e994c:
    if (ctx->pc == 0x2E994Cu) {
        ctx->pc = 0x2E994Cu;
            // 0x2e994c: 0x240a000c  addiu       $t2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x2E9950u;
        goto label_2e9950;
    }
    ctx->pc = 0x2E9948u;
    SET_GPR_U32(ctx, 31, 0x2E9950u);
    ctx->pc = 0x2E994Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9948u;
            // 0x2e994c: 0x240a000c  addiu       $t2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9950u; }
        if (ctx->pc != 0x2E9950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9950u; }
        if (ctx->pc != 0x2E9950u) { return; }
    }
    ctx->pc = 0x2E9950u;
label_2e9950:
    // 0x2e9950: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_2e9954:
    if (ctx->pc == 0x2E9954u) {
        ctx->pc = 0x2E9954u;
            // 0x2e9954: 0x27a22c90  addiu       $v0, $sp, 0x2C90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 11408));
        ctx->pc = 0x2E9958u;
        goto label_2e9958;
    }
    ctx->pc = 0x2E9950u;
    {
        const bool branch_taken_0x2e9950 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E9954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9950u;
            // 0x2e9954: 0x27a22c90  addiu       $v0, $sp, 0x2C90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 11408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9950) {
            ctx->pc = 0x2E9960u;
            goto label_2e9960;
        }
    }
    ctx->pc = 0x2E9958u;
label_2e9958:
    // 0x2e9958: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2e9958u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e995c:
    // 0x2e995c: 0x7e4200a0  sq          $v0, 0xA0($s2)
    ctx->pc = 0x2e995cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 160), GPR_VEC(ctx, 2));
label_2e9960:
    // 0x2e9960: 0xc64100a4  lwc1        $f1, 0xA4($s2)
    ctx->pc = 0x2e9960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e9964:
    // 0x2e9964: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2e9964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_2e9968:
    // 0x2e9968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e996c:
    // 0x2e996c: 0x0  nop
    ctx->pc = 0x2e996cu;
    // NOP
label_2e9970:
    // 0x2e9970: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e9970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e9974:
    // 0x2e9974: 0xc04a0ea  jal         func_1283A8
label_2e9978:
    if (ctx->pc == 0x2E9978u) {
        ctx->pc = 0x2E9978u;
            // 0x2e9978: 0xe64000a4  swc1        $f0, 0xA4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
        ctx->pc = 0x2E997Cu;
        goto label_2e997c;
    }
    ctx->pc = 0x2E9974u;
    SET_GPR_U32(ctx, 31, 0x2E997Cu);
    ctx->pc = 0x2E9978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9974u;
            // 0x2e9978: 0xe64000a4  swc1        $f0, 0xA4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E997Cu; }
        if (ctx->pc != 0x2E997Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E997Cu; }
        if (ctx->pc != 0x2E997Cu) { return; }
    }
    ctx->pc = 0x2E997Cu;
label_2e997c:
    // 0x2e997c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e997cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e9980:
    // 0x2e9980: 0x0  nop
    ctx->pc = 0x2e9980u;
    // NOP
label_2e9984:
    // 0x2e9984: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e9984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e9988:
    // 0x2e9988: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2e998c:
    // 0x2e998c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e998cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e9990:
    // 0x2e9990: 0x0  nop
    ctx->pc = 0x2e9990u;
    // NOP
label_2e9994:
    // 0x2e9994: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e9998:
    // 0x2e9998: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e9998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2e999c:
    // 0x2e999c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e999cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e99a0:
    // 0x2e99a0: 0x0  nop
    ctx->pc = 0x2e99a0u;
    // NOP
label_2e99a4:
    // 0x2e99a4: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2e99a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2e99a8:
    // 0x2e99a8: 0x0  nop
    ctx->pc = 0x2e99a8u;
    // NOP
label_2e99ac:
    // 0x2e99ac: 0x0  nop
    ctx->pc = 0x2e99acu;
    // NOP
label_2e99b0:
    // 0x2e99b0: 0xc0a248c  jal         func_289230
label_2e99b4:
    if (ctx->pc == 0x2E99B4u) {
        ctx->pc = 0x2E99B8u;
        goto label_2e99b8;
    }
    ctx->pc = 0x2E99B0u;
    SET_GPR_U32(ctx, 31, 0x2E99B8u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99B8u; }
        if (ctx->pc != 0x2E99B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99B8u; }
        if (ctx->pc != 0x2E99B8u) { return; }
    }
    ctx->pc = 0x2E99B8u;
label_2e99b8:
    // 0x2e99b8: 0xc04a0ea  jal         func_1283A8
label_2e99bc:
    if (ctx->pc == 0x2E99BCu) {
        ctx->pc = 0x2E99BCu;
            // 0x2e99bc: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x2E99C0u;
        goto label_2e99c0;
    }
    ctx->pc = 0x2E99B8u;
    SET_GPR_U32(ctx, 31, 0x2E99C0u);
    ctx->pc = 0x2E99BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E99B8u;
            // 0x2e99bc: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99C0u; }
        if (ctx->pc != 0x2E99C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99C0u; }
        if (ctx->pc != 0x2E99C0u) { return; }
    }
    ctx->pc = 0x2E99C0u;
label_2e99c0:
    // 0x2e99c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e99c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e99c4:
    // 0x2e99c4: 0x0  nop
    ctx->pc = 0x2e99c4u;
    // NOP
label_2e99c8:
    // 0x2e99c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e99c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2e99cc:
    // 0x2e99cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2e99d0:
    // 0x2e99d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e99d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e99d4:
    // 0x2e99d4: 0x0  nop
    ctx->pc = 0x2e99d4u;
    // NOP
label_2e99d8:
    // 0x2e99d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e99d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e99dc:
    // 0x2e99dc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2e99e0:
    // 0x2e99e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e99e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e99e4:
    // 0x2e99e4: 0x0  nop
    ctx->pc = 0x2e99e4u;
    // NOP
label_2e99e8:
    // 0x2e99e8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2e99e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2e99ec:
    // 0x2e99ec: 0x0  nop
    ctx->pc = 0x2e99ecu;
    // NOP
label_2e99f0:
    // 0x2e99f0: 0x0  nop
    ctx->pc = 0x2e99f0u;
    // NOP
label_2e99f4:
    // 0x2e99f4: 0xc0a248c  jal         func_289230
label_2e99f8:
    if (ctx->pc == 0x2E99F8u) {
        ctx->pc = 0x2E99FCu;
        goto label_2e99fc;
    }
    ctx->pc = 0x2E99F4u;
    SET_GPR_U32(ctx, 31, 0x2E99FCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99FCu; }
        if (ctx->pc != 0x2E99FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99FCu; }
        if (ctx->pc != 0x2E99FCu) { return; }
    }
    ctx->pc = 0x2E99FCu;
label_2e99fc:
    // 0x2e99fc: 0xae4200b4  sw          $v0, 0xB4($s2)
    ctx->pc = 0x2e99fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
label_2e9a00:
    // 0x2e9a00: 0xc064220  jal         func_190880
label_2e9a04:
    if (ctx->pc == 0x2E9A04u) {
        ctx->pc = 0x2E9A04u;
            // 0x2e9a04: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2E9A08u;
        goto label_2e9a08;
    }
    ctx->pc = 0x2E9A00u;
    SET_GPR_U32(ctx, 31, 0x2E9A08u);
    ctx->pc = 0x2E9A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A00u;
            // 0x2e9a04: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A08u; }
        if (ctx->pc != 0x2E9A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A08u; }
        if (ctx->pc != 0x2E9A08u) { return; }
    }
    ctx->pc = 0x2E9A08u;
label_2e9a08:
    // 0x2e9a08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2e9a0c:
    if (ctx->pc == 0x2E9A0Cu) {
        ctx->pc = 0x2E9A0Cu;
            // 0x2e9a0c: 0x2e010007  sltiu       $at, $s0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->pc = 0x2E9A10u;
        goto label_2e9a10;
    }
    ctx->pc = 0x2E9A08u;
    {
        const bool branch_taken_0x2e9a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A08u;
            // 0x2e9a0c: 0x2e010007  sltiu       $at, $s0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a08) {
            ctx->pc = 0x2E9A30u;
            goto label_2e9a30;
        }
    }
    ctx->pc = 0x2E9A10u;
label_2e9a10:
    // 0x2e9a10: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2e9a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2e9a14:
    // 0x2e9a14: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x2e9a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
label_2e9a18:
    // 0x2e9a18: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x2e9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_2e9a1c:
    // 0x2e9a1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e9a20:
    if (ctx->pc == 0x2E9A20u) {
        ctx->pc = 0x2E9A24u;
        goto label_2e9a24;
    }
    ctx->pc = 0x2E9A1Cu;
    {
        const bool branch_taken_0x2e9a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9a1c) {
            ctx->pc = 0x2E9A2Cu;
            goto label_2e9a2c;
        }
    }
    ctx->pc = 0x2E9A24u;
label_2e9a24:
    // 0x2e9a24: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2e9a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9a28:
    // 0x2e9a28: 0x0  nop
    ctx->pc = 0x2e9a28u;
    // NOP
label_2e9a2c:
    // 0x2e9a2c: 0x2e010007  sltiu       $at, $s0, 0x7
    ctx->pc = 0x2e9a2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2e9a30:
    // 0x2e9a30: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
label_2e9a34:
    if (ctx->pc == 0x2E9A34u) {
        ctx->pc = 0x2E9A34u;
            // 0x2e9a34: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x2E9A38u;
        goto label_2e9a38;
    }
    ctx->pc = 0x2E9A30u;
    {
        const bool branch_taken_0x2e9a30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A30u;
            // 0x2e9a34: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a30) {
            ctx->pc = 0x2E9B18u;
            goto label_2e9b18;
        }
    }
    ctx->pc = 0x2E9A38u;
label_2e9a38:
    // 0x2e9a38: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x2e9a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_2e9a3c:
    // 0x2e9a3c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2e9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2e9a40:
    // 0x2e9a40: 0x246314b0  addiu       $v1, $v1, 0x14B0
    ctx->pc = 0x2e9a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5296));
label_2e9a44:
    // 0x2e9a44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e9a48:
    // 0x2e9a48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9a4c:
    // 0x2e9a4c: 0x400008  jr          $v0
label_2e9a50:
    if (ctx->pc == 0x2E9A50u) {
        ctx->pc = 0x2E9A54u;
        goto label_2e9a54;
    }
    ctx->pc = 0x2E9A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E9A54u: goto label_2e9a54;
            case 0x2E9B18u: goto label_2e9b18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E9A54u;
label_2e9a54:
    // 0x2e9a54: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2e9a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_2e9a58:
    // 0x2e9a58: 0x264500a0  addiu       $a1, $s2, 0xA0
    ctx->pc = 0x2e9a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_2e9a5c:
    // 0x2e9a5c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2e9a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_2e9a60:
    // 0x2e9a60: 0xc076604  jal         func_1D9810
label_2e9a64:
    if (ctx->pc == 0x2E9A64u) {
        ctx->pc = 0x2E9A64u;
            // 0x2e9a64: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x2E9A68u;
        goto label_2e9a68;
    }
    ctx->pc = 0x2E9A60u;
    SET_GPR_U32(ctx, 31, 0x2E9A68u);
    ctx->pc = 0x2E9A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A60u;
            // 0x2e9a64: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9810u;
    if (runtime->hasFunction(0x1D9810u)) {
        auto targetFn = runtime->lookupFunction(0x1D9810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A68u; }
        if (ctx->pc != 0x2E9A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateNaviMap__11CAutoMapGenFPfi_0x1d9810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A68u; }
        if (ctx->pc != 0x2E9A68u) { return; }
    }
    ctx->pc = 0x2E9A68u;
label_2e9a68:
    // 0x2e9a68: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x2e9a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_2e9a6c:
    // 0x2e9a6c: 0x26450090  addiu       $a1, $s2, 0x90
    ctx->pc = 0x2e9a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2e9a70:
    // 0x2e9a70: 0xc0765b0  jal         func_1D96C0
label_2e9a74:
    if (ctx->pc == 0x2E9A74u) {
        ctx->pc = 0x2E9A74u;
            // 0x2e9a74: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->pc = 0x2E9A78u;
        goto label_2e9a78;
    }
    ctx->pc = 0x2E9A70u;
    SET_GPR_U32(ctx, 31, 0x2E9A78u);
    ctx->pc = 0x2E9A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A70u;
            // 0x2e9a74: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D96C0u;
    if (runtime->hasFunction(0x1D96C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D96C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A78u; }
        if (ctx->pc != 0x2E9A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNaviDistance__11CAutoMapGenFPf_0x1d96c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A78u; }
        if (ctx->pc != 0x2E9A78u) { return; }
    }
    ctx->pc = 0x2E9A78u;
label_2e9a78:
    // 0x2e9a78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e9a78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e9a7c:
    // 0x2e9a7c: 0x0  nop
    ctx->pc = 0x2e9a7cu;
    // NOP
label_2e9a80:
    // 0x2e9a80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e9a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e9a84:
    // 0x2e9a84: 0x0  nop
    ctx->pc = 0x2e9a84u;
    // NOP
label_2e9a88:
    // 0x2e9a88: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_2e9a8c:
    if (ctx->pc == 0x2E9A8Cu) {
        ctx->pc = 0x2E9A8Cu;
            // 0x2e9a8c: 0x3c02447a  lui         $v0, 0x447A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
        ctx->pc = 0x2E9A90u;
        goto label_2e9a90;
    }
    ctx->pc = 0x2E9A88u;
    {
        const bool branch_taken_0x2e9a88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A88u;
            // 0x2e9a8c: 0x3c02447a  lui         $v0, 0x447A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a88) {
            ctx->pc = 0x2E9ADCu;
            goto label_2e9adc;
        }
    }
    ctx->pc = 0x2E9A90u;
label_2e9a90:
    // 0x2e9a90: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x2e9a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2e9a94:
    // 0x2e9a94: 0xc04c018  jal         func_130060
label_2e9a98:
    if (ctx->pc == 0x2E9A98u) {
        ctx->pc = 0x2E9A98u;
            // 0x2e9a98: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->pc = 0x2E9A9Cu;
        goto label_2e9a9c;
    }
    ctx->pc = 0x2E9A94u;
    SET_GPR_U32(ctx, 31, 0x2E9A9Cu);
    ctx->pc = 0x2E9A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A94u;
            // 0x2e9a98: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A9Cu; }
        if (ctx->pc != 0x2E9A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A9Cu; }
        if (ctx->pc != 0x2E9A9Cu) { return; }
    }
    ctx->pc = 0x2E9A9Cu;
label_2e9a9c:
    // 0x2e9a9c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2e9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_2e9aa0:
    // 0x2e9aa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e9aa4:
    // 0x2e9aa4: 0x0  nop
    ctx->pc = 0x2e9aa4u;
    // NOP
label_2e9aa8:
    // 0x2e9aa8: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2e9aa8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2e9aac:
    // 0x2e9aac: 0x0  nop
    ctx->pc = 0x2e9aacu;
    // NOP
label_2e9ab0:
    // 0x2e9ab0: 0x0  nop
    ctx->pc = 0x2e9ab0u;
    // NOP
label_2e9ab4:
    // 0x2e9ab4: 0xc0a248c  jal         func_289230
label_2e9ab8:
    if (ctx->pc == 0x2E9AB8u) {
        ctx->pc = 0x2E9ABCu;
        goto label_2e9abc;
    }
    ctx->pc = 0x2E9AB4u;
    SET_GPR_U32(ctx, 31, 0x2E9ABCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9ABCu; }
        if (ctx->pc != 0x2E9ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9ABCu; }
        if (ctx->pc != 0x2E9ABCu) { return; }
    }
    ctx->pc = 0x2E9ABCu;
label_2e9abc:
    // 0x2e9abc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e9ac0:
    // 0x2e9ac0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e9ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2e9ac4:
    // 0x2e9ac4: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x2e9ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_2e9ac8:
    // 0x2e9ac8: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x2e9ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_2e9acc:
    // 0x2e9acc: 0xc04a0d2  jal         func_128348
label_2e9ad0:
    if (ctx->pc == 0x2E9AD0u) {
        ctx->pc = 0x2E9AD0u;
            // 0x2e9ad0: 0x24841470  addiu       $a0, $a0, 0x1470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5232));
        ctx->pc = 0x2E9AD4u;
        goto label_2e9ad4;
    }
    ctx->pc = 0x2E9ACCu;
    SET_GPR_U32(ctx, 31, 0x2E9AD4u);
    ctx->pc = 0x2E9AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9ACCu;
            // 0x2e9ad0: 0x24841470  addiu       $a0, $a0, 0x1470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9AD4u; }
        if (ctx->pc != 0x2E9AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9AD4u; }
        if (ctx->pc != 0x2E9AD4u) { return; }
    }
    ctx->pc = 0x2E9AD4u;
label_2e9ad4:
    // 0x2e9ad4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2e9ad8:
    if (ctx->pc == 0x2E9AD8u) {
        ctx->pc = 0x2E9AD8u;
            // 0x2e9ad8: 0x8e4200b8  lw          $v0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->pc = 0x2E9ADCu;
        goto label_2e9adc;
    }
    ctx->pc = 0x2E9AD4u;
    {
        const bool branch_taken_0x2e9ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9AD4u;
            // 0x2e9ad8: 0x8e4200b8  lw          $v0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9ad4) {
            ctx->pc = 0x2E9B4Cu;
            goto label_2e9b4c;
        }
    }
    ctx->pc = 0x2E9ADCu;
label_2e9adc:
    // 0x2e9adc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e9ae0:
    // 0x2e9ae0: 0x0  nop
    ctx->pc = 0x2e9ae0u;
    // NOP
label_2e9ae4:
    // 0x2e9ae4: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2e9ae4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2e9ae8:
    // 0x2e9ae8: 0x0  nop
    ctx->pc = 0x2e9ae8u;
    // NOP
label_2e9aec:
    // 0x2e9aec: 0x0  nop
    ctx->pc = 0x2e9aecu;
    // NOP
label_2e9af0:
    // 0x2e9af0: 0xc0a248c  jal         func_289230
label_2e9af4:
    if (ctx->pc == 0x2E9AF4u) {
        ctx->pc = 0x2E9AF8u;
        goto label_2e9af8;
    }
    ctx->pc = 0x2E9AF0u;
    SET_GPR_U32(ctx, 31, 0x2E9AF8u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9AF8u; }
        if (ctx->pc != 0x2E9AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9AF8u; }
        if (ctx->pc != 0x2E9AF8u) { return; }
    }
    ctx->pc = 0x2E9AF8u;
label_2e9af8:
    // 0x2e9af8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e9afc:
    // 0x2e9afc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2e9afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2e9b00:
    // 0x2e9b00: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x2e9b00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_2e9b04:
    // 0x2e9b04: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x2e9b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_2e9b08:
    // 0x2e9b08: 0xc04a0d2  jal         func_128348
label_2e9b0c:
    if (ctx->pc == 0x2E9B0Cu) {
        ctx->pc = 0x2E9B0Cu;
            // 0x2e9b0c: 0x24841490  addiu       $a0, $a0, 0x1490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5264));
        ctx->pc = 0x2E9B10u;
        goto label_2e9b10;
    }
    ctx->pc = 0x2E9B08u;
    SET_GPR_U32(ctx, 31, 0x2E9B10u);
    ctx->pc = 0x2E9B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B08u;
            // 0x2e9b0c: 0x24841490  addiu       $a0, $a0, 0x1490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B10u; }
        if (ctx->pc != 0x2E9B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B10u; }
        if (ctx->pc != 0x2E9B10u) { return; }
    }
    ctx->pc = 0x2E9B10u;
label_2e9b10:
    // 0x2e9b10: 0x1000000d  b           . + 4 + (0xD << 2)
label_2e9b14:
    if (ctx->pc == 0x2E9B14u) {
        ctx->pc = 0x2E9B18u;
        goto label_2e9b18;
    }
    ctx->pc = 0x2E9B10u;
    {
        const bool branch_taken_0x2e9b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9b10) {
            ctx->pc = 0x2E9B48u;
            goto label_2e9b48;
        }
    }
    ctx->pc = 0x2E9B18u;
label_2e9b18:
    // 0x2e9b18: 0xc04c018  jal         func_130060
label_2e9b1c:
    if (ctx->pc == 0x2E9B1Cu) {
        ctx->pc = 0x2E9B1Cu;
            // 0x2e9b1c: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->pc = 0x2E9B20u;
        goto label_2e9b20;
    }
    ctx->pc = 0x2E9B18u;
    SET_GPR_U32(ctx, 31, 0x2E9B20u);
    ctx->pc = 0x2E9B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B18u;
            // 0x2e9b1c: 0x264500a0  addiu       $a1, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B20u; }
        if (ctx->pc != 0x2E9B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B20u; }
        if (ctx->pc != 0x2E9B20u) { return; }
    }
    ctx->pc = 0x2E9B20u;
label_2e9b20:
    // 0x2e9b20: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2e9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_2e9b24:
    // 0x2e9b24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e9b28:
    // 0x2e9b28: 0x0  nop
    ctx->pc = 0x2e9b28u;
    // NOP
label_2e9b2c:
    // 0x2e9b2c: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2e9b2cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2e9b30:
    // 0x2e9b30: 0x0  nop
    ctx->pc = 0x2e9b30u;
    // NOP
label_2e9b34:
    // 0x2e9b34: 0x0  nop
    ctx->pc = 0x2e9b34u;
    // NOP
label_2e9b38:
    // 0x2e9b38: 0xc0a248c  jal         func_289230
label_2e9b3c:
    if (ctx->pc == 0x2E9B3Cu) {
        ctx->pc = 0x2E9B40u;
        goto label_2e9b40;
    }
    ctx->pc = 0x2E9B38u;
    SET_GPR_U32(ctx, 31, 0x2E9B40u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B40u; }
        if (ctx->pc != 0x2E9B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B40u; }
        if (ctx->pc != 0x2E9B40u) { return; }
    }
    ctx->pc = 0x2E9B40u;
label_2e9b40:
    // 0x2e9b40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2e9b44:
    // 0x2e9b44: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x2e9b44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_2e9b48:
    // 0x2e9b48: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x2e9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_2e9b4c:
    // 0x2e9b4c: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x2e9b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_2e9b50:
    // 0x2e9b50: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_2e9b54:
    if (ctx->pc == 0x2E9B54u) {
        ctx->pc = 0x2E9B54u;
            // 0x2e9b54: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x2E9B58u;
        goto label_2e9b58;
    }
    ctx->pc = 0x2E9B50u;
    {
        const bool branch_taken_0x2e9b50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B50u;
            // 0x2e9b54: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b50) {
            ctx->pc = 0x2E9B5Cu;
            goto label_2e9b5c;
        }
    }
    ctx->pc = 0x2E9B58u;
label_2e9b58:
    // 0x2e9b58: 0xae4200b8  sw          $v0, 0xB8($s2)
    ctx->pc = 0x2e9b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 2));
label_2e9b5c:
    // 0x2e9b5c: 0x8f858dcc  lw          $a1, -0x7234($gp)
    ctx->pc = 0x2e9b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_2e9b60:
    // 0x2e9b60: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2e9b64:
    if (ctx->pc == 0x2E9B64u) {
        ctx->pc = 0x2E9B64u;
            // 0x2e9b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B68u;
        goto label_2e9b68;
    }
    ctx->pc = 0x2E9B60u;
    {
        const bool branch_taken_0x2e9b60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B60u;
            // 0x2e9b64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b60) {
            ctx->pc = 0x2E9B78u;
            goto label_2e9b78;
        }
    }
    ctx->pc = 0x2E9B68u;
label_2e9b68:
    // 0x2e9b68: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x2e9b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_2e9b6c:
    // 0x2e9b6c: 0xc049c18  jal         func_127060
label_2e9b70:
    if (ctx->pc == 0x2E9B70u) {
        ctx->pc = 0x2E9B70u;
            // 0x2e9b70: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->pc = 0x2E9B74u;
        goto label_2e9b74;
    }
    ctx->pc = 0x2E9B6Cu;
    SET_GPR_U32(ctx, 31, 0x2E9B74u);
    ctx->pc = 0x2E9B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B6Cu;
            // 0x2e9b70: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B74u; }
        if (ctx->pc != 0x2E9B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B74u; }
        if (ctx->pc != 0x2E9B74u) { return; }
    }
    ctx->pc = 0x2E9B74u;
label_2e9b74:
    // 0x2e9b74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e9b78:
    // 0x2e9b78: 0xc0ba8d0  jal         func_2EA340
label_2e9b7c:
    if (ctx->pc == 0x2E9B7Cu) {
        ctx->pc = 0x2E9B7Cu;
            // 0x2e9b7c: 0xae510024  sw          $s1, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 17));
        ctx->pc = 0x2E9B80u;
        goto label_2e9b80;
    }
    ctx->pc = 0x2E9B78u;
    SET_GPR_U32(ctx, 31, 0x2E9B80u);
    ctx->pc = 0x2E9B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B78u;
            // 0x2e9b7c: 0xae510024  sw          $s1, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA340u;
    if (runtime->hasFunction(0x2EA340u)) {
        auto targetFn = runtime->lookupFunction(0x2EA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B80u; }
        if (ctx->pc != 0x2E9B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitStatusSprite__7CSphidaFv_0x2ea340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B80u; }
        if (ctx->pc != 0x2E9B80u) { return; }
    }
    ctx->pc = 0x2E9B80u;
label_2e9b80:
    // 0x2e9b80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9b84:
    // 0x2e9b84: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x2e9b84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_2e9b88:
    // 0x2e9b88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e9b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e9b8c:
    // 0x2e9b8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e9b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e9b90:
    // 0x2e9b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e9b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e9b94:
    // 0x2e9b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e9b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9b98:
    // 0x2e9b98: 0x3e00008  jr          $ra
label_2e9b9c:
    if (ctx->pc == 0x2E9B9Cu) {
        ctx->pc = 0x2E9B9Cu;
            // 0x2e9b9c: 0x27bd2ca0  addiu       $sp, $sp, 0x2CA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 11424));
        ctx->pc = 0x2E9BA0u;
        goto label_fallthrough_0x2e9b98;
    }
    ctx->pc = 0x2E9B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B98u;
            // 0x2e9b9c: 0x27bd2ca0  addiu       $sp, $sp, 0x2CA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 11424));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2e9b98:
    ctx->pc = 0x2E9BA0u;
}
