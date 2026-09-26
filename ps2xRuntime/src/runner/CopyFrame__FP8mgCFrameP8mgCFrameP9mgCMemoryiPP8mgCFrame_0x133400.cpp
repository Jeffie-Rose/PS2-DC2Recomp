#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CopyFrame__FP8mgCFrameP8mgCFrameP9mgCMemoryiPP8mgCFrame
// Address: 0x133400 - 0x13373c
void CopyFrame__FP8mgCFrameP8mgCFrameP9mgCMemoryiPP8mgCFrame_0x133400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CopyFrame__FP8mgCFrameP8mgCFrameP9mgCMemoryiPP8mgCFrame_0x133400");
#endif

    switch (ctx->pc) {
        case 0x133400u: goto label_133400;
        case 0x133404u: goto label_133404;
        case 0x133408u: goto label_133408;
        case 0x13340cu: goto label_13340c;
        case 0x133410u: goto label_133410;
        case 0x133414u: goto label_133414;
        case 0x133418u: goto label_133418;
        case 0x13341cu: goto label_13341c;
        case 0x133420u: goto label_133420;
        case 0x133424u: goto label_133424;
        case 0x133428u: goto label_133428;
        case 0x13342cu: goto label_13342c;
        case 0x133430u: goto label_133430;
        case 0x133434u: goto label_133434;
        case 0x133438u: goto label_133438;
        case 0x13343cu: goto label_13343c;
        case 0x133440u: goto label_133440;
        case 0x133444u: goto label_133444;
        case 0x133448u: goto label_133448;
        case 0x13344cu: goto label_13344c;
        case 0x133450u: goto label_133450;
        case 0x133454u: goto label_133454;
        case 0x133458u: goto label_133458;
        case 0x13345cu: goto label_13345c;
        case 0x133460u: goto label_133460;
        case 0x133464u: goto label_133464;
        case 0x133468u: goto label_133468;
        case 0x13346cu: goto label_13346c;
        case 0x133470u: goto label_133470;
        case 0x133474u: goto label_133474;
        case 0x133478u: goto label_133478;
        case 0x13347cu: goto label_13347c;
        case 0x133480u: goto label_133480;
        case 0x133484u: goto label_133484;
        case 0x133488u: goto label_133488;
        case 0x13348cu: goto label_13348c;
        case 0x133490u: goto label_133490;
        case 0x133494u: goto label_133494;
        case 0x133498u: goto label_133498;
        case 0x13349cu: goto label_13349c;
        case 0x1334a0u: goto label_1334a0;
        case 0x1334a4u: goto label_1334a4;
        case 0x1334a8u: goto label_1334a8;
        case 0x1334acu: goto label_1334ac;
        case 0x1334b0u: goto label_1334b0;
        case 0x1334b4u: goto label_1334b4;
        case 0x1334b8u: goto label_1334b8;
        case 0x1334bcu: goto label_1334bc;
        case 0x1334c0u: goto label_1334c0;
        case 0x1334c4u: goto label_1334c4;
        case 0x1334c8u: goto label_1334c8;
        case 0x1334ccu: goto label_1334cc;
        case 0x1334d0u: goto label_1334d0;
        case 0x1334d4u: goto label_1334d4;
        case 0x1334d8u: goto label_1334d8;
        case 0x1334dcu: goto label_1334dc;
        case 0x1334e0u: goto label_1334e0;
        case 0x1334e4u: goto label_1334e4;
        case 0x1334e8u: goto label_1334e8;
        case 0x1334ecu: goto label_1334ec;
        case 0x1334f0u: goto label_1334f0;
        case 0x1334f4u: goto label_1334f4;
        case 0x1334f8u: goto label_1334f8;
        case 0x1334fcu: goto label_1334fc;
        case 0x133500u: goto label_133500;
        case 0x133504u: goto label_133504;
        case 0x133508u: goto label_133508;
        case 0x13350cu: goto label_13350c;
        case 0x133510u: goto label_133510;
        case 0x133514u: goto label_133514;
        case 0x133518u: goto label_133518;
        case 0x13351cu: goto label_13351c;
        case 0x133520u: goto label_133520;
        case 0x133524u: goto label_133524;
        case 0x133528u: goto label_133528;
        case 0x13352cu: goto label_13352c;
        case 0x133530u: goto label_133530;
        case 0x133534u: goto label_133534;
        case 0x133538u: goto label_133538;
        case 0x13353cu: goto label_13353c;
        case 0x133540u: goto label_133540;
        case 0x133544u: goto label_133544;
        case 0x133548u: goto label_133548;
        case 0x13354cu: goto label_13354c;
        case 0x133550u: goto label_133550;
        case 0x133554u: goto label_133554;
        case 0x133558u: goto label_133558;
        case 0x13355cu: goto label_13355c;
        case 0x133560u: goto label_133560;
        case 0x133564u: goto label_133564;
        case 0x133568u: goto label_133568;
        case 0x13356cu: goto label_13356c;
        case 0x133570u: goto label_133570;
        case 0x133574u: goto label_133574;
        case 0x133578u: goto label_133578;
        case 0x13357cu: goto label_13357c;
        case 0x133580u: goto label_133580;
        case 0x133584u: goto label_133584;
        case 0x133588u: goto label_133588;
        case 0x13358cu: goto label_13358c;
        case 0x133590u: goto label_133590;
        case 0x133594u: goto label_133594;
        case 0x133598u: goto label_133598;
        case 0x13359cu: goto label_13359c;
        case 0x1335a0u: goto label_1335a0;
        case 0x1335a4u: goto label_1335a4;
        case 0x1335a8u: goto label_1335a8;
        case 0x1335acu: goto label_1335ac;
        case 0x1335b0u: goto label_1335b0;
        case 0x1335b4u: goto label_1335b4;
        case 0x1335b8u: goto label_1335b8;
        case 0x1335bcu: goto label_1335bc;
        case 0x1335c0u: goto label_1335c0;
        case 0x1335c4u: goto label_1335c4;
        case 0x1335c8u: goto label_1335c8;
        case 0x1335ccu: goto label_1335cc;
        case 0x1335d0u: goto label_1335d0;
        case 0x1335d4u: goto label_1335d4;
        case 0x1335d8u: goto label_1335d8;
        case 0x1335dcu: goto label_1335dc;
        case 0x1335e0u: goto label_1335e0;
        case 0x1335e4u: goto label_1335e4;
        case 0x1335e8u: goto label_1335e8;
        case 0x1335ecu: goto label_1335ec;
        case 0x1335f0u: goto label_1335f0;
        case 0x1335f4u: goto label_1335f4;
        case 0x1335f8u: goto label_1335f8;
        case 0x1335fcu: goto label_1335fc;
        case 0x133600u: goto label_133600;
        case 0x133604u: goto label_133604;
        case 0x133608u: goto label_133608;
        case 0x13360cu: goto label_13360c;
        case 0x133610u: goto label_133610;
        case 0x133614u: goto label_133614;
        case 0x133618u: goto label_133618;
        case 0x13361cu: goto label_13361c;
        case 0x133620u: goto label_133620;
        case 0x133624u: goto label_133624;
        case 0x133628u: goto label_133628;
        case 0x13362cu: goto label_13362c;
        case 0x133630u: goto label_133630;
        case 0x133634u: goto label_133634;
        case 0x133638u: goto label_133638;
        case 0x13363cu: goto label_13363c;
        case 0x133640u: goto label_133640;
        case 0x133644u: goto label_133644;
        case 0x133648u: goto label_133648;
        case 0x13364cu: goto label_13364c;
        case 0x133650u: goto label_133650;
        case 0x133654u: goto label_133654;
        case 0x133658u: goto label_133658;
        case 0x13365cu: goto label_13365c;
        case 0x133660u: goto label_133660;
        case 0x133664u: goto label_133664;
        case 0x133668u: goto label_133668;
        case 0x13366cu: goto label_13366c;
        case 0x133670u: goto label_133670;
        case 0x133674u: goto label_133674;
        case 0x133678u: goto label_133678;
        case 0x13367cu: goto label_13367c;
        case 0x133680u: goto label_133680;
        case 0x133684u: goto label_133684;
        case 0x133688u: goto label_133688;
        case 0x13368cu: goto label_13368c;
        case 0x133690u: goto label_133690;
        case 0x133694u: goto label_133694;
        case 0x133698u: goto label_133698;
        case 0x13369cu: goto label_13369c;
        case 0x1336a0u: goto label_1336a0;
        case 0x1336a4u: goto label_1336a4;
        case 0x1336a8u: goto label_1336a8;
        case 0x1336acu: goto label_1336ac;
        case 0x1336b0u: goto label_1336b0;
        case 0x1336b4u: goto label_1336b4;
        case 0x1336b8u: goto label_1336b8;
        case 0x1336bcu: goto label_1336bc;
        case 0x1336c0u: goto label_1336c0;
        case 0x1336c4u: goto label_1336c4;
        case 0x1336c8u: goto label_1336c8;
        case 0x1336ccu: goto label_1336cc;
        case 0x1336d0u: goto label_1336d0;
        case 0x1336d4u: goto label_1336d4;
        case 0x1336d8u: goto label_1336d8;
        case 0x1336dcu: goto label_1336dc;
        case 0x1336e0u: goto label_1336e0;
        case 0x1336e4u: goto label_1336e4;
        case 0x1336e8u: goto label_1336e8;
        case 0x1336ecu: goto label_1336ec;
        case 0x1336f0u: goto label_1336f0;
        case 0x1336f4u: goto label_1336f4;
        case 0x1336f8u: goto label_1336f8;
        case 0x1336fcu: goto label_1336fc;
        case 0x133700u: goto label_133700;
        case 0x133704u: goto label_133704;
        case 0x133708u: goto label_133708;
        case 0x13370cu: goto label_13370c;
        case 0x133710u: goto label_133710;
        case 0x133714u: goto label_133714;
        case 0x133718u: goto label_133718;
        case 0x13371cu: goto label_13371c;
        case 0x133720u: goto label_133720;
        case 0x133724u: goto label_133724;
        case 0x133728u: goto label_133728;
        case 0x13372cu: goto label_13372c;
        case 0x133730u: goto label_133730;
        case 0x133734u: goto label_133734;
        case 0x133738u: goto label_133738;
        default: break;
    }

    ctx->pc = 0x133400u;

label_133400:
    // 0x133400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x133400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_133404:
    // 0x133404: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x133404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_133408:
    // 0x133408: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x133408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13340c:
    // 0x13340c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13340cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_133410:
    // 0x133410: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_133414:
    // 0x133414: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_133418:
    // 0x133418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13341c:
    // 0x13341c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13341cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133420:
    // 0x133420: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x133420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_133424:
    // 0x133424: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x133424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_133428:
    // 0x133428: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x133428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_13342c:
    // 0x13342c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x13342cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_133430:
    // 0x133430: 0xc04e1b0  jal         func_1386C0
label_133434:
    if (ctx->pc == 0x133434u) {
        ctx->pc = 0x133438u;
        goto label_133438;
    }
    ctx->pc = 0x133430u;
    SET_GPR_U32(ctx, 31, 0x133438u);
    ctx->pc = 0x1386C0u;
    if (runtime->hasFunction(0x1386C0u)) {
        auto targetFn = runtime->lookupFunction(0x1386C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133438u; }
        if (ctx->pc != 0x133438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__8mgCFrameFR8mgCFrame_0x1386c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133438u; }
        if (ctx->pc != 0x133438u) { return; }
    }
    ctx->pc = 0x133438u;
label_133438:
    // 0x133438: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_13343c:
    if (ctx->pc == 0x13343Cu) {
        ctx->pc = 0x133440u;
        goto label_133440;
    }
    ctx->pc = 0x133438u;
    {
        const bool branch_taken_0x133438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x133438) {
            ctx->pc = 0x1334A8u;
            goto label_1334a8;
        }
    }
    ctx->pc = 0x133440u;
label_133440:
    // 0x133440: 0x8e4400f8  lw          $a0, 0xF8($s2)
    ctx->pc = 0x133440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
label_133444:
    // 0x133444: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_133448:
    if (ctx->pc == 0x133448u) {
        ctx->pc = 0x13344Cu;
        goto label_13344c;
    }
    ctx->pc = 0x133444u;
    {
        const bool branch_taken_0x133444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x133444) {
            ctx->pc = 0x1334A8u;
            goto label_1334a8;
        }
    }
    ctx->pc = 0x13344Cu;
label_13344c:
    // 0x13344c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13344cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133450:
    // 0x133450: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x133450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_133454:
    // 0x133454: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x133454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_133458:
    // 0x133458: 0x320f809  jalr        $t9
label_13345c:
    if (ctx->pc == 0x13345Cu) {
        ctx->pc = 0x133460u;
        goto label_133460;
    }
    ctx->pc = 0x133458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x133460u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x133460u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133460u; }
            if (ctx->pc != 0x133460u) { return; }
        }
        }
    }
    ctx->pc = 0x133460u;
label_133460:
    // 0x133460: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x133460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133464:
    // 0x133464: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x133464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_133468:
    // 0x133468: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13346c:
    // 0x13346c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x13346cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_133470:
    // 0x133470: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x133470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_133474:
    // 0x133474: 0x320f809  jalr        $t9
label_133478:
    if (ctx->pc == 0x133478u) {
        ctx->pc = 0x13347Cu;
        goto label_13347c;
    }
    ctx->pc = 0x133474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13347Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x13347Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13347Cu; }
            if (ctx->pc != 0x13347Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13347Cu;
label_13347c:
    // 0x13347c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_133480:
    if (ctx->pc == 0x133480u) {
        ctx->pc = 0x133484u;
        goto label_133484;
    }
    ctx->pc = 0x13347Cu;
    {
        const bool branch_taken_0x13347c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13347c) {
            ctx->pc = 0x1334A8u;
            goto label_1334a8;
        }
    }
    ctx->pc = 0x133484u;
label_133484:
    // 0x133484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133488:
    // 0x133488: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x133488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13348c:
    // 0x13348c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x13348cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_133490:
    // 0x133490: 0x320f809  jalr        $t9
label_133494:
    if (ctx->pc == 0x133494u) {
        ctx->pc = 0x133498u;
        goto label_133498;
    }
    ctx->pc = 0x133490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x133498u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x133498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133498u; }
            if (ctx->pc != 0x133498u) { return; }
        }
        }
    }
    ctx->pc = 0x133498u;
label_133498:
    // 0x133498: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x133498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13349c:
    // 0x13349c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1334a0:
    if (ctx->pc == 0x1334A0u) {
        ctx->pc = 0x1334A4u;
        goto label_1334a4;
    }
    ctx->pc = 0x13349Cu;
    {
        const bool branch_taken_0x13349c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13349c) {
            ctx->pc = 0x1334A8u;
            goto label_1334a8;
        }
    }
    ctx->pc = 0x1334A4u;
label_1334a4:
    // 0x1334a4: 0xae140050  sw          $s4, 0x50($s0)
    ctx->pc = 0x1334a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 20));
label_1334a8:
    // 0x1334a8: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x1334a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_1334ac:
    // 0x1334ac: 0xc04a422  jal         func_129088
label_1334b0:
    if (ctx->pc == 0x1334B0u) {
        ctx->pc = 0x1334B4u;
        goto label_1334b4;
    }
    ctx->pc = 0x1334ACu;
    SET_GPR_U32(ctx, 31, 0x1334B4u);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1334B4u; }
        if (ctx->pc != 0x1334B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1334B4u; }
        if (ctx->pc != 0x1334B4u) { return; }
    }
    ctx->pc = 0x1334B4u;
label_1334b4:
    // 0x1334b4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1334b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1334b8:
    // 0x1334b8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1334b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1334bc:
    // 0x1334bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1334c0:
    if (ctx->pc == 0x1334C0u) {
        ctx->pc = 0x1334C4u;
        goto label_1334c4;
    }
    ctx->pc = 0x1334BCu;
    {
        const bool branch_taken_0x1334bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1334bc) {
            ctx->pc = 0x1334D4u;
            goto label_1334d4;
        }
    }
    ctx->pc = 0x1334C4u;
label_1334c4:
    // 0x1334c4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1334c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1334c8:
    // 0x1334c8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1334c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1334cc:
    // 0x1334cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1334d0:
    if (ctx->pc == 0x1334D0u) {
        ctx->pc = 0x1334D4u;
        goto label_1334d4;
    }
    ctx->pc = 0x1334CCu;
    {
        const bool branch_taken_0x1334cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1334cc) {
            ctx->pc = 0x1334D8u;
            goto label_1334d8;
        }
    }
    ctx->pc = 0x1334D4u;
label_1334d4:
    // 0x1334d4: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x1334d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1334d8:
    // 0x1334d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1334d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1334dc:
    // 0x1334dc: 0xc04e748  jal         func_139D20
label_1334e0:
    if (ctx->pc == 0x1334E0u) {
        ctx->pc = 0x1334E4u;
        goto label_1334e4;
    }
    ctx->pc = 0x1334DCu;
    SET_GPR_U32(ctx, 31, 0x1334E4u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1334E4u; }
        if (ctx->pc != 0x1334E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1334E4u; }
        if (ctx->pc != 0x1334E4u) { return; }
    }
    ctx->pc = 0x1334E4u;
label_1334e4:
    // 0x1334e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1334e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1334e8:
    // 0x1334e8: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x1334e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_1334ec:
    // 0x1334ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1334ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1334f0:
    // 0x1334f0: 0xc04a3dc  jal         func_128F70
label_1334f4:
    if (ctx->pc == 0x1334F4u) {
        ctx->pc = 0x1334F8u;
        goto label_1334f8;
    }
    ctx->pc = 0x1334F0u;
    SET_GPR_U32(ctx, 31, 0x1334F8u);
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1334F8u; }
        if (ctx->pc != 0x1334F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1334F8u; }
        if (ctx->pc != 0x1334F8u) { return; }
    }
    ctx->pc = 0x1334F8u;
label_1334f8:
    // 0x1334f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1334f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1334fc:
    // 0x1334fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1334fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_133500:
    // 0x133500: 0xc04d964  jal         func_136590
label_133504:
    if (ctx->pc == 0x133504u) {
        ctx->pc = 0x133508u;
        goto label_133508;
    }
    ctx->pc = 0x133500u;
    SET_GPR_U32(ctx, 31, 0x133508u);
    ctx->pc = 0x136590u;
    if (runtime->hasFunction(0x136590u)) {
        auto targetFn = runtime->lookupFunction(0x136590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133508u; }
        if (ctx->pc != 0x133508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetName__8mgCFrameFPc_0x136590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133508u; }
        if (ctx->pc != 0x133508u) { return; }
    }
    ctx->pc = 0x133508u;
label_133508:
    // 0x133508: 0x8e5000f4  lw          $s0, 0xF4($s2)
    ctx->pc = 0x133508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
label_13350c:
    // 0x13350c: 0x12000052  beqz        $s0, . + 4 + (0x52 << 2)
label_133510:
    if (ctx->pc == 0x133510u) {
        ctx->pc = 0x133514u;
        goto label_133514;
    }
    ctx->pc = 0x13350Cu;
    {
        const bool branch_taken_0x13350c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13350c) {
            ctx->pc = 0x133658u;
            goto label_133658;
        }
    }
    ctx->pc = 0x133514u;
label_133514:
    // 0x133514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133518:
    // 0x133518: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x133518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_13351c:
    // 0x13351c: 0xc04e748  jal         func_139D20
label_133520:
    if (ctx->pc == 0x133520u) {
        ctx->pc = 0x133524u;
        goto label_133524;
    }
    ctx->pc = 0x13351Cu;
    SET_GPR_U32(ctx, 31, 0x133524u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133524u; }
        if (ctx->pc != 0x133524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133524u; }
        if (ctx->pc != 0x133524u) { return; }
    }
    ctx->pc = 0x133524u;
label_133524:
    // 0x133524: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x133524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_133528:
    // 0x133528: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13352c:
    // 0x13352c: 0xc04e638  jal         func_1398E0
label_133530:
    if (ctx->pc == 0x133530u) {
        ctx->pc = 0x133534u;
        goto label_133534;
    }
    ctx->pc = 0x13352Cu;
    SET_GPR_U32(ctx, 31, 0x133534u);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133534u; }
        if (ctx->pc != 0x133534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133534u; }
        if (ctx->pc != 0x133534u) { return; }
    }
    ctx->pc = 0x133534u;
label_133534:
    // 0x133534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133538:
    // 0x133538: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_13353c:
    if (ctx->pc == 0x13353Cu) {
        ctx->pc = 0x133540u;
        goto label_133540;
    }
    ctx->pc = 0x133538u;
    {
        const bool branch_taken_0x133538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133538) {
            ctx->pc = 0x13354Cu;
            goto label_13354c;
        }
    }
    ctx->pc = 0x133540u;
label_133540:
    // 0x133540: 0xc04d6d8  jal         func_135B60
label_133544:
    if (ctx->pc == 0x133544u) {
        ctx->pc = 0x133548u;
        goto label_133548;
    }
    ctx->pc = 0x133540u;
    SET_GPR_U32(ctx, 31, 0x133548u);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133548u; }
        if (ctx->pc != 0x133548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133548u; }
        if (ctx->pc != 0x133548u) { return; }
    }
    ctx->pc = 0x133548u;
label_133548:
    // 0x133548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13354c:
    // 0x13354c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x13354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_133550:
    // 0x133550: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x133550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_133554:
    // 0x133554: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x133554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_133558:
    // 0x133558: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x133558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_13355c:
    // 0x13355c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x13355cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_133560:
    // 0x133560: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x133560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_133564:
    // 0x133564: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x133564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_133568:
    // 0x133568: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x133568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_13356c:
    // 0x13356c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13356cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_133570:
    // 0x133570: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x133570u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_133574:
    // 0x133574: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x133574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_133578:
    // 0x133578: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x133578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_13357c:
    // 0x13357c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x13357cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_133580:
    // 0x133580: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x133580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_133584:
    // 0x133584: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x133584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_133588:
    // 0x133588: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x133588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_13358c:
    // 0x13358c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x13358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_133590:
    // 0x133590: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x133590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_133594:
    // 0x133594: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x133594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_133598:
    // 0x133598: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x133598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_13359c:
    // 0x13359c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x13359cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1335a0:
    // 0x1335a0: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x1335a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_1335a4:
    // 0x1335a4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1335a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1335a8:
    // 0x1335a8: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x1335a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_1335ac:
    // 0x1335ac: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1335acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1335b0:
    // 0x1335b0: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x1335b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
label_1335b4:
    // 0x1335b4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1335b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1335b8:
    // 0x1335b8: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x1335b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
label_1335bc:
    // 0x1335bc: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x1335bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1335c0:
    // 0x1335c0: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x1335c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_1335c4:
    // 0x1335c4: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1335c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1335c8:
    // 0x1335c8: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x1335c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
label_1335cc:
    // 0x1335cc: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1335ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1335d0:
    // 0x1335d0: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x1335d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_1335d4:
    // 0x1335d4: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x1335d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1335d8:
    // 0x1335d8: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x1335d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
label_1335dc:
    // 0x1335dc: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1335dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1335e0:
    // 0x1335e0: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x1335e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
label_1335e4:
    // 0x1335e4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1335e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1335e8:
    // 0x1335e8: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x1335e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
label_1335ec:
    // 0x1335ec: 0xc6030050  lwc1        $f3, 0x50($s0)
    ctx->pc = 0x1335ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1335f0:
    // 0x1335f0: 0xc6020054  lwc1        $f2, 0x54($s0)
    ctx->pc = 0x1335f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1335f4:
    // 0x1335f4: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x1335f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1335f8:
    // 0x1335f8: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x1335f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1335fc:
    // 0x1335fc: 0xe4830050  swc1        $f3, 0x50($a0)
    ctx->pc = 0x1335fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
label_133600:
    // 0x133600: 0xe4820054  swc1        $f2, 0x54($a0)
    ctx->pc = 0x133600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
label_133604:
    // 0x133604: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x133604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
label_133608:
    // 0x133608: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x133608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
label_13360c:
    // 0x13360c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x13360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_133610:
    // 0x133610: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x133610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
label_133614:
    // 0x133614: 0xc6030070  lwc1        $f3, 0x70($s0)
    ctx->pc = 0x133614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_133618:
    // 0x133618: 0xc6020074  lwc1        $f2, 0x74($s0)
    ctx->pc = 0x133618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13361c:
    // 0x13361c: 0xc6010078  lwc1        $f1, 0x78($s0)
    ctx->pc = 0x13361cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_133620:
    // 0x133620: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x133620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_133624:
    // 0x133624: 0xe4830070  swc1        $f3, 0x70($a0)
    ctx->pc = 0x133624u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_133628:
    // 0x133628: 0xe4820074  swc1        $f2, 0x74($a0)
    ctx->pc = 0x133628u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_13362c:
    // 0x13362c: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x13362cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_133630:
    // 0x133630: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x133630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
label_133634:
    // 0x133634: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x133634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_133638:
    // 0x133638: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x133638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
label_13363c:
    // 0x13363c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x13363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_133640:
    // 0x133640: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x133640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_133644:
    // 0x133644: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x133644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_133648:
    // 0x133648: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x133648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
label_13364c:
    // 0x13364c: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x13364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_133650:
    // 0x133650: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x133650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
label_133654:
    // 0x133654: 0xae6400f4  sw          $a0, 0xF4($s3)
    ctx->pc = 0x133654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 244), GPR_U32(ctx, 4));
label_133658:
    // 0x133658: 0x8e5000f0  lw          $s0, 0xF0($s2)
    ctx->pc = 0x133658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_13365c:
    // 0x13365c: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_133660:
    if (ctx->pc == 0x133660u) {
        ctx->pc = 0x133664u;
        goto label_133664;
    }
    ctx->pc = 0x13365Cu;
    {
        const bool branch_taken_0x13365c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13365c) {
            ctx->pc = 0x133718u;
            goto label_133718;
        }
    }
    ctx->pc = 0x133664u;
label_133664:
    // 0x133664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_133668:
    // 0x133668: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x133668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_13366c:
    // 0x13366c: 0xc04e748  jal         func_139D20
label_133670:
    if (ctx->pc == 0x133670u) {
        ctx->pc = 0x133674u;
        goto label_133674;
    }
    ctx->pc = 0x13366Cu;
    SET_GPR_U32(ctx, 31, 0x133674u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133674u; }
        if (ctx->pc != 0x133674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133674u; }
        if (ctx->pc != 0x133674u) { return; }
    }
    ctx->pc = 0x133674u;
label_133674:
    // 0x133674: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x133674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_133678:
    // 0x133678: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13367c:
    // 0x13367c: 0xc04e638  jal         func_1398E0
label_133680:
    if (ctx->pc == 0x133680u) {
        ctx->pc = 0x133684u;
        goto label_133684;
    }
    ctx->pc = 0x13367Cu;
    SET_GPR_U32(ctx, 31, 0x133684u);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133684u; }
        if (ctx->pc != 0x133684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133684u; }
        if (ctx->pc != 0x133684u) { return; }
    }
    ctx->pc = 0x133684u;
label_133684:
    // 0x133684: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x133684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_133688:
    // 0x133688: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x133688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13368c:
    // 0x13368c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13368cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_133690:
    // 0x133690: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x133690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_133694:
    // 0x133694: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x133694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_133698:
    // 0x133698: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x133698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_13369c:
    // 0x13369c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x13369cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1336a0:
    // 0x1336a0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1336a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_1336a4:
    // 0x1336a4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1336a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_1336a8:
    // 0x1336a8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1336a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1336ac:
    // 0x1336ac: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
label_1336b0:
    if (ctx->pc == 0x1336B0u) {
        ctx->pc = 0x1336B4u;
        goto label_1336b4;
    }
    ctx->pc = 0x1336ACu;
    {
        const bool branch_taken_0x1336ac = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1336ac) {
            ctx->pc = 0x133690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_133690;
        }
    }
    ctx->pc = 0x1336B4u;
label_1336b4:
    // 0x1336b4: 0xc6030080  lwc1        $f3, 0x80($s0)
    ctx->pc = 0x1336b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1336b8:
    // 0x1336b8: 0xc6020084  lwc1        $f2, 0x84($s0)
    ctx->pc = 0x1336b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1336bc:
    // 0x1336bc: 0xc6010088  lwc1        $f1, 0x88($s0)
    ctx->pc = 0x1336bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1336c0:
    // 0x1336c0: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x1336c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1336c4:
    // 0x1336c4: 0xe4430080  swc1        $f3, 0x80($v0)
    ctx->pc = 0x1336c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_1336c8:
    // 0x1336c8: 0xe4420084  swc1        $f2, 0x84($v0)
    ctx->pc = 0x1336c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_1336cc:
    // 0x1336cc: 0xe4410088  swc1        $f1, 0x88($v0)
    ctx->pc = 0x1336ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
label_1336d0:
    // 0x1336d0: 0xe440008c  swc1        $f0, 0x8C($v0)
    ctx->pc = 0x1336d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
label_1336d4:
    // 0x1336d4: 0xc6030090  lwc1        $f3, 0x90($s0)
    ctx->pc = 0x1336d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1336d8:
    // 0x1336d8: 0xc6020094  lwc1        $f2, 0x94($s0)
    ctx->pc = 0x1336d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1336dc:
    // 0x1336dc: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x1336dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1336e0:
    // 0x1336e0: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x1336e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1336e4:
    // 0x1336e4: 0xe4430090  swc1        $f3, 0x90($v0)
    ctx->pc = 0x1336e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
label_1336e8:
    // 0x1336e8: 0xe4420094  swc1        $f2, 0x94($v0)
    ctx->pc = 0x1336e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
label_1336ec:
    // 0x1336ec: 0xe4410098  swc1        $f1, 0x98($v0)
    ctx->pc = 0x1336ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
label_1336f0:
    // 0x1336f0: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x1336f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
label_1336f4:
    // 0x1336f4: 0xc60300a0  lwc1        $f3, 0xA0($s0)
    ctx->pc = 0x1336f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1336f8:
    // 0x1336f8: 0xc60200a4  lwc1        $f2, 0xA4($s0)
    ctx->pc = 0x1336f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1336fc:
    // 0x1336fc: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x1336fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_133700:
    // 0x133700: 0xc60000ac  lwc1        $f0, 0xAC($s0)
    ctx->pc = 0x133700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_133704:
    // 0x133704: 0xe44300a0  swc1        $f3, 0xA0($v0)
    ctx->pc = 0x133704u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
label_133708:
    // 0x133708: 0xe44200a4  swc1        $f2, 0xA4($v0)
    ctx->pc = 0x133708u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
label_13370c:
    // 0x13370c: 0xe44100a8  swc1        $f1, 0xA8($v0)
    ctx->pc = 0x13370cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_133710:
    // 0x133710: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x133710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_133714:
    // 0x133714: 0xae6200f0  sw          $v0, 0xF0($s3)
    ctx->pc = 0x133714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 2));
label_133718:
    // 0x133718: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x133718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_13371c:
    // 0x13371c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13371cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_133720:
    // 0x133720: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133720u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_133724:
    // 0x133724: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_133728:
    // 0x133728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13372c:
    // 0x13372c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13372cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_133730:
    // 0x133730: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x133730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_133734:
    // 0x133734: 0x3e00008  jr          $ra
label_133738:
    if (ctx->pc == 0x133738u) {
        ctx->pc = 0x13373Cu;
        goto label_fallthrough_0x133734;
    }
    ctx->pc = 0x133734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x133734:
    ctx->pc = 0x13373Cu;
}
