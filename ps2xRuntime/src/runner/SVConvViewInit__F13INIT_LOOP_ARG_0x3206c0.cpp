#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SVConvViewInit__F13INIT_LOOP_ARG
// Address: 0x3206c0 - 0x320a20
void SVConvViewInit__F13INIT_LOOP_ARG_0x3206c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SVConvViewInit__F13INIT_LOOP_ARG_0x3206c0");
#endif

    switch (ctx->pc) {
        case 0x3206c0u: goto label_3206c0;
        case 0x3206c4u: goto label_3206c4;
        case 0x3206c8u: goto label_3206c8;
        case 0x3206ccu: goto label_3206cc;
        case 0x3206d0u: goto label_3206d0;
        case 0x3206d4u: goto label_3206d4;
        case 0x3206d8u: goto label_3206d8;
        case 0x3206dcu: goto label_3206dc;
        case 0x3206e0u: goto label_3206e0;
        case 0x3206e4u: goto label_3206e4;
        case 0x3206e8u: goto label_3206e8;
        case 0x3206ecu: goto label_3206ec;
        case 0x3206f0u: goto label_3206f0;
        case 0x3206f4u: goto label_3206f4;
        case 0x3206f8u: goto label_3206f8;
        case 0x3206fcu: goto label_3206fc;
        case 0x320700u: goto label_320700;
        case 0x320704u: goto label_320704;
        case 0x320708u: goto label_320708;
        case 0x32070cu: goto label_32070c;
        case 0x320710u: goto label_320710;
        case 0x320714u: goto label_320714;
        case 0x320718u: goto label_320718;
        case 0x32071cu: goto label_32071c;
        case 0x320720u: goto label_320720;
        case 0x320724u: goto label_320724;
        case 0x320728u: goto label_320728;
        case 0x32072cu: goto label_32072c;
        case 0x320730u: goto label_320730;
        case 0x320734u: goto label_320734;
        case 0x320738u: goto label_320738;
        case 0x32073cu: goto label_32073c;
        case 0x320740u: goto label_320740;
        case 0x320744u: goto label_320744;
        case 0x320748u: goto label_320748;
        case 0x32074cu: goto label_32074c;
        case 0x320750u: goto label_320750;
        case 0x320754u: goto label_320754;
        case 0x320758u: goto label_320758;
        case 0x32075cu: goto label_32075c;
        case 0x320760u: goto label_320760;
        case 0x320764u: goto label_320764;
        case 0x320768u: goto label_320768;
        case 0x32076cu: goto label_32076c;
        case 0x320770u: goto label_320770;
        case 0x320774u: goto label_320774;
        case 0x320778u: goto label_320778;
        case 0x32077cu: goto label_32077c;
        case 0x320780u: goto label_320780;
        case 0x320784u: goto label_320784;
        case 0x320788u: goto label_320788;
        case 0x32078cu: goto label_32078c;
        case 0x320790u: goto label_320790;
        case 0x320794u: goto label_320794;
        case 0x320798u: goto label_320798;
        case 0x32079cu: goto label_32079c;
        case 0x3207a0u: goto label_3207a0;
        case 0x3207a4u: goto label_3207a4;
        case 0x3207a8u: goto label_3207a8;
        case 0x3207acu: goto label_3207ac;
        case 0x3207b0u: goto label_3207b0;
        case 0x3207b4u: goto label_3207b4;
        case 0x3207b8u: goto label_3207b8;
        case 0x3207bcu: goto label_3207bc;
        case 0x3207c0u: goto label_3207c0;
        case 0x3207c4u: goto label_3207c4;
        case 0x3207c8u: goto label_3207c8;
        case 0x3207ccu: goto label_3207cc;
        case 0x3207d0u: goto label_3207d0;
        case 0x3207d4u: goto label_3207d4;
        case 0x3207d8u: goto label_3207d8;
        case 0x3207dcu: goto label_3207dc;
        case 0x3207e0u: goto label_3207e0;
        case 0x3207e4u: goto label_3207e4;
        case 0x3207e8u: goto label_3207e8;
        case 0x3207ecu: goto label_3207ec;
        case 0x3207f0u: goto label_3207f0;
        case 0x3207f4u: goto label_3207f4;
        case 0x3207f8u: goto label_3207f8;
        case 0x3207fcu: goto label_3207fc;
        case 0x320800u: goto label_320800;
        case 0x320804u: goto label_320804;
        case 0x320808u: goto label_320808;
        case 0x32080cu: goto label_32080c;
        case 0x320810u: goto label_320810;
        case 0x320814u: goto label_320814;
        case 0x320818u: goto label_320818;
        case 0x32081cu: goto label_32081c;
        case 0x320820u: goto label_320820;
        case 0x320824u: goto label_320824;
        case 0x320828u: goto label_320828;
        case 0x32082cu: goto label_32082c;
        case 0x320830u: goto label_320830;
        case 0x320834u: goto label_320834;
        case 0x320838u: goto label_320838;
        case 0x32083cu: goto label_32083c;
        case 0x320840u: goto label_320840;
        case 0x320844u: goto label_320844;
        case 0x320848u: goto label_320848;
        case 0x32084cu: goto label_32084c;
        case 0x320850u: goto label_320850;
        case 0x320854u: goto label_320854;
        case 0x320858u: goto label_320858;
        case 0x32085cu: goto label_32085c;
        case 0x320860u: goto label_320860;
        case 0x320864u: goto label_320864;
        case 0x320868u: goto label_320868;
        case 0x32086cu: goto label_32086c;
        case 0x320870u: goto label_320870;
        case 0x320874u: goto label_320874;
        case 0x320878u: goto label_320878;
        case 0x32087cu: goto label_32087c;
        case 0x320880u: goto label_320880;
        case 0x320884u: goto label_320884;
        case 0x320888u: goto label_320888;
        case 0x32088cu: goto label_32088c;
        case 0x320890u: goto label_320890;
        case 0x320894u: goto label_320894;
        case 0x320898u: goto label_320898;
        case 0x32089cu: goto label_32089c;
        case 0x3208a0u: goto label_3208a0;
        case 0x3208a4u: goto label_3208a4;
        case 0x3208a8u: goto label_3208a8;
        case 0x3208acu: goto label_3208ac;
        case 0x3208b0u: goto label_3208b0;
        case 0x3208b4u: goto label_3208b4;
        case 0x3208b8u: goto label_3208b8;
        case 0x3208bcu: goto label_3208bc;
        case 0x3208c0u: goto label_3208c0;
        case 0x3208c4u: goto label_3208c4;
        case 0x3208c8u: goto label_3208c8;
        case 0x3208ccu: goto label_3208cc;
        case 0x3208d0u: goto label_3208d0;
        case 0x3208d4u: goto label_3208d4;
        case 0x3208d8u: goto label_3208d8;
        case 0x3208dcu: goto label_3208dc;
        case 0x3208e0u: goto label_3208e0;
        case 0x3208e4u: goto label_3208e4;
        case 0x3208e8u: goto label_3208e8;
        case 0x3208ecu: goto label_3208ec;
        case 0x3208f0u: goto label_3208f0;
        case 0x3208f4u: goto label_3208f4;
        case 0x3208f8u: goto label_3208f8;
        case 0x3208fcu: goto label_3208fc;
        case 0x320900u: goto label_320900;
        case 0x320904u: goto label_320904;
        case 0x320908u: goto label_320908;
        case 0x32090cu: goto label_32090c;
        case 0x320910u: goto label_320910;
        case 0x320914u: goto label_320914;
        case 0x320918u: goto label_320918;
        case 0x32091cu: goto label_32091c;
        case 0x320920u: goto label_320920;
        case 0x320924u: goto label_320924;
        case 0x320928u: goto label_320928;
        case 0x32092cu: goto label_32092c;
        case 0x320930u: goto label_320930;
        case 0x320934u: goto label_320934;
        case 0x320938u: goto label_320938;
        case 0x32093cu: goto label_32093c;
        case 0x320940u: goto label_320940;
        case 0x320944u: goto label_320944;
        case 0x320948u: goto label_320948;
        case 0x32094cu: goto label_32094c;
        case 0x320950u: goto label_320950;
        case 0x320954u: goto label_320954;
        case 0x320958u: goto label_320958;
        case 0x32095cu: goto label_32095c;
        case 0x320960u: goto label_320960;
        case 0x320964u: goto label_320964;
        case 0x320968u: goto label_320968;
        case 0x32096cu: goto label_32096c;
        case 0x320970u: goto label_320970;
        case 0x320974u: goto label_320974;
        case 0x320978u: goto label_320978;
        case 0x32097cu: goto label_32097c;
        case 0x320980u: goto label_320980;
        case 0x320984u: goto label_320984;
        case 0x320988u: goto label_320988;
        case 0x32098cu: goto label_32098c;
        case 0x320990u: goto label_320990;
        case 0x320994u: goto label_320994;
        case 0x320998u: goto label_320998;
        case 0x32099cu: goto label_32099c;
        case 0x3209a0u: goto label_3209a0;
        case 0x3209a4u: goto label_3209a4;
        case 0x3209a8u: goto label_3209a8;
        case 0x3209acu: goto label_3209ac;
        case 0x3209b0u: goto label_3209b0;
        case 0x3209b4u: goto label_3209b4;
        case 0x3209b8u: goto label_3209b8;
        case 0x3209bcu: goto label_3209bc;
        case 0x3209c0u: goto label_3209c0;
        case 0x3209c4u: goto label_3209c4;
        case 0x3209c8u: goto label_3209c8;
        case 0x3209ccu: goto label_3209cc;
        case 0x3209d0u: goto label_3209d0;
        case 0x3209d4u: goto label_3209d4;
        case 0x3209d8u: goto label_3209d8;
        case 0x3209dcu: goto label_3209dc;
        case 0x3209e0u: goto label_3209e0;
        case 0x3209e4u: goto label_3209e4;
        case 0x3209e8u: goto label_3209e8;
        case 0x3209ecu: goto label_3209ec;
        case 0x3209f0u: goto label_3209f0;
        case 0x3209f4u: goto label_3209f4;
        case 0x3209f8u: goto label_3209f8;
        case 0x3209fcu: goto label_3209fc;
        case 0x320a00u: goto label_320a00;
        case 0x320a04u: goto label_320a04;
        case 0x320a08u: goto label_320a08;
        case 0x320a0cu: goto label_320a0c;
        case 0x320a10u: goto label_320a10;
        case 0x320a14u: goto label_320a14;
        case 0x320a18u: goto label_320a18;
        case 0x320a1cu: goto label_320a1c;
        default: break;
    }

    ctx->pc = 0x3206c0u;

label_3206c0:
    // 0x3206c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3206c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3206c4:
    // 0x3206c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3206c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3206c8:
    // 0x3206c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3206c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3206cc:
    // 0x3206cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3206ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3206d0:
    // 0x3206d0: 0xc06421c  jal         func_190870
label_3206d4:
    if (ctx->pc == 0x3206D4u) {
        ctx->pc = 0x3206D4u;
            // 0x3206d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x3206D8u;
        goto label_3206d8;
    }
    ctx->pc = 0x3206D0u;
    SET_GPR_U32(ctx, 31, 0x3206D8u);
    ctx->pc = 0x3206D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3206D0u;
            // 0x3206d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3206D8u; }
        if (ctx->pc != 0x3206D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3206D8u; }
        if (ctx->pc != 0x3206D8u) { return; }
    }
    ctx->pc = 0x3206D8u;
label_3206d8:
    // 0x3206d8: 0xaf82a3f0  sw          $v0, -0x5C10($gp)
    ctx->pc = 0x3206d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943728), GPR_U32(ctx, 2));
label_3206dc:
    // 0x3206dc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3206dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_3206e0:
    // 0x3206e0: 0x8f84a3f0  lw          $a0, -0x5C10($gp)
    ctx->pc = 0x3206e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943728)));
label_3206e4:
    // 0x3206e4: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x3206e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_3206e8:
    // 0x3206e8: 0x8c390548  lw          $t9, 0x548($at)
    ctx->pc = 0x3206e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1352)));
label_3206ec:
    // 0x3206ec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3206ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3206f0:
    // 0x3206f0: 0x320f809  jalr        $t9
label_3206f4:
    if (ctx->pc == 0x3206F4u) {
        ctx->pc = 0x3206F8u;
        goto label_3206f8;
    }
    ctx->pc = 0x3206F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3206F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3206F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3206F8u; }
            if (ctx->pc != 0x3206F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3206F8u;
label_3206f8:
    // 0x3206f8: 0xc051878  jal         func_1461E0
label_3206fc:
    if (ctx->pc == 0x3206FCu) {
        ctx->pc = 0x320700u;
        goto label_320700;
    }
    ctx->pc = 0x3206F8u;
    SET_GPR_U32(ctx, 31, 0x320700u);
    ctx->pc = 0x1461E0u;
    if (runtime->hasFunction(0x1461E0u)) {
        auto targetFn = runtime->lookupFunction(0x1461E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320700u; }
        if (ctx->pc != 0x320700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitFont__Fv_0x1461e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320700u; }
        if (ctx->pc != 0x320700u) { return; }
    }
    ctx->pc = 0x320700u;
label_320700:
    // 0x320700: 0xc06423c  jal         func_1908F0
label_320704:
    if (ctx->pc == 0x320704u) {
        ctx->pc = 0x320708u;
        goto label_320708;
    }
    ctx->pc = 0x320700u;
    SET_GPR_U32(ctx, 31, 0x320708u);
    ctx->pc = 0x1908F0u;
    if (runtime->hasFunction(0x1908F0u)) {
        auto targetFn = runtime->lookupFunction(0x1908F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320708u; }
        if (ctx->pc != 0x320708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainStack__Fv_0x1908f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320708u; }
        if (ctx->pc != 0x320708u) { return; }
    }
    ctx->pc = 0x320708u;
label_320708:
    // 0x320708: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x320708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_32070c:
    // 0x32070c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32070cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320710:
    // 0x320710: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x320710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_320714:
    // 0x320714: 0x8382a418  lb          $v0, -0x5BE8($gp)
    ctx->pc = 0x320714u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943768)));
label_320718:
    // 0x320718: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_32071c:
    if (ctx->pc == 0x32071Cu) {
        ctx->pc = 0x32071Cu;
            // 0x32071c: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x320720u;
        goto label_320720;
    }
    ctx->pc = 0x320718u;
    {
        const bool branch_taken_0x320718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32071Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320718u;
            // 0x32071c: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320718) {
            ctx->pc = 0x320730u;
            goto label_320730;
        }
    }
    ctx->pc = 0x320720u;
label_320720:
    // 0x320720: 0xc04e640  jal         func_139900
label_320724:
    if (ctx->pc == 0x320724u) {
        ctx->pc = 0x320724u;
            // 0x320724: 0x24844d00  addiu       $a0, $a0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19712));
        ctx->pc = 0x320728u;
        goto label_320728;
    }
    ctx->pc = 0x320720u;
    SET_GPR_U32(ctx, 31, 0x320728u);
    ctx->pc = 0x320724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320720u;
            // 0x320724: 0x24844d00  addiu       $a0, $a0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320728u; }
        if (ctx->pc != 0x320728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320728u; }
        if (ctx->pc != 0x320728u) { return; }
    }
    ctx->pc = 0x320728u;
label_320728:
    // 0x320728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32072c:
    // 0x32072c: 0xa382a418  sb          $v0, -0x5BE8($gp)
    ctx->pc = 0x32072cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943768), (uint8_t)GPR_U32(ctx, 2));
label_320730:
    // 0x320730: 0x8382a41c  lb          $v0, -0x5BE4($gp)
    ctx->pc = 0x320730u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943772)));
label_320734:
    // 0x320734: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_320738:
    if (ctx->pc == 0x320738u) {
        ctx->pc = 0x320738u;
            // 0x320738: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x32073Cu;
        goto label_32073c;
    }
    ctx->pc = 0x320734u;
    {
        const bool branch_taken_0x320734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320734u;
            // 0x320738: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320734) {
            ctx->pc = 0x32074Cu;
            goto label_32074c;
        }
    }
    ctx->pc = 0x32073Cu;
label_32073c:
    // 0x32073c: 0xc04e640  jal         func_139900
label_320740:
    if (ctx->pc == 0x320740u) {
        ctx->pc = 0x320740u;
            // 0x320740: 0x24844d30  addiu       $a0, $a0, 0x4D30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19760));
        ctx->pc = 0x320744u;
        goto label_320744;
    }
    ctx->pc = 0x32073Cu;
    SET_GPR_U32(ctx, 31, 0x320744u);
    ctx->pc = 0x320740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32073Cu;
            // 0x320740: 0x24844d30  addiu       $a0, $a0, 0x4D30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320744u; }
        if (ctx->pc != 0x320744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320744u; }
        if (ctx->pc != 0x320744u) { return; }
    }
    ctx->pc = 0x320744u;
label_320744:
    // 0x320744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320748:
    // 0x320748: 0xa382a41c  sb          $v0, -0x5BE4($gp)
    ctx->pc = 0x320748u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943772), (uint8_t)GPR_U32(ctx, 2));
label_32074c:
    // 0x32074c: 0x8382a420  lb          $v0, -0x5BE0($gp)
    ctx->pc = 0x32074cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943776)));
label_320750:
    // 0x320750: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_320754:
    if (ctx->pc == 0x320754u) {
        ctx->pc = 0x320754u;
            // 0x320754: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x320758u;
        goto label_320758;
    }
    ctx->pc = 0x320750u;
    {
        const bool branch_taken_0x320750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320750u;
            // 0x320754: 0x3c0401f6  lui         $a0, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320750) {
            ctx->pc = 0x320768u;
            goto label_320768;
        }
    }
    ctx->pc = 0x320758u;
label_320758:
    // 0x320758: 0xc04e640  jal         func_139900
label_32075c:
    if (ctx->pc == 0x32075Cu) {
        ctx->pc = 0x32075Cu;
            // 0x32075c: 0x24844d60  addiu       $a0, $a0, 0x4D60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19808));
        ctx->pc = 0x320760u;
        goto label_320760;
    }
    ctx->pc = 0x320758u;
    SET_GPR_U32(ctx, 31, 0x320760u);
    ctx->pc = 0x32075Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320758u;
            // 0x32075c: 0x24844d60  addiu       $a0, $a0, 0x4D60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320760u; }
        if (ctx->pc != 0x320760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320760u; }
        if (ctx->pc != 0x320760u) { return; }
    }
    ctx->pc = 0x320760u;
label_320760:
    // 0x320760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320764:
    // 0x320764: 0xa382a420  sb          $v0, -0x5BE0($gp)
    ctx->pc = 0x320764u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943776), (uint8_t)GPR_U32(ctx, 2));
label_320768:
    // 0x320768: 0x8382a424  lb          $v0, -0x5BDC($gp)
    ctx->pc = 0x320768u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294943780)));
label_32076c:
    // 0x32076c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_320770:
    if (ctx->pc == 0x320770u) {
        ctx->pc = 0x320770u;
            // 0x320770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320774u;
        goto label_320774;
    }
    ctx->pc = 0x32076Cu;
    {
        const bool branch_taken_0x32076c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32076Cu;
            // 0x320770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32076c) {
            ctx->pc = 0x32078Cu;
            goto label_32078c;
        }
    }
    ctx->pc = 0x320774u;
label_320774:
    // 0x320774: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x320774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_320778:
    // 0x320778: 0xc04e640  jal         func_139900
label_32077c:
    if (ctx->pc == 0x32077Cu) {
        ctx->pc = 0x32077Cu;
            // 0x32077c: 0x24844d90  addiu       $a0, $a0, 0x4D90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19856));
        ctx->pc = 0x320780u;
        goto label_320780;
    }
    ctx->pc = 0x320778u;
    SET_GPR_U32(ctx, 31, 0x320780u);
    ctx->pc = 0x32077Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320778u;
            // 0x32077c: 0x24844d90  addiu       $a0, $a0, 0x4D90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320780u; }
        if (ctx->pc != 0x320780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320780u; }
        if (ctx->pc != 0x320780u) { return; }
    }
    ctx->pc = 0x320780u;
label_320780:
    // 0x320780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320784:
    // 0x320784: 0xa382a424  sb          $v0, -0x5BDC($gp)
    ctx->pc = 0x320784u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943780), (uint8_t)GPR_U32(ctx, 2));
label_320788:
    // 0x320788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32078c:
    // 0x32078c: 0xc04e704  jal         func_139C10
label_320790:
    if (ctx->pc == 0x320790u) {
        ctx->pc = 0x320790u;
            // 0x320790: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->pc = 0x320794u;
        goto label_320794;
    }
    ctx->pc = 0x32078Cu;
    SET_GPR_U32(ctx, 31, 0x320794u);
    ctx->pc = 0x320790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32078Cu;
            // 0x320790: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320794u; }
        if (ctx->pc != 0x320794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320794u; }
        if (ctx->pc != 0x320794u) { return; }
    }
    ctx->pc = 0x320794u;
label_320794:
    // 0x320794: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x320794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320798:
    // 0x320798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32079c:
    // 0x32079c: 0xc04e704  jal         func_139C10
label_3207a0:
    if (ctx->pc == 0x3207A0u) {
        ctx->pc = 0x3207A0u;
            // 0x3207a0: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->pc = 0x3207A4u;
        goto label_3207a4;
    }
    ctx->pc = 0x32079Cu;
    SET_GPR_U32(ctx, 31, 0x3207A4u);
    ctx->pc = 0x3207A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32079Cu;
            // 0x3207a0: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207A4u; }
        if (ctx->pc != 0x3207A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207A4u; }
        if (ctx->pc != 0x3207A4u) { return; }
    }
    ctx->pc = 0x3207A4u;
label_3207a4:
    // 0x3207a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3207a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3207a8:
    // 0x3207a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3207a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3207ac:
    // 0x3207ac: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3207acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_3207b0:
    // 0x3207b0: 0xc050784  jal         func_141E10
label_3207b4:
    if (ctx->pc == 0x3207B4u) {
        ctx->pc = 0x3207B4u;
            // 0x3207b4: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->pc = 0x3207B8u;
        goto label_3207b8;
    }
    ctx->pc = 0x3207B0u;
    SET_GPR_U32(ctx, 31, 0x3207B8u);
    ctx->pc = 0x3207B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3207B0u;
            // 0x3207b4: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (runtime->hasFunction(0x141E10u)) {
        auto targetFn = runtime->lookupFunction(0x141E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207B8u; }
        if (ctx->pc != 0x3207B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitVif1Packet__FP1P1i_0x141e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207B8u; }
        if (ctx->pc != 0x3207B8u) { return; }
    }
    ctx->pc = 0x3207B8u;
label_3207b8:
    // 0x3207b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3207b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3207bc:
    // 0x3207bc: 0xc04e704  jal         func_139C10
label_3207c0:
    if (ctx->pc == 0x3207C0u) {
        ctx->pc = 0x3207C0u;
            // 0x3207c0: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x3207C4u;
        goto label_3207c4;
    }
    ctx->pc = 0x3207BCu;
    SET_GPR_U32(ctx, 31, 0x3207C4u);
    ctx->pc = 0x3207C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3207BCu;
            // 0x3207c0: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207C4u; }
        if (ctx->pc != 0x3207C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207C4u; }
        if (ctx->pc != 0x3207C4u) { return; }
    }
    ctx->pc = 0x3207C4u;
label_3207c4:
    // 0x3207c4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3207c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3207c8:
    // 0x3207c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3207c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3207cc:
    // 0x3207cc: 0x24844d00  addiu       $a0, $a0, 0x4D00
    ctx->pc = 0x3207ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19712));
label_3207d0:
    // 0x3207d0: 0xc04e79c  jal         func_139E70
label_3207d4:
    if (ctx->pc == 0x3207D4u) {
        ctx->pc = 0x3207D4u;
            // 0x3207d4: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x3207D8u;
        goto label_3207d8;
    }
    ctx->pc = 0x3207D0u;
    SET_GPR_U32(ctx, 31, 0x3207D8u);
    ctx->pc = 0x3207D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3207D0u;
            // 0x3207d4: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207D8u; }
        if (ctx->pc != 0x3207D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207D8u; }
        if (ctx->pc != 0x3207D8u) { return; }
    }
    ctx->pc = 0x3207D8u;
label_3207d8:
    // 0x3207d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3207d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3207dc:
    // 0x3207dc: 0xc04e704  jal         func_139C10
label_3207e0:
    if (ctx->pc == 0x3207E0u) {
        ctx->pc = 0x3207E0u;
            // 0x3207e0: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x3207E4u;
        goto label_3207e4;
    }
    ctx->pc = 0x3207DCu;
    SET_GPR_U32(ctx, 31, 0x3207E4u);
    ctx->pc = 0x3207E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3207DCu;
            // 0x3207e0: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207E4u; }
        if (ctx->pc != 0x3207E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207E4u; }
        if (ctx->pc != 0x3207E4u) { return; }
    }
    ctx->pc = 0x3207E4u;
label_3207e4:
    // 0x3207e4: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3207e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3207e8:
    // 0x3207e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3207e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3207ec:
    // 0x3207ec: 0x24844d30  addiu       $a0, $a0, 0x4D30
    ctx->pc = 0x3207ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19760));
label_3207f0:
    // 0x3207f0: 0xc04e79c  jal         func_139E70
label_3207f4:
    if (ctx->pc == 0x3207F4u) {
        ctx->pc = 0x3207F4u;
            // 0x3207f4: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x3207F8u;
        goto label_3207f8;
    }
    ctx->pc = 0x3207F0u;
    SET_GPR_U32(ctx, 31, 0x3207F8u);
    ctx->pc = 0x3207F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3207F0u;
            // 0x3207f4: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207F8u; }
        if (ctx->pc != 0x3207F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3207F8u; }
        if (ctx->pc != 0x3207F8u) { return; }
    }
    ctx->pc = 0x3207F8u;
label_3207f8:
    // 0x3207f8: 0x3405ea60  ori         $a1, $zero, 0xEA60
    ctx->pc = 0x3207f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_3207fc:
    // 0x3207fc: 0xc04e704  jal         func_139C10
label_320800:
    if (ctx->pc == 0x320800u) {
        ctx->pc = 0x320800u;
            // 0x320800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320804u;
        goto label_320804;
    }
    ctx->pc = 0x3207FCu;
    SET_GPR_U32(ctx, 31, 0x320804u);
    ctx->pc = 0x320800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3207FCu;
            // 0x320800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320804u; }
        if (ctx->pc != 0x320804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320804u; }
        if (ctx->pc != 0x320804u) { return; }
    }
    ctx->pc = 0x320804u;
label_320804:
    // 0x320804: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x320804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_320808:
    // 0x320808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x320808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32080c:
    // 0x32080c: 0x24844d60  addiu       $a0, $a0, 0x4D60
    ctx->pc = 0x32080cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19808));
label_320810:
    // 0x320810: 0xc04e79c  jal         func_139E70
label_320814:
    if (ctx->pc == 0x320814u) {
        ctx->pc = 0x320814u;
            // 0x320814: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->pc = 0x320818u;
        goto label_320818;
    }
    ctx->pc = 0x320810u;
    SET_GPR_U32(ctx, 31, 0x320818u);
    ctx->pc = 0x320814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320810u;
            // 0x320814: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320818u; }
        if (ctx->pc != 0x320818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320818u; }
        if (ctx->pc != 0x320818u) { return; }
    }
    ctx->pc = 0x320818u;
label_320818:
    // 0x320818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32081c:
    // 0x32081c: 0xc04e704  jal         func_139C10
label_320820:
    if (ctx->pc == 0x320820u) {
        ctx->pc = 0x320820u;
            // 0x320820: 0x3405ea60  ori         $a1, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->pc = 0x320824u;
        goto label_320824;
    }
    ctx->pc = 0x32081Cu;
    SET_GPR_U32(ctx, 31, 0x320824u);
    ctx->pc = 0x320820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32081Cu;
            // 0x320820: 0x3405ea60  ori         $a1, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320824u; }
        if (ctx->pc != 0x320824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320824u; }
        if (ctx->pc != 0x320824u) { return; }
    }
    ctx->pc = 0x320824u;
label_320824:
    // 0x320824: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x320824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_320828:
    // 0x320828: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x320828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32082c:
    // 0x32082c: 0x24844d90  addiu       $a0, $a0, 0x4D90
    ctx->pc = 0x32082cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19856));
label_320830:
    // 0x320830: 0xc04e79c  jal         func_139E70
label_320834:
    if (ctx->pc == 0x320834u) {
        ctx->pc = 0x320834u;
            // 0x320834: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->pc = 0x320838u;
        goto label_320838;
    }
    ctx->pc = 0x320830u;
    SET_GPR_U32(ctx, 31, 0x320838u);
    ctx->pc = 0x320834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320830u;
            // 0x320834: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320838u; }
        if (ctx->pc != 0x320838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320838u; }
        if (ctx->pc != 0x320838u) { return; }
    }
    ctx->pc = 0x320838u;
label_320838:
    // 0x320838: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x320838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_32083c:
    // 0x32083c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32083cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_320840:
    // 0x320840: 0xc04e704  jal         func_139C10
label_320844:
    if (ctx->pc == 0x320844u) {
        ctx->pc = 0x320844u;
            // 0x320844: 0x344586a0  ori         $a1, $v0, 0x86A0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
        ctx->pc = 0x320848u;
        goto label_320848;
    }
    ctx->pc = 0x320840u;
    SET_GPR_U32(ctx, 31, 0x320848u);
    ctx->pc = 0x320844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320840u;
            // 0x320844: 0x344586a0  ori         $a1, $v0, 0x86A0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320848u; }
        if (ctx->pc != 0x320848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320848u; }
        if (ctx->pc != 0x320848u) { return; }
    }
    ctx->pc = 0x320848u;
label_320848:
    // 0x320848: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x320848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32084c:
    // 0x32084c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x32084cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_320850:
    // 0x320850: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x320850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_320854:
    // 0x320854: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x320854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
label_320858:
    // 0x320858: 0xc04e79c  jal         func_139E70
label_32085c:
    if (ctx->pc == 0x32085Cu) {
        ctx->pc = 0x32085Cu;
            // 0x32085c: 0x344686a0  ori         $a2, $v0, 0x86A0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
        ctx->pc = 0x320860u;
        goto label_320860;
    }
    ctx->pc = 0x320858u;
    SET_GPR_U32(ctx, 31, 0x320860u);
    ctx->pc = 0x32085Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320858u;
            // 0x32085c: 0x344686a0  ori         $a2, $v0, 0x86A0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320860u; }
        if (ctx->pc != 0x320860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320860u; }
        if (ctx->pc != 0x320860u) { return; }
    }
    ctx->pc = 0x320860u;
label_320860:
    // 0x320860: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x320860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_320864:
    // 0x320864: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x320864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_320868:
    // 0x320868: 0x24844d00  addiu       $a0, $a0, 0x4D00
    ctx->pc = 0x320868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19712));
label_32086c:
    // 0x32086c: 0xc0507bc  jal         func_141EF0
label_320870:
    if (ctx->pc == 0x320870u) {
        ctx->pc = 0x320870u;
            // 0x320870: 0x24a54d30  addiu       $a1, $a1, 0x4D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19760));
        ctx->pc = 0x320874u;
        goto label_320874;
    }
    ctx->pc = 0x32086Cu;
    SET_GPR_U32(ctx, 31, 0x320874u);
    ctx->pc = 0x320870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32086Cu;
            // 0x320870: 0x24a54d30  addiu       $a1, $a1, 0x4D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141EF0u;
    if (runtime->hasFunction(0x141EF0u)) {
        auto targetFn = runtime->lookupFunction(0x141EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320874u; }
        if (ctx->pc != 0x320874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPacketBuffer__FP9mgCMemoryP9mgCMemory_0x141ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320874u; }
        if (ctx->pc != 0x320874u) { return; }
    }
    ctx->pc = 0x320874u;
label_320874:
    // 0x320874: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x320874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_320878:
    // 0x320878: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x320878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
label_32087c:
    // 0x32087c: 0x24844d60  addiu       $a0, $a0, 0x4D60
    ctx->pc = 0x32087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19808));
label_320880:
    // 0x320880: 0x24a54d90  addiu       $a1, $a1, 0x4D90
    ctx->pc = 0x320880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19856));
label_320884:
    // 0x320884: 0xc050810  jal         func_142040
label_320888:
    if (ctx->pc == 0x320888u) {
        ctx->pc = 0x320888u;
            // 0x320888: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x32088Cu;
        goto label_32088c;
    }
    ctx->pc = 0x320884u;
    SET_GPR_U32(ctx, 31, 0x32088Cu);
    ctx->pc = 0x320888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320884u;
            // 0x320888: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142040u;
    if (runtime->hasFunction(0x142040u)) {
        auto targetFn = runtime->lookupFunction(0x142040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32088Cu; }
        if (ctx->pc != 0x32088Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDataBuffer__FP9mgCMemoryP9mgCMemoryi_0x142040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32088Cu; }
        if (ctx->pc != 0x32088Cu) { return; }
    }
    ctx->pc = 0x32088Cu;
label_32088c:
    // 0x32088c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32088cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_320890:
    // 0x320890: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x320890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_320894:
    // 0x320894: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x320894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_320898:
    // 0x320898: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x320898u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_32089c:
    // 0x32089c: 0xc050da0  jal         func_143680
label_3208a0:
    if (ctx->pc == 0x3208A0u) {
        ctx->pc = 0x3208A0u;
            // 0x3208a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3208A4u;
        goto label_3208a4;
    }
    ctx->pc = 0x32089Cu;
    SET_GPR_U32(ctx, 31, 0x3208A4u);
    ctx->pc = 0x3208A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32089Cu;
            // 0x3208a0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x143680u;
    if (runtime->hasFunction(0x143680u)) {
        auto targetFn = runtime->lookupFunction(0x143680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208A4u; }
        if (ctx->pc != 0x3208A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetBackGround__Fffff_0x143680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208A4u; }
        if (ctx->pc != 0x3208A4u) { return; }
    }
    ctx->pc = 0x3208A4u;
label_3208a4:
    // 0x3208a4: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x3208a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
label_3208a8:
    // 0x3208a8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3208a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_3208ac:
    // 0x3208ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3208acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3208b0:
    // 0x3208b0: 0xc064278  jal         func_1909E0
label_3208b4:
    if (ctx->pc == 0x3208B4u) {
        ctx->pc = 0x3208B4u;
            // 0x3208b4: 0x24c64aa0  addiu       $a2, $a2, 0x4AA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19104));
        ctx->pc = 0x3208B8u;
        goto label_3208b8;
    }
    ctx->pc = 0x3208B0u;
    SET_GPR_U32(ctx, 31, 0x3208B8u);
    ctx->pc = 0x3208B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3208B0u;
            // 0x3208b4: 0x24c64aa0  addiu       $a2, $a2, 0x4AA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1909E0u;
    if (runtime->hasFunction(0x1909E0u)) {
        auto targetFn = runtime->lookupFunction(0x1909E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208B8u; }
        if (ctx->pc != 0x3208B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTextureTable__FiiP9mgCMemory_0x1909e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208B8u; }
        if (ctx->pc != 0x3208B8u) { return; }
    }
    ctx->pc = 0x3208B8u;
label_3208b8:
    // 0x3208b8: 0xc0b61d8  jal         func_2D8760
label_3208bc:
    if (ctx->pc == 0x3208BCu) {
        ctx->pc = 0x3208C0u;
        goto label_3208c0;
    }
    ctx->pc = 0x3208B8u;
    SET_GPR_U32(ctx, 31, 0x3208C0u);
    ctx->pc = 0x2D8760u;
    if (runtime->hasFunction(0x2D8760u)) {
        auto targetFn = runtime->lookupFunction(0x2D8760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208C0u; }
        if (ctx->pc != 0x3208C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiImgPtr__Fv_0x2d8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208C0u; }
        if (ctx->pc != 0x3208C0u) { return; }
    }
    ctx->pc = 0x3208C0u;
label_3208c0:
    // 0x3208c0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x3208c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_3208c4:
    // 0x3208c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3208c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3208c8:
    // 0x3208c8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x3208c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_3208cc:
    // 0x3208cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3208ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3208d0:
    // 0x3208d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3208d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3208d4:
    // 0x3208d4: 0xc04b6a4  jal         func_12DA90
label_3208d8:
    if (ctx->pc == 0x3208D8u) {
        ctx->pc = 0x3208D8u;
            // 0x3208d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3208DCu;
        goto label_3208dc;
    }
    ctx->pc = 0x3208D4u;
    SET_GPR_U32(ctx, 31, 0x3208DCu);
    ctx->pc = 0x3208D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3208D4u;
            // 0x3208d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208DCu; }
        if (ctx->pc != 0x3208DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208DCu; }
        if (ctx->pc != 0x3208DCu) { return; }
    }
    ctx->pc = 0x3208DCu;
label_3208dc:
    // 0x3208dc: 0xc0b61f8  jal         func_2D87E0
label_3208e0:
    if (ctx->pc == 0x3208E0u) {
        ctx->pc = 0x3208E4u;
        goto label_3208e4;
    }
    ctx->pc = 0x3208DCu;
    SET_GPR_U32(ctx, 31, 0x3208E4u);
    ctx->pc = 0x2D87E0u;
    if (runtime->hasFunction(0x2D87E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208E4u; }
        if (ctx->pc != 0x3208E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontTex2ImgPtr__Fv_0x2d87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3208E4u; }
        if (ctx->pc != 0x3208E4u) { return; }
    }
    ctx->pc = 0x3208E4u;
label_3208e4:
    // 0x3208e4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x3208e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_3208e8:
    // 0x3208e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3208e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3208ec:
    // 0x3208ec: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x3208ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_3208f0:
    // 0x3208f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3208f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3208f4:
    // 0x3208f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3208f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3208f8:
    // 0x3208f8: 0xc04b6a4  jal         func_12DA90
label_3208fc:
    if (ctx->pc == 0x3208FCu) {
        ctx->pc = 0x3208FCu;
            // 0x3208fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320900u;
        goto label_320900;
    }
    ctx->pc = 0x3208F8u;
    SET_GPR_U32(ctx, 31, 0x320900u);
    ctx->pc = 0x3208FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3208F8u;
            // 0x3208fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320900u; }
        if (ctx->pc != 0x320900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320900u; }
        if (ctx->pc != 0x320900u) { return; }
    }
    ctx->pc = 0x320900u;
label_320900:
    // 0x320900: 0xc0488ea  jal         func_1223A8
label_320904:
    if (ctx->pc == 0x320904u) {
        ctx->pc = 0x320908u;
        goto label_320908;
    }
    ctx->pc = 0x320900u;
    SET_GPR_U32(ctx, 31, 0x320908u);
    ctx->pc = 0x1223A8u;
    if (runtime->hasFunction(0x1223A8u)) {
        auto targetFn = runtime->lookupFunction(0x1223A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320908u; }
        if (ctx->pc != 0x320908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcInit_0x1223a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320908u; }
        if (ctx->pc != 0x320908u) { return; }
    }
    ctx->pc = 0x320908u;
label_320908:
    // 0x320908: 0xc04e780  jal         func_139E00
label_32090c:
    if (ctx->pc == 0x32090Cu) {
        ctx->pc = 0x32090Cu;
            // 0x32090c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320910u;
        goto label_320910;
    }
    ctx->pc = 0x320908u;
    SET_GPR_U32(ctx, 31, 0x320910u);
    ctx->pc = 0x32090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320908u;
            // 0x32090c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320910u; }
        if (ctx->pc != 0x320910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320910u; }
        if (ctx->pc != 0x320910u) { return; }
    }
    ctx->pc = 0x320910u;
label_320910:
    // 0x320910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_320914:
    // 0x320914: 0xc04e748  jal         func_139D20
label_320918:
    if (ctx->pc == 0x320918u) {
        ctx->pc = 0x320918u;
            // 0x320918: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->pc = 0x32091Cu;
        goto label_32091c;
    }
    ctx->pc = 0x320914u;
    SET_GPR_U32(ctx, 31, 0x32091Cu);
    ctx->pc = 0x320918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320914u;
            // 0x320918: 0x24050082  addiu       $a1, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32091Cu; }
        if (ctx->pc != 0x32091Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32091Cu; }
        if (ctx->pc != 0x32091Cu) { return; }
    }
    ctx->pc = 0x32091Cu;
label_32091c:
    // 0x32091c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x32091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_320920:
    // 0x320920: 0xc04e63c  jal         func_1398F0
label_320924:
    if (ctx->pc == 0x320924u) {
        ctx->pc = 0x320924u;
            // 0x320924: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320928u;
        goto label_320928;
    }
    ctx->pc = 0x320920u;
    SET_GPR_U32(ctx, 31, 0x320928u);
    ctx->pc = 0x320924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320920u;
            // 0x320924: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320928u; }
        if (ctx->pc != 0x320928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320928u; }
        if (ctx->pc != 0x320928u) { return; }
    }
    ctx->pc = 0x320928u;
label_320928:
    // 0x320928: 0xaf82a410  sw          $v0, -0x5BF0($gp)
    ctx->pc = 0x320928u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943760), GPR_U32(ctx, 2));
label_32092c:
    // 0x32092c: 0xc04e780  jal         func_139E00
label_320930:
    if (ctx->pc == 0x320930u) {
        ctx->pc = 0x320930u;
            // 0x320930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320934u;
        goto label_320934;
    }
    ctx->pc = 0x32092Cu;
    SET_GPR_U32(ctx, 31, 0x320934u);
    ctx->pc = 0x320930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32092Cu;
            // 0x320930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320934u; }
        if (ctx->pc != 0x320934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320934u; }
        if (ctx->pc != 0x320934u) { return; }
    }
    ctx->pc = 0x320934u;
label_320934:
    // 0x320934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_320938:
    // 0x320938: 0xc04e748  jal         func_139D20
label_32093c:
    if (ctx->pc == 0x32093Cu) {
        ctx->pc = 0x32093Cu;
            // 0x32093c: 0x2405659e  addiu       $a1, $zero, 0x659E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26014));
        ctx->pc = 0x320940u;
        goto label_320940;
    }
    ctx->pc = 0x320938u;
    SET_GPR_U32(ctx, 31, 0x320940u);
    ctx->pc = 0x32093Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320938u;
            // 0x32093c: 0x2405659e  addiu       $a1, $zero, 0x659E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26014));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320940u; }
        if (ctx->pc != 0x320940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320940u; }
        if (ctx->pc != 0x320940u) { return; }
    }
    ctx->pc = 0x320940u;
label_320940:
    // 0x320940: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x320940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
label_320944:
    // 0x320944: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x320944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320948:
    // 0x320948: 0xc04e638  jal         func_1398E0
label_32094c:
    if (ctx->pc == 0x32094Cu) {
        ctx->pc = 0x32094Cu;
            // 0x32094c: 0x346459c0  ori         $a0, $v1, 0x59C0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22976);
        ctx->pc = 0x320950u;
        goto label_320950;
    }
    ctx->pc = 0x320948u;
    SET_GPR_U32(ctx, 31, 0x320950u);
    ctx->pc = 0x32094Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320948u;
            // 0x32094c: 0x346459c0  ori         $a0, $v1, 0x59C0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22976);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320950u; }
        if (ctx->pc != 0x320950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320950u; }
        if (ctx->pc != 0x320950u) { return; }
    }
    ctx->pc = 0x320950u;
label_320950:
    // 0x320950: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_320954:
    if (ctx->pc == 0x320954u) {
        ctx->pc = 0x320954u;
            // 0x320954: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320958u;
        goto label_320958;
    }
    ctx->pc = 0x320950u;
    {
        const bool branch_taken_0x320950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320950u;
            // 0x320954: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320950) {
            ctx->pc = 0x3209ACu;
            goto label_3209ac;
        }
    }
    ctx->pc = 0x320958u;
label_320958:
    // 0x320958: 0x26321ca4  addiu       $s2, $s1, 0x1CA4
    ctx->pc = 0x320958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 7332));
label_32095c:
    // 0x32095c: 0xc065154  jal         func_194550
label_320960:
    if (ctx->pc == 0x320960u) {
        ctx->pc = 0x320960u;
            // 0x320960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x320964u;
        goto label_320964;
    }
    ctx->pc = 0x32095Cu;
    SET_GPR_U32(ctx, 31, 0x320964u);
    ctx->pc = 0x320960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32095Cu;
            // 0x320960: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194550u;
    if (runtime->hasFunction(0x194550u)) {
        auto targetFn = runtime->lookupFunction(0x194550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320964u; }
        if (ctx->pc != 0x320964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CEditDataFv_0x194550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320964u; }
        if (ctx->pc != 0x320964u) { return; }
    }
    ctx->pc = 0x320964u;
label_320964:
    // 0x320964: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x320964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_320968:
    // 0x320968: 0x26525510  addiu       $s2, $s2, 0x5510
    ctx->pc = 0x320968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 21776));
label_32096c:
    // 0x32096c: 0x3421c5f4  ori         $at, $at, 0xC5F4
    ctx->pc = 0x32096cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50676);
label_320970:
    // 0x320970: 0x2211021  addu        $v0, $s1, $at
    ctx->pc = 0x320970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_320974:
    // 0x320974: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x320974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_320978:
    // 0x320978: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_32097c:
    if (ctx->pc == 0x32097Cu) {
        ctx->pc = 0x32097Cu;
            // 0x32097c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x320980u;
        goto label_320980;
    }
    ctx->pc = 0x320978u;
    {
        const bool branch_taken_0x320978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32097Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320978u;
            // 0x32097c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320978) {
            ctx->pc = 0x32095Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32095c;
        }
    }
    ctx->pc = 0x320980u;
label_320980:
    // 0x320980: 0x3421d320  ori         $at, $at, 0xD320
    ctx->pc = 0x320980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54048);
label_320984:
    // 0x320984: 0xc0650ec  jal         func_1943B0
label_320988:
    if (ctx->pc == 0x320988u) {
        ctx->pc = 0x320988u;
            // 0x320988: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->pc = 0x32098Cu;
        goto label_32098c;
    }
    ctx->pc = 0x320984u;
    SET_GPR_U32(ctx, 31, 0x32098Cu);
    ctx->pc = 0x320988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320984u;
            // 0x320988: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1943B0u;
    if (runtime->hasFunction(0x1943B0u)) {
        auto targetFn = runtime->lookupFunction(0x1943B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32098Cu; }
        if (ctx->pc != 0x32098Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__16CUserDataManagerFv_0x1943b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32098Cu; }
        if (ctx->pc != 0x32098Cu) { return; }
    }
    ctx->pc = 0x32098Cu;
label_32098c:
    // 0x32098c: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x32098cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
label_320990:
    // 0x320990: 0x34212ac0  ori         $at, $at, 0x2AC0
    ctx->pc = 0x320990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10944);
label_320994:
    // 0x320994: 0xc0c6a8c  jal         func_31AA30
label_320998:
    if (ctx->pc == 0x320998u) {
        ctx->pc = 0x320998u;
            // 0x320998: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->pc = 0x32099Cu;
        goto label_32099c;
    }
    ctx->pc = 0x320994u;
    SET_GPR_U32(ctx, 31, 0x32099Cu);
    ctx->pc = 0x320998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x320994u;
            // 0x320998: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31AA30u;
    if (runtime->hasFunction(0x31AA30u)) {
        auto targetFn = runtime->lookupFunction(0x31AA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32099Cu; }
        if (ctx->pc != 0x32099Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CQuestDataFv_0x31aa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32099Cu; }
        if (ctx->pc != 0x32099Cu) { return; }
    }
    ctx->pc = 0x32099Cu;
label_32099c:
    // 0x32099c: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x32099cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
label_3209a0:
    // 0x3209a0: 0x34214140  ori         $at, $at, 0x4140
    ctx->pc = 0x3209a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16704);
label_3209a4:
    // 0x3209a4: 0xc0bc4b4  jal         func_2F12D0
label_3209a8:
    if (ctx->pc == 0x3209A8u) {
        ctx->pc = 0x3209A8u;
            // 0x3209a8: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->pc = 0x3209ACu;
        goto label_3209ac;
    }
    ctx->pc = 0x3209A4u;
    SET_GPR_U32(ctx, 31, 0x3209ACu);
    ctx->pc = 0x3209A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3209A4u;
            // 0x3209a8: 0x2212021  addu        $a0, $s1, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F12D0u;
    if (runtime->hasFunction(0x2F12D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F12D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209ACu; }
        if (ctx->pc != 0x3209ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15CMenuSystemDataFv_0x2f12d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209ACu; }
        if (ctx->pc != 0x3209ACu) { return; }
    }
    ctx->pc = 0x3209ACu;
label_3209ac:
    // 0x3209ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3209acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3209b0:
    // 0x3209b0: 0xc04e780  jal         func_139E00
label_3209b4:
    if (ctx->pc == 0x3209B4u) {
        ctx->pc = 0x3209B4u;
            // 0x3209b4: 0xaf91a414  sw          $s1, -0x5BEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943764), GPR_U32(ctx, 17));
        ctx->pc = 0x3209B8u;
        goto label_3209b8;
    }
    ctx->pc = 0x3209B0u;
    SET_GPR_U32(ctx, 31, 0x3209B8u);
    ctx->pc = 0x3209B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3209B0u;
            // 0x3209b4: 0xaf91a414  sw          $s1, -0x5BEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943764), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209B8u; }
        if (ctx->pc != 0x3209B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209B8u; }
        if (ctx->pc != 0x3209B8u) { return; }
    }
    ctx->pc = 0x3209B8u;
label_3209b8:
    // 0x3209b8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x3209b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3209bc:
    // 0x3209bc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3209bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3209c0:
    // 0x3209c0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x3209c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3209c4:
    // 0x3209c4: 0x24844ad0  addiu       $a0, $a0, 0x4AD0
    ctx->pc = 0x3209c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19152));
label_3209c8:
    // 0x3209c8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x3209c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3209cc:
    // 0x3209cc: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x3209ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3209d0:
    // 0x3209d0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x3209d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_3209d4:
    // 0x3209d4: 0xc04e79c  jal         func_139E70
label_3209d8:
    if (ctx->pc == 0x3209D8u) {
        ctx->pc = 0x3209D8u;
            // 0x3209d8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3209DCu;
        goto label_3209dc;
    }
    ctx->pc = 0x3209D4u;
    SET_GPR_U32(ctx, 31, 0x3209DCu);
    ctx->pc = 0x3209D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3209D4u;
            // 0x3209d8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209DCu; }
        if (ctx->pc != 0x3209DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209DCu; }
        if (ctx->pc != 0x3209DCu) { return; }
    }
    ctx->pc = 0x3209DCu;
label_3209dc:
    // 0x3209dc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3209dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3209e0:
    // 0x3209e0: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3209e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3209e4:
    // 0x3209e4: 0xac204af4  sw          $zero, 0x4AF4($at)
    ctx->pc = 0x3209e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19188), GPR_U32(ctx, 0));
label_3209e8:
    // 0x3209e8: 0x24844ad0  addiu       $a0, $a0, 0x4AD0
    ctx->pc = 0x3209e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19152));
label_3209ec:
    // 0x3209ec: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x3209ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_3209f0:
    // 0x3209f0: 0xc04e780  jal         func_139E00
label_3209f4:
    if (ctx->pc == 0x3209F4u) {
        ctx->pc = 0x3209F4u;
            // 0x3209f4: 0xac204aec  sw          $zero, 0x4AEC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19180), GPR_U32(ctx, 0));
        ctx->pc = 0x3209F8u;
        goto label_3209f8;
    }
    ctx->pc = 0x3209F0u;
    SET_GPR_U32(ctx, 31, 0x3209F8u);
    ctx->pc = 0x3209F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3209F0u;
            // 0x3209f4: 0xac204aec  sw          $zero, 0x4AEC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209F8u; }
        if (ctx->pc != 0x3209F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3209F8u; }
        if (ctx->pc != 0x3209F8u) { return; }
    }
    ctx->pc = 0x3209F8u;
label_3209f8:
    // 0x3209f8: 0xc0c83e8  jal         func_320FA0
label_3209fc:
    if (ctx->pc == 0x3209FCu) {
        ctx->pc = 0x320A00u;
        goto label_320a00;
    }
    ctx->pc = 0x3209F8u;
    SET_GPR_U32(ctx, 31, 0x320A00u);
    ctx->pc = 0x320FA0u;
    if (runtime->hasFunction(0x320FA0u)) {
        auto targetFn = runtime->lookupFunction(0x320FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A00u; }
        if (ctx->pc != 0x320A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveFileInfoTablePtr__Fv_0x320fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x320A00u; }
        if (ctx->pc != 0x320A00u) { return; }
    }
    ctx->pc = 0x320A00u;
label_320a00:
    // 0x320a00: 0xaf80a3f4  sw          $zero, -0x5C0C($gp)
    ctx->pc = 0x320a00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943732), GPR_U32(ctx, 0));
label_320a04:
    // 0x320a04: 0xaf80a3f8  sw          $zero, -0x5C08($gp)
    ctx->pc = 0x320a04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943736), GPR_U32(ctx, 0));
label_320a08:
    // 0x320a08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x320a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_320a0c:
    // 0x320a0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x320a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_320a10:
    // 0x320a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x320a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_320a14:
    // 0x320a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x320a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_320a18:
    // 0x320a18: 0x3e00008  jr          $ra
label_320a1c:
    if (ctx->pc == 0x320A1Cu) {
        ctx->pc = 0x320A1Cu;
            // 0x320a1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x320A20u;
        goto label_fallthrough_0x320a18;
    }
    ctx->pc = 0x320A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x320A18u;
            // 0x320a1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x320a18:
    ctx->pc = 0x320A20u;
}
