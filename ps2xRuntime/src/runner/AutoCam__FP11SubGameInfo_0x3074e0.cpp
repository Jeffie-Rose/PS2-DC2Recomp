#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AutoCam__FP11SubGameInfo
// Address: 0x3074e0 - 0x307720
void AutoCam__FP11SubGameInfo_0x3074e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AutoCam__FP11SubGameInfo_0x3074e0");
#endif

    switch (ctx->pc) {
        case 0x3074e0u: goto label_3074e0;
        case 0x3074e4u: goto label_3074e4;
        case 0x3074e8u: goto label_3074e8;
        case 0x3074ecu: goto label_3074ec;
        case 0x3074f0u: goto label_3074f0;
        case 0x3074f4u: goto label_3074f4;
        case 0x3074f8u: goto label_3074f8;
        case 0x3074fcu: goto label_3074fc;
        case 0x307500u: goto label_307500;
        case 0x307504u: goto label_307504;
        case 0x307508u: goto label_307508;
        case 0x30750cu: goto label_30750c;
        case 0x307510u: goto label_307510;
        case 0x307514u: goto label_307514;
        case 0x307518u: goto label_307518;
        case 0x30751cu: goto label_30751c;
        case 0x307520u: goto label_307520;
        case 0x307524u: goto label_307524;
        case 0x307528u: goto label_307528;
        case 0x30752cu: goto label_30752c;
        case 0x307530u: goto label_307530;
        case 0x307534u: goto label_307534;
        case 0x307538u: goto label_307538;
        case 0x30753cu: goto label_30753c;
        case 0x307540u: goto label_307540;
        case 0x307544u: goto label_307544;
        case 0x307548u: goto label_307548;
        case 0x30754cu: goto label_30754c;
        case 0x307550u: goto label_307550;
        case 0x307554u: goto label_307554;
        case 0x307558u: goto label_307558;
        case 0x30755cu: goto label_30755c;
        case 0x307560u: goto label_307560;
        case 0x307564u: goto label_307564;
        case 0x307568u: goto label_307568;
        case 0x30756cu: goto label_30756c;
        case 0x307570u: goto label_307570;
        case 0x307574u: goto label_307574;
        case 0x307578u: goto label_307578;
        case 0x30757cu: goto label_30757c;
        case 0x307580u: goto label_307580;
        case 0x307584u: goto label_307584;
        case 0x307588u: goto label_307588;
        case 0x30758cu: goto label_30758c;
        case 0x307590u: goto label_307590;
        case 0x307594u: goto label_307594;
        case 0x307598u: goto label_307598;
        case 0x30759cu: goto label_30759c;
        case 0x3075a0u: goto label_3075a0;
        case 0x3075a4u: goto label_3075a4;
        case 0x3075a8u: goto label_3075a8;
        case 0x3075acu: goto label_3075ac;
        case 0x3075b0u: goto label_3075b0;
        case 0x3075b4u: goto label_3075b4;
        case 0x3075b8u: goto label_3075b8;
        case 0x3075bcu: goto label_3075bc;
        case 0x3075c0u: goto label_3075c0;
        case 0x3075c4u: goto label_3075c4;
        case 0x3075c8u: goto label_3075c8;
        case 0x3075ccu: goto label_3075cc;
        case 0x3075d0u: goto label_3075d0;
        case 0x3075d4u: goto label_3075d4;
        case 0x3075d8u: goto label_3075d8;
        case 0x3075dcu: goto label_3075dc;
        case 0x3075e0u: goto label_3075e0;
        case 0x3075e4u: goto label_3075e4;
        case 0x3075e8u: goto label_3075e8;
        case 0x3075ecu: goto label_3075ec;
        case 0x3075f0u: goto label_3075f0;
        case 0x3075f4u: goto label_3075f4;
        case 0x3075f8u: goto label_3075f8;
        case 0x3075fcu: goto label_3075fc;
        case 0x307600u: goto label_307600;
        case 0x307604u: goto label_307604;
        case 0x307608u: goto label_307608;
        case 0x30760cu: goto label_30760c;
        case 0x307610u: goto label_307610;
        case 0x307614u: goto label_307614;
        case 0x307618u: goto label_307618;
        case 0x30761cu: goto label_30761c;
        case 0x307620u: goto label_307620;
        case 0x307624u: goto label_307624;
        case 0x307628u: goto label_307628;
        case 0x30762cu: goto label_30762c;
        case 0x307630u: goto label_307630;
        case 0x307634u: goto label_307634;
        case 0x307638u: goto label_307638;
        case 0x30763cu: goto label_30763c;
        case 0x307640u: goto label_307640;
        case 0x307644u: goto label_307644;
        case 0x307648u: goto label_307648;
        case 0x30764cu: goto label_30764c;
        case 0x307650u: goto label_307650;
        case 0x307654u: goto label_307654;
        case 0x307658u: goto label_307658;
        case 0x30765cu: goto label_30765c;
        case 0x307660u: goto label_307660;
        case 0x307664u: goto label_307664;
        case 0x307668u: goto label_307668;
        case 0x30766cu: goto label_30766c;
        case 0x307670u: goto label_307670;
        case 0x307674u: goto label_307674;
        case 0x307678u: goto label_307678;
        case 0x30767cu: goto label_30767c;
        case 0x307680u: goto label_307680;
        case 0x307684u: goto label_307684;
        case 0x307688u: goto label_307688;
        case 0x30768cu: goto label_30768c;
        case 0x307690u: goto label_307690;
        case 0x307694u: goto label_307694;
        case 0x307698u: goto label_307698;
        case 0x30769cu: goto label_30769c;
        case 0x3076a0u: goto label_3076a0;
        case 0x3076a4u: goto label_3076a4;
        case 0x3076a8u: goto label_3076a8;
        case 0x3076acu: goto label_3076ac;
        case 0x3076b0u: goto label_3076b0;
        case 0x3076b4u: goto label_3076b4;
        case 0x3076b8u: goto label_3076b8;
        case 0x3076bcu: goto label_3076bc;
        case 0x3076c0u: goto label_3076c0;
        case 0x3076c4u: goto label_3076c4;
        case 0x3076c8u: goto label_3076c8;
        case 0x3076ccu: goto label_3076cc;
        case 0x3076d0u: goto label_3076d0;
        case 0x3076d4u: goto label_3076d4;
        case 0x3076d8u: goto label_3076d8;
        case 0x3076dcu: goto label_3076dc;
        case 0x3076e0u: goto label_3076e0;
        case 0x3076e4u: goto label_3076e4;
        case 0x3076e8u: goto label_3076e8;
        case 0x3076ecu: goto label_3076ec;
        case 0x3076f0u: goto label_3076f0;
        case 0x3076f4u: goto label_3076f4;
        case 0x3076f8u: goto label_3076f8;
        case 0x3076fcu: goto label_3076fc;
        case 0x307700u: goto label_307700;
        case 0x307704u: goto label_307704;
        case 0x307708u: goto label_307708;
        case 0x30770cu: goto label_30770c;
        case 0x307710u: goto label_307710;
        case 0x307714u: goto label_307714;
        case 0x307718u: goto label_307718;
        case 0x30771cu: goto label_30771c;
        default: break;
    }

    ctx->pc = 0x3074e0u;

label_3074e0:
    // 0x3074e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3074e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3074e4:
    // 0x3074e4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x3074e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_3074e8:
    // 0x3074e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3074e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3074ec:
    // 0x3074ec: 0x2442a2f4  addiu       $v0, $v0, -0x5D0C
    ctx->pc = 0x3074ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943476));
label_3074f0:
    // 0x3074f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3074f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3074f4:
    // 0x3074f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3074f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3074f8:
    // 0x3074f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3074f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3074fc:
    // 0x3074fc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3074fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_307500:
    // 0x307500: 0x8f85a134  lw          $a1, -0x5ECC($gp)
    ctx->pc = 0x307500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943028)));
label_307504:
    // 0x307504: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x307504u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_307508:
    // 0x307508: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x307508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_30750c:
    // 0x30750c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30750cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_307510:
    // 0x307510: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x307510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_307514:
    // 0x307514: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x307514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_307518:
    // 0x307518: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x307518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_30751c:
    // 0x30751c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_307520:
    // 0x307520: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x307520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_307524:
    // 0x307524: 0xc0a0ed8  jal         func_283B60
label_307528:
    if (ctx->pc == 0x307528u) {
        ctx->pc = 0x307528u;
            // 0x307528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30752Cu;
        goto label_30752c;
    }
    ctx->pc = 0x307524u;
    SET_GPR_U32(ctx, 31, 0x30752Cu);
    ctx->pc = 0x307528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307524u;
            // 0x307528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30752Cu; }
        if (ctx->pc != 0x30752Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30752Cu; }
        if (ctx->pc != 0x30752Cu) { return; }
    }
    ctx->pc = 0x30752Cu;
label_30752c:
    // 0x30752c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x30752cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_307530:
    // 0x307530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x307530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_307534:
    // 0x307534: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x307534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_307538:
    // 0x307538: 0x320f809  jalr        $t9
label_30753c:
    if (ctx->pc == 0x30753Cu) {
        ctx->pc = 0x30753Cu;
            // 0x30753c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x307540u;
        goto label_307540;
    }
    ctx->pc = 0x307538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x307540u);
        ctx->pc = 0x30753Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307538u;
            // 0x30753c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x307540u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x307540u; }
            if (ctx->pc != 0x307540u) { return; }
        }
        }
    }
    ctx->pc = 0x307540u;
label_307540:
    // 0x307540: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x307540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_307544:
    // 0x307544: 0xaf80a13c  sw          $zero, -0x5EC4($gp)
    ctx->pc = 0x307544u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943036), GPR_U32(ctx, 0));
label_307548:
    // 0x307548: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x307548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
label_30754c:
    // 0x30754c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30754cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307550:
    // 0x307550: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x307550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_307554:
    // 0x307554: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x307554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307558:
    // 0x307558: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x307558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_30755c:
    // 0x30755c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30755cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_307560:
    // 0x307560: 0x2442da00  addiu       $v0, $v0, -0x2600
    ctx->pc = 0x307560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957568));
label_307564:
    // 0x307564: 0xc04c018  jal         func_130060
label_307568:
    if (ctx->pc == 0x307568u) {
        ctx->pc = 0x307568u;
            // 0x307568: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x30756Cu;
        goto label_30756c;
    }
    ctx->pc = 0x307564u;
    SET_GPR_U32(ctx, 31, 0x30756Cu);
    ctx->pc = 0x307568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307564u;
            // 0x307568: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30756Cu; }
        if (ctx->pc != 0x30756Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30756Cu; }
        if (ctx->pc != 0x30756Cu) { return; }
    }
    ctx->pc = 0x30756Cu;
label_30756c:
    // 0x30756c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x30756cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_307570:
    // 0x307570: 0x0  nop
    ctx->pc = 0x307570u;
    // NOP
label_307574:
    // 0x307574: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_307578:
    if (ctx->pc == 0x307578u) {
        ctx->pc = 0x30757Cu;
        goto label_30757c;
    }
    ctx->pc = 0x307574u;
    {
        const bool branch_taken_0x307574 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x307574) {
            ctx->pc = 0x307584u;
            goto label_307584;
        }
    }
    ctx->pc = 0x30757Cu;
label_30757c:
    // 0x30757c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30757cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_307580:
    // 0x307580: 0xaf91a13c  sw          $s1, -0x5EC4($gp)
    ctx->pc = 0x307580u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943036), GPR_U32(ctx, 17));
label_307584:
    // 0x307584: 0x0  nop
    ctx->pc = 0x307584u;
    // NOP
label_307588:
    // 0x307588: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x307588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_30758c:
    // 0x30758c: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x30758cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_307590:
    // 0x307590: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_307594:
    if (ctx->pc == 0x307594u) {
        ctx->pc = 0x307594u;
            // 0x307594: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x307598u;
        goto label_307598;
    }
    ctx->pc = 0x307590u;
    {
        const bool branch_taken_0x307590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307590u;
            // 0x307594: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307590) {
            ctx->pc = 0x307558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_307558;
        }
    }
    ctx->pc = 0x307598u;
label_307598:
    // 0x307598: 0x8f8285f0  lw          $v0, -0x7A10($gp)
    ctx->pc = 0x307598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936048)));
label_30759c:
    // 0x30759c: 0x8f83a13c  lw          $v1, -0x5EC4($gp)
    ctx->pc = 0x30759cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943036)));
label_3075a0:
    // 0x3075a0: 0x10430043  beq         $v0, $v1, . + 4 + (0x43 << 2)
label_3075a4:
    if (ctx->pc == 0x3075A4u) {
        ctx->pc = 0x3075A4u;
            // 0x3075a4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x3075A8u;
        goto label_3075a8;
    }
    ctx->pc = 0x3075A0u;
    {
        const bool branch_taken_0x3075a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3075A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3075A0u;
            // 0x3075a4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3075a0) {
            ctx->pc = 0x3076B0u;
            goto label_3076b0;
        }
    }
    ctx->pc = 0x3075A8u;
label_3075a8:
    // 0x3075a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3075a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3075ac:
    // 0x3075ac: 0x2442da04  addiu       $v0, $v0, -0x25FC
    ctx->pc = 0x3075acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957572));
label_3075b0:
    // 0x3075b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3075b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3075b4:
    // 0x3075b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3075b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3075b8:
    // 0x3075b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3075b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3075bc:
    // 0x3075bc: 0x0  nop
    ctx->pc = 0x3075bcu;
    // NOP
label_3075c0:
    // 0x3075c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3075c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3075c4:
    // 0x3075c4: 0x0  nop
    ctx->pc = 0x3075c4u;
    // NOP
label_3075c8:
    // 0x3075c8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_3075cc:
    if (ctx->pc == 0x3075CCu) {
        ctx->pc = 0x3075D0u;
        goto label_3075d0;
    }
    ctx->pc = 0x3075C8u;
    {
        const bool branch_taken_0x3075c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3075c8) {
            ctx->pc = 0x3075F8u;
            goto label_3075f8;
        }
    }
    ctx->pc = 0x3075D0u;
label_3075d0:
    // 0x3075d0: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x3075d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_3075d4:
    // 0x3075d4: 0xc063624  jal         func_18D890
label_3075d8:
    if (ctx->pc == 0x3075D8u) {
        ctx->pc = 0x3075D8u;
            // 0x3075d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3075DCu;
        goto label_3075dc;
    }
    ctx->pc = 0x3075D4u;
    SET_GPR_U32(ctx, 31, 0x3075DCu);
    ctx->pc = 0x3075D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3075D4u;
            // 0x3075d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D890u;
    if (runtime->hasFunction(0x18D890u)) {
        auto targetFn = runtime->lookupFunction(0x18D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3075DCu; }
        if (ctx->pc != 0x3075DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetSeDefVol__FUii_0x18d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3075DCu; }
        if (ctx->pc != 0x3075DCu) { return; }
    }
    ctx->pc = 0x3075DCu;
label_3075dc:
    // 0x3075dc: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x3075dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_3075e0:
    // 0x3075e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3075e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3075e4:
    // 0x3075e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3075e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3075e8:
    // 0x3075e8: 0xc063a7c  jal         func_18E9F0
label_3075ec:
    if (ctx->pc == 0x3075ECu) {
        ctx->pc = 0x3075ECu;
            // 0x3075ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3075F0u;
        goto label_3075f0;
    }
    ctx->pc = 0x3075E8u;
    SET_GPR_U32(ctx, 31, 0x3075F0u);
    ctx->pc = 0x3075ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3075E8u;
            // 0x3075ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E9F0u;
    if (runtime->hasFunction(0x18E9F0u)) {
        auto targetFn = runtime->lookupFunction(0x18E9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3075F0u; }
        if (ctx->pc != 0x3075F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVol__FUiiii_0x18e9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3075F0u; }
        if (ctx->pc != 0x3075F0u) { return; }
    }
    ctx->pc = 0x3075F0u;
label_3075f0:
    // 0x3075f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3075f4:
    if (ctx->pc == 0x3075F4u) {
        ctx->pc = 0x3075F4u;
            // 0x3075f4: 0x8f83a13c  lw          $v1, -0x5EC4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943036)));
        ctx->pc = 0x3075F8u;
        goto label_3075f8;
    }
    ctx->pc = 0x3075F0u;
    {
        const bool branch_taken_0x3075f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3075F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3075F0u;
            // 0x3075f4: 0x8f83a13c  lw          $v1, -0x5EC4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3075f0) {
            ctx->pc = 0x307610u;
            goto label_307610;
        }
    }
    ctx->pc = 0x3075F8u;
label_3075f8:
    // 0x3075f8: 0x8f84a110  lw          $a0, -0x5EF0($gp)
    ctx->pc = 0x3075f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942992)));
label_3075fc:
    // 0x3075fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3075fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_307600:
    // 0x307600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x307600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_307604:
    // 0x307604: 0xc063a7c  jal         func_18E9F0
label_307608:
    if (ctx->pc == 0x307608u) {
        ctx->pc = 0x307608u;
            // 0x307608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30760Cu;
        goto label_30760c;
    }
    ctx->pc = 0x307604u;
    SET_GPR_U32(ctx, 31, 0x30760Cu);
    ctx->pc = 0x307608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307604u;
            // 0x307608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E9F0u;
    if (runtime->hasFunction(0x18E9F0u)) {
        auto targetFn = runtime->lookupFunction(0x18E9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30760Cu; }
        if (ctx->pc != 0x30760Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVol__FUiiii_0x18e9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30760Cu; }
        if (ctx->pc != 0x30760Cu) { return; }
    }
    ctx->pc = 0x30760Cu;
label_30760c:
    // 0x30760c: 0x8f83a13c  lw          $v1, -0x5EC4($gp)
    ctx->pc = 0x30760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943036)));
label_307610:
    // 0x307610: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x307610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_307614:
    // 0x307614: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x307614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_307618:
    // 0x307618: 0x2442da00  addiu       $v0, $v0, -0x2600
    ctx->pc = 0x307618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957568));
label_30761c:
    // 0x30761c: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x30761cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_307620:
    // 0x307620: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x307620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_307624:
    // 0x307624: 0xc04c504  jal         func_131410
label_307628:
    if (ctx->pc == 0x307628u) {
        ctx->pc = 0x307628u;
            // 0x307628: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x30762Cu;
        goto label_30762c;
    }
    ctx->pc = 0x307624u;
    SET_GPR_U32(ctx, 31, 0x30762Cu);
    ctx->pc = 0x307628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307624u;
            // 0x307628: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30762Cu; }
        if (ctx->pc != 0x30762Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30762Cu; }
        if (ctx->pc != 0x30762Cu) { return; }
    }
    ctx->pc = 0x30762Cu;
label_30762c:
    // 0x30762c: 0x8f83a13c  lw          $v1, -0x5EC4($gp)
    ctx->pc = 0x30762cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943036)));
label_307630:
    // 0x307630: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x307630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_307634:
    // 0x307634: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x307634u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_307638:
    // 0x307638: 0x2442da00  addiu       $v0, $v0, -0x2600
    ctx->pc = 0x307638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957568));
label_30763c:
    // 0x30763c: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x30763cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_307640:
    // 0x307640: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x307640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_307644:
    // 0x307644: 0xc04c50c  jal         func_131430
label_307648:
    if (ctx->pc == 0x307648u) {
        ctx->pc = 0x307648u;
            // 0x307648: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x30764Cu;
        goto label_30764c;
    }
    ctx->pc = 0x307644u;
    SET_GPR_U32(ctx, 31, 0x30764Cu);
    ctx->pc = 0x307648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307644u;
            // 0x307648: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131430u;
    if (runtime->hasFunction(0x131430u)) {
        auto targetFn = runtime->lookupFunction(0x131430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30764Cu; }
        if (ctx->pc != 0x30764Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextPos__9mgCCameraFPf_0x131430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30764Cu; }
        if (ctx->pc != 0x30764Cu) { return; }
    }
    ctx->pc = 0x30764Cu;
label_30764c:
    // 0x30764c: 0x8f83a13c  lw          $v1, -0x5EC4($gp)
    ctx->pc = 0x30764cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943036)));
label_307650:
    // 0x307650: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x307650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_307654:
    // 0x307654: 0x2442da00  addiu       $v0, $v0, -0x2600
    ctx->pc = 0x307654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957568));
label_307658:
    // 0x307658: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x307658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_30765c:
    // 0x30765c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30765cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_307660:
    // 0x307660: 0xc04c018  jal         func_130060
label_307664:
    if (ctx->pc == 0x307664u) {
        ctx->pc = 0x307664u;
            // 0x307664: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x307668u;
        goto label_307668;
    }
    ctx->pc = 0x307660u;
    SET_GPR_U32(ctx, 31, 0x307668u);
    ctx->pc = 0x307664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307660u;
            // 0x307664: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307668u; }
        if (ctx->pc != 0x307668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307668u; }
        if (ctx->pc != 0x307668u) { return; }
    }
    ctx->pc = 0x307668u;
label_307668:
    // 0x307668: 0x8f82a160  lw          $v0, -0x5EA0($gp)
    ctx->pc = 0x307668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943072)));
label_30766c:
    // 0x30766c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x30766cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_307670:
    // 0x307670: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x307670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_307674:
    // 0x307674: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x307674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_307678:
    // 0x307678: 0xc04c518  jal         func_131460
label_30767c:
    if (ctx->pc == 0x30767Cu) {
        ctx->pc = 0x30767Cu;
            // 0x30767c: 0xae022e54  sw          $v0, 0x2E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 2));
        ctx->pc = 0x307680u;
        goto label_307680;
    }
    ctx->pc = 0x307678u;
    SET_GPR_U32(ctx, 31, 0x307680u);
    ctx->pc = 0x30767Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307678u;
            // 0x30767c: 0xae022e54  sw          $v0, 0x2E54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 11860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307680u; }
        if (ctx->pc != 0x307680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307680u; }
        if (ctx->pc != 0x307680u) { return; }
    }
    ctx->pc = 0x307680u;
label_307680:
    // 0x307680: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x307680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_307684:
    // 0x307684: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x307684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_307688:
    // 0x307688: 0xc04c520  jal         func_131480
label_30768c:
    if (ctx->pc == 0x30768Cu) {
        ctx->pc = 0x30768Cu;
            // 0x30768c: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->pc = 0x307690u;
        goto label_307690;
    }
    ctx->pc = 0x307688u;
    SET_GPR_U32(ctx, 31, 0x307690u);
    ctx->pc = 0x30768Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x307688u;
            // 0x30768c: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131480u;
    if (runtime->hasFunction(0x131480u)) {
        auto targetFn = runtime->lookupFunction(0x131480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307690u; }
        if (ctx->pc != 0x307690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFPf_0x131480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307690u; }
        if (ctx->pc != 0x307690u) { return; }
    }
    ctx->pc = 0x307690u;
label_307690:
    // 0x307690: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x307690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_307694:
    // 0x307694: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x307694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_307698:
    // 0x307698: 0x2484a280  addiu       $a0, $a0, -0x5D80
    ctx->pc = 0x307698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
label_30769c:
    // 0x30769c: 0xc04c564  jal         func_131590
label_3076a0:
    if (ctx->pc == 0x3076A0u) {
        ctx->pc = 0x3076A0u;
            // 0x3076a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3076A4u;
        goto label_3076a4;
    }
    ctx->pc = 0x30769Cu;
    SET_GPR_U32(ctx, 31, 0x3076A4u);
    ctx->pc = 0x3076A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30769Cu;
            // 0x3076a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076A4u; }
        if (ctx->pc != 0x3076A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076A4u; }
        if (ctx->pc != 0x3076A4u) { return; }
    }
    ctx->pc = 0x3076A4u;
label_3076a4:
    // 0x3076a4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x3076a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_3076a8:
    // 0x3076a8: 0x10000014  b           . + 4 + (0x14 << 2)
label_3076ac:
    if (ctx->pc == 0x3076ACu) {
        ctx->pc = 0x3076ACu;
            // 0x3076ac: 0xaf83a140  sw          $v1, -0x5EC0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943040), GPR_U32(ctx, 3));
        ctx->pc = 0x3076B0u;
        goto label_3076b0;
    }
    ctx->pc = 0x3076A8u;
    {
        const bool branch_taken_0x3076a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3076ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3076A8u;
            // 0x3076ac: 0xaf83a140  sw          $v1, -0x5EC0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943040), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3076a8) {
            ctx->pc = 0x3076FCu;
            goto label_3076fc;
        }
    }
    ctx->pc = 0x3076B0u;
label_3076b0:
    // 0x3076b0: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x3076b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_3076b4:
    // 0x3076b4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3076b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3076b8:
    // 0x3076b8: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x3076b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
label_3076bc:
    // 0x3076bc: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3076bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3076c0:
    // 0x3076c0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x3076c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3076c4:
    // 0x3076c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3076c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3076c8:
    // 0x3076c8: 0xc04c564  jal         func_131590
label_3076cc:
    if (ctx->pc == 0x3076CCu) {
        ctx->pc = 0x3076CCu;
            // 0x3076cc: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->pc = 0x3076D0u;
        goto label_3076d0;
    }
    ctx->pc = 0x3076C8u;
    SET_GPR_U32(ctx, 31, 0x3076D0u);
    ctx->pc = 0x3076CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3076C8u;
            // 0x3076cc: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076D0u; }
        if (ctx->pc != 0x3076D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076D0u; }
        if (ctx->pc != 0x3076D0u) { return; }
    }
    ctx->pc = 0x3076D0u;
label_3076d0:
    // 0x3076d0: 0x8f83a13c  lw          $v1, -0x5EC4($gp)
    ctx->pc = 0x3076d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943036)));
label_3076d4:
    // 0x3076d4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x3076d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_3076d8:
    // 0x3076d8: 0x2442da00  addiu       $v0, $v0, -0x2600
    ctx->pc = 0x3076d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957568));
label_3076dc:
    // 0x3076dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3076dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3076e0:
    // 0x3076e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3076e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3076e4:
    // 0x3076e4: 0xc04c018  jal         func_130060
label_3076e8:
    if (ctx->pc == 0x3076E8u) {
        ctx->pc = 0x3076E8u;
            // 0x3076e8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3076ECu;
        goto label_3076ec;
    }
    ctx->pc = 0x3076E4u;
    SET_GPR_U32(ctx, 31, 0x3076ECu);
    ctx->pc = 0x3076E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3076E4u;
            // 0x3076e8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076ECu; }
        if (ctx->pc != 0x3076ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076ECu; }
        if (ctx->pc != 0x3076ECu) { return; }
    }
    ctx->pc = 0x3076ECu;
label_3076ec:
    // 0x3076ec: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x3076ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_3076f0:
    // 0x3076f0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3076f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3076f4:
    // 0x3076f4: 0xc04c520  jal         func_131480
label_3076f8:
    if (ctx->pc == 0x3076F8u) {
        ctx->pc = 0x3076F8u;
            // 0x3076f8: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->pc = 0x3076FCu;
        goto label_3076fc;
    }
    ctx->pc = 0x3076F4u;
    SET_GPR_U32(ctx, 31, 0x3076FCu);
    ctx->pc = 0x3076F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3076F4u;
            // 0x3076f8: 0x2484a280  addiu       $a0, $a0, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131480u;
    if (runtime->hasFunction(0x131480u)) {
        auto targetFn = runtime->lookupFunction(0x131480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076FCu; }
        if (ctx->pc != 0x3076FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextRef__9mgCCameraFPf_0x131480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3076FCu; }
        if (ctx->pc != 0x3076FCu) { return; }
    }
    ctx->pc = 0x3076FCu;
label_3076fc:
    // 0x3076fc: 0x8f83a13c  lw          $v1, -0x5EC4($gp)
    ctx->pc = 0x3076fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943036)));
label_307700:
    // 0x307700: 0xaf8385f0  sw          $v1, -0x7A10($gp)
    ctx->pc = 0x307700u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936048), GPR_U32(ctx, 3));
label_307704:
    // 0x307704: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x307704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_307708:
    // 0x307708: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x307708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30770c:
    // 0x30770c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30770cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_307710:
    // 0x307710: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x307710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_307714:
    // 0x307714: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x307714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_307718:
    // 0x307718: 0x3e00008  jr          $ra
label_30771c:
    if (ctx->pc == 0x30771Cu) {
        ctx->pc = 0x30771Cu;
            // 0x30771c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x307720u;
        goto label_fallthrough_0x307718;
    }
    ctx->pc = 0x307718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30771Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x307718u;
            // 0x30771c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x307718:
    ctx->pc = 0x307720u;
}
