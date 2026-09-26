#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CombineFish__9CAquariumFii
// Address: 0x214460 - 0x2148bc
void CombineFish__9CAquariumFii_0x214460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CombineFish__9CAquariumFii_0x214460");
#endif

    switch (ctx->pc) {
        case 0x214460u: goto label_214460;
        case 0x214464u: goto label_214464;
        case 0x214468u: goto label_214468;
        case 0x21446cu: goto label_21446c;
        case 0x214470u: goto label_214470;
        case 0x214474u: goto label_214474;
        case 0x214478u: goto label_214478;
        case 0x21447cu: goto label_21447c;
        case 0x214480u: goto label_214480;
        case 0x214484u: goto label_214484;
        case 0x214488u: goto label_214488;
        case 0x21448cu: goto label_21448c;
        case 0x214490u: goto label_214490;
        case 0x214494u: goto label_214494;
        case 0x214498u: goto label_214498;
        case 0x21449cu: goto label_21449c;
        case 0x2144a0u: goto label_2144a0;
        case 0x2144a4u: goto label_2144a4;
        case 0x2144a8u: goto label_2144a8;
        case 0x2144acu: goto label_2144ac;
        case 0x2144b0u: goto label_2144b0;
        case 0x2144b4u: goto label_2144b4;
        case 0x2144b8u: goto label_2144b8;
        case 0x2144bcu: goto label_2144bc;
        case 0x2144c0u: goto label_2144c0;
        case 0x2144c4u: goto label_2144c4;
        case 0x2144c8u: goto label_2144c8;
        case 0x2144ccu: goto label_2144cc;
        case 0x2144d0u: goto label_2144d0;
        case 0x2144d4u: goto label_2144d4;
        case 0x2144d8u: goto label_2144d8;
        case 0x2144dcu: goto label_2144dc;
        case 0x2144e0u: goto label_2144e0;
        case 0x2144e4u: goto label_2144e4;
        case 0x2144e8u: goto label_2144e8;
        case 0x2144ecu: goto label_2144ec;
        case 0x2144f0u: goto label_2144f0;
        case 0x2144f4u: goto label_2144f4;
        case 0x2144f8u: goto label_2144f8;
        case 0x2144fcu: goto label_2144fc;
        case 0x214500u: goto label_214500;
        case 0x214504u: goto label_214504;
        case 0x214508u: goto label_214508;
        case 0x21450cu: goto label_21450c;
        case 0x214510u: goto label_214510;
        case 0x214514u: goto label_214514;
        case 0x214518u: goto label_214518;
        case 0x21451cu: goto label_21451c;
        case 0x214520u: goto label_214520;
        case 0x214524u: goto label_214524;
        case 0x214528u: goto label_214528;
        case 0x21452cu: goto label_21452c;
        case 0x214530u: goto label_214530;
        case 0x214534u: goto label_214534;
        case 0x214538u: goto label_214538;
        case 0x21453cu: goto label_21453c;
        case 0x214540u: goto label_214540;
        case 0x214544u: goto label_214544;
        case 0x214548u: goto label_214548;
        case 0x21454cu: goto label_21454c;
        case 0x214550u: goto label_214550;
        case 0x214554u: goto label_214554;
        case 0x214558u: goto label_214558;
        case 0x21455cu: goto label_21455c;
        case 0x214560u: goto label_214560;
        case 0x214564u: goto label_214564;
        case 0x214568u: goto label_214568;
        case 0x21456cu: goto label_21456c;
        case 0x214570u: goto label_214570;
        case 0x214574u: goto label_214574;
        case 0x214578u: goto label_214578;
        case 0x21457cu: goto label_21457c;
        case 0x214580u: goto label_214580;
        case 0x214584u: goto label_214584;
        case 0x214588u: goto label_214588;
        case 0x21458cu: goto label_21458c;
        case 0x214590u: goto label_214590;
        case 0x214594u: goto label_214594;
        case 0x214598u: goto label_214598;
        case 0x21459cu: goto label_21459c;
        case 0x2145a0u: goto label_2145a0;
        case 0x2145a4u: goto label_2145a4;
        case 0x2145a8u: goto label_2145a8;
        case 0x2145acu: goto label_2145ac;
        case 0x2145b0u: goto label_2145b0;
        case 0x2145b4u: goto label_2145b4;
        case 0x2145b8u: goto label_2145b8;
        case 0x2145bcu: goto label_2145bc;
        case 0x2145c0u: goto label_2145c0;
        case 0x2145c4u: goto label_2145c4;
        case 0x2145c8u: goto label_2145c8;
        case 0x2145ccu: goto label_2145cc;
        case 0x2145d0u: goto label_2145d0;
        case 0x2145d4u: goto label_2145d4;
        case 0x2145d8u: goto label_2145d8;
        case 0x2145dcu: goto label_2145dc;
        case 0x2145e0u: goto label_2145e0;
        case 0x2145e4u: goto label_2145e4;
        case 0x2145e8u: goto label_2145e8;
        case 0x2145ecu: goto label_2145ec;
        case 0x2145f0u: goto label_2145f0;
        case 0x2145f4u: goto label_2145f4;
        case 0x2145f8u: goto label_2145f8;
        case 0x2145fcu: goto label_2145fc;
        case 0x214600u: goto label_214600;
        case 0x214604u: goto label_214604;
        case 0x214608u: goto label_214608;
        case 0x21460cu: goto label_21460c;
        case 0x214610u: goto label_214610;
        case 0x214614u: goto label_214614;
        case 0x214618u: goto label_214618;
        case 0x21461cu: goto label_21461c;
        case 0x214620u: goto label_214620;
        case 0x214624u: goto label_214624;
        case 0x214628u: goto label_214628;
        case 0x21462cu: goto label_21462c;
        case 0x214630u: goto label_214630;
        case 0x214634u: goto label_214634;
        case 0x214638u: goto label_214638;
        case 0x21463cu: goto label_21463c;
        case 0x214640u: goto label_214640;
        case 0x214644u: goto label_214644;
        case 0x214648u: goto label_214648;
        case 0x21464cu: goto label_21464c;
        case 0x214650u: goto label_214650;
        case 0x214654u: goto label_214654;
        case 0x214658u: goto label_214658;
        case 0x21465cu: goto label_21465c;
        case 0x214660u: goto label_214660;
        case 0x214664u: goto label_214664;
        case 0x214668u: goto label_214668;
        case 0x21466cu: goto label_21466c;
        case 0x214670u: goto label_214670;
        case 0x214674u: goto label_214674;
        case 0x214678u: goto label_214678;
        case 0x21467cu: goto label_21467c;
        case 0x214680u: goto label_214680;
        case 0x214684u: goto label_214684;
        case 0x214688u: goto label_214688;
        case 0x21468cu: goto label_21468c;
        case 0x214690u: goto label_214690;
        case 0x214694u: goto label_214694;
        case 0x214698u: goto label_214698;
        case 0x21469cu: goto label_21469c;
        case 0x2146a0u: goto label_2146a0;
        case 0x2146a4u: goto label_2146a4;
        case 0x2146a8u: goto label_2146a8;
        case 0x2146acu: goto label_2146ac;
        case 0x2146b0u: goto label_2146b0;
        case 0x2146b4u: goto label_2146b4;
        case 0x2146b8u: goto label_2146b8;
        case 0x2146bcu: goto label_2146bc;
        case 0x2146c0u: goto label_2146c0;
        case 0x2146c4u: goto label_2146c4;
        case 0x2146c8u: goto label_2146c8;
        case 0x2146ccu: goto label_2146cc;
        case 0x2146d0u: goto label_2146d0;
        case 0x2146d4u: goto label_2146d4;
        case 0x2146d8u: goto label_2146d8;
        case 0x2146dcu: goto label_2146dc;
        case 0x2146e0u: goto label_2146e0;
        case 0x2146e4u: goto label_2146e4;
        case 0x2146e8u: goto label_2146e8;
        case 0x2146ecu: goto label_2146ec;
        case 0x2146f0u: goto label_2146f0;
        case 0x2146f4u: goto label_2146f4;
        case 0x2146f8u: goto label_2146f8;
        case 0x2146fcu: goto label_2146fc;
        case 0x214700u: goto label_214700;
        case 0x214704u: goto label_214704;
        case 0x214708u: goto label_214708;
        case 0x21470cu: goto label_21470c;
        case 0x214710u: goto label_214710;
        case 0x214714u: goto label_214714;
        case 0x214718u: goto label_214718;
        case 0x21471cu: goto label_21471c;
        case 0x214720u: goto label_214720;
        case 0x214724u: goto label_214724;
        case 0x214728u: goto label_214728;
        case 0x21472cu: goto label_21472c;
        case 0x214730u: goto label_214730;
        case 0x214734u: goto label_214734;
        case 0x214738u: goto label_214738;
        case 0x21473cu: goto label_21473c;
        case 0x214740u: goto label_214740;
        case 0x214744u: goto label_214744;
        case 0x214748u: goto label_214748;
        case 0x21474cu: goto label_21474c;
        case 0x214750u: goto label_214750;
        case 0x214754u: goto label_214754;
        case 0x214758u: goto label_214758;
        case 0x21475cu: goto label_21475c;
        case 0x214760u: goto label_214760;
        case 0x214764u: goto label_214764;
        case 0x214768u: goto label_214768;
        case 0x21476cu: goto label_21476c;
        case 0x214770u: goto label_214770;
        case 0x214774u: goto label_214774;
        case 0x214778u: goto label_214778;
        case 0x21477cu: goto label_21477c;
        case 0x214780u: goto label_214780;
        case 0x214784u: goto label_214784;
        case 0x214788u: goto label_214788;
        case 0x21478cu: goto label_21478c;
        case 0x214790u: goto label_214790;
        case 0x214794u: goto label_214794;
        case 0x214798u: goto label_214798;
        case 0x21479cu: goto label_21479c;
        case 0x2147a0u: goto label_2147a0;
        case 0x2147a4u: goto label_2147a4;
        case 0x2147a8u: goto label_2147a8;
        case 0x2147acu: goto label_2147ac;
        case 0x2147b0u: goto label_2147b0;
        case 0x2147b4u: goto label_2147b4;
        case 0x2147b8u: goto label_2147b8;
        case 0x2147bcu: goto label_2147bc;
        case 0x2147c0u: goto label_2147c0;
        case 0x2147c4u: goto label_2147c4;
        case 0x2147c8u: goto label_2147c8;
        case 0x2147ccu: goto label_2147cc;
        case 0x2147d0u: goto label_2147d0;
        case 0x2147d4u: goto label_2147d4;
        case 0x2147d8u: goto label_2147d8;
        case 0x2147dcu: goto label_2147dc;
        case 0x2147e0u: goto label_2147e0;
        case 0x2147e4u: goto label_2147e4;
        case 0x2147e8u: goto label_2147e8;
        case 0x2147ecu: goto label_2147ec;
        case 0x2147f0u: goto label_2147f0;
        case 0x2147f4u: goto label_2147f4;
        case 0x2147f8u: goto label_2147f8;
        case 0x2147fcu: goto label_2147fc;
        case 0x214800u: goto label_214800;
        case 0x214804u: goto label_214804;
        case 0x214808u: goto label_214808;
        case 0x21480cu: goto label_21480c;
        case 0x214810u: goto label_214810;
        case 0x214814u: goto label_214814;
        case 0x214818u: goto label_214818;
        case 0x21481cu: goto label_21481c;
        case 0x214820u: goto label_214820;
        case 0x214824u: goto label_214824;
        case 0x214828u: goto label_214828;
        case 0x21482cu: goto label_21482c;
        case 0x214830u: goto label_214830;
        case 0x214834u: goto label_214834;
        case 0x214838u: goto label_214838;
        case 0x21483cu: goto label_21483c;
        case 0x214840u: goto label_214840;
        case 0x214844u: goto label_214844;
        case 0x214848u: goto label_214848;
        case 0x21484cu: goto label_21484c;
        case 0x214850u: goto label_214850;
        case 0x214854u: goto label_214854;
        case 0x214858u: goto label_214858;
        case 0x21485cu: goto label_21485c;
        case 0x214860u: goto label_214860;
        case 0x214864u: goto label_214864;
        case 0x214868u: goto label_214868;
        case 0x21486cu: goto label_21486c;
        case 0x214870u: goto label_214870;
        case 0x214874u: goto label_214874;
        case 0x214878u: goto label_214878;
        case 0x21487cu: goto label_21487c;
        case 0x214880u: goto label_214880;
        case 0x214884u: goto label_214884;
        case 0x214888u: goto label_214888;
        case 0x21488cu: goto label_21488c;
        case 0x214890u: goto label_214890;
        case 0x214894u: goto label_214894;
        case 0x214898u: goto label_214898;
        case 0x21489cu: goto label_21489c;
        case 0x2148a0u: goto label_2148a0;
        case 0x2148a4u: goto label_2148a4;
        case 0x2148a8u: goto label_2148a8;
        case 0x2148acu: goto label_2148ac;
        case 0x2148b0u: goto label_2148b0;
        case 0x2148b4u: goto label_2148b4;
        case 0x2148b8u: goto label_2148b8;
        default: break;
    }

    ctx->pc = 0x214460u;

label_214460:
    // 0x214460: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x214460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_214464:
    // 0x214464: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x214464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_214468:
    // 0x214468: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x214468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_21446c:
    // 0x21446c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21446cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_214470:
    // 0x214470: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x214470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_214474:
    // 0x214474: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x214474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_214478:
    // 0x214478: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x214478u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21447c:
    // 0x21447c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21447cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_214480:
    // 0x214480: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x214480u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_214484:
    // 0x214484: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x214484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_214488:
    // 0x214488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x214488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_21448c:
    // 0x21448c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21448cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_214490:
    // 0x214490: 0x6c000fe  bltz        $s6, . + 4 + (0xFE << 2)
label_214494:
    if (ctx->pc == 0x214494u) {
        ctx->pc = 0x214494u;
            // 0x214494: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x214498u;
        goto label_214498;
    }
    ctx->pc = 0x214490u;
    {
        const bool branch_taken_0x214490 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x214494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214490u;
            // 0x214494: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214490) {
            ctx->pc = 0x21488Cu;
            goto label_21488c;
        }
    }
    ctx->pc = 0x214498u;
label_214498:
    // 0x214498: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_21449c:
    if (ctx->pc == 0x21449Cu) {
        ctx->pc = 0x2144A0u;
        goto label_2144a0;
    }
    ctx->pc = 0x214498u;
    {
        const bool branch_taken_0x214498 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x214498) {
            ctx->pc = 0x2144A8u;
            goto label_2144a8;
        }
    }
    ctx->pc = 0x2144A0u;
label_2144a0:
    // 0x2144a0: 0x100000fb  b           . + 4 + (0xFB << 2)
label_2144a4:
    if (ctx->pc == 0x2144A4u) {
        ctx->pc = 0x2144A4u;
            // 0x2144a4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2144A8u;
        goto label_2144a8;
    }
    ctx->pc = 0x2144A0u;
    {
        const bool branch_taken_0x2144a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2144A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2144A0u;
            // 0x2144a4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144a0) {
            ctx->pc = 0x214890u;
            goto label_214890;
        }
    }
    ctx->pc = 0x2144A8u;
label_2144a8:
    // 0x2144a8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2144a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2144ac:
    // 0x2144ac: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2144acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2144b0:
    // 0x2144b0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2144b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_2144b4:
    // 0x2144b4: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x2144b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_2144b8:
    // 0x2144b8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2144b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2144bc:
    // 0x2144bc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2144bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2144c0:
    // 0x2144c0: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x2144c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2144c4:
    // 0x2144c4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2144c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2144c8:
    // 0x2144c8: 0x249702b4  addiu       $s7, $a0, 0x2B4
    ctx->pc = 0x2144c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 692));
label_2144cc:
    // 0x2144cc: 0x8c8402b4  lw          $a0, 0x2B4($a0)
    ctx->pc = 0x2144ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 692)));
label_2144d0:
    // 0x2144d0: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x2144d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2144d4:
    // 0x2144d4: 0x246202b4  addiu       $v0, $v1, 0x2B4
    ctx->pc = 0x2144d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 692));
label_2144d8:
    // 0x2144d8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2144d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_2144dc:
    // 0x2144dc: 0x8c7002b4  lw          $s0, 0x2B4($v1)
    ctx->pc = 0x2144dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 692)));
label_2144e0:
    // 0x2144e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2144e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2144e4:
    // 0x2144e4: 0x8c910938  lw          $s1, 0x938($a0)
    ctx->pc = 0x2144e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2360)));
label_2144e8:
    // 0x2144e8: 0x8e1e0938  lw          $fp, 0x938($s0)
    ctx->pc = 0x2144e8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2360)));
label_2144ec:
    // 0x2144ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2144ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2144f0:
    // 0x2144f0: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x2144f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2144f4:
    // 0x2144f4: 0x320f809  jalr        $t9
label_2144f8:
    if (ctx->pc == 0x2144F8u) {
        ctx->pc = 0x2144F8u;
            // 0x2144f8: 0x27d30010  addiu       $s3, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->pc = 0x2144FCu;
        goto label_2144fc;
    }
    ctx->pc = 0x2144F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2144FCu);
        ctx->pc = 0x2144F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2144F4u;
            // 0x2144f8: 0x27d30010  addiu       $s3, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2144FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2144FCu; }
            if (ctx->pc != 0x2144FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2144FCu;
label_2144fc:
    // 0x2144fc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2144fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_214500:
    // 0x214500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_214504:
    // 0x214504: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x214504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_214508:
    // 0x214508: 0x320f809  jalr        $t9
label_21450c:
    if (ctx->pc == 0x21450Cu) {
        ctx->pc = 0x21450Cu;
            // 0x21450c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x214510u;
        goto label_214510;
    }
    ctx->pc = 0x214508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214510u);
        ctx->pc = 0x21450Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214508u;
            // 0x21450c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214510u; }
            if (ctx->pc != 0x214510u) { return; }
        }
        }
    }
    ctx->pc = 0x214510u;
label_214510:
    // 0x214510: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x214510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_214514:
    // 0x214514: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x214514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_214518:
    // 0x214518: 0xc041c3e  jal         func_1070F8
label_21451c:
    if (ctx->pc == 0x21451Cu) {
        ctx->pc = 0x21451Cu;
            // 0x21451c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214520u;
        goto label_214520;
    }
    ctx->pc = 0x214518u;
    SET_GPR_U32(ctx, 31, 0x214520u);
    ctx->pc = 0x21451Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214518u;
            // 0x21451c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214520u; }
        if (ctx->pc != 0x214520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214520u; }
        if (ctx->pc != 0x214520u) { return; }
    }
    ctx->pc = 0x214520u;
label_214520:
    // 0x214520: 0xc7a40100  lwc1        $f4, 0x100($sp)
    ctx->pc = 0x214520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_214524:
    // 0x214524: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x214524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_214528:
    // 0x214528: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x214528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_21452c:
    // 0x21452c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x21452cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_214530:
    // 0x214530: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x214530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_214534:
    // 0x214534: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x214534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_214538:
    // 0x214538: 0xc7a500f0  lwc1        $f5, 0xF0($sp)
    ctx->pc = 0x214538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_21453c:
    // 0x21453c: 0xc7a300f4  lwc1        $f3, 0xF4($sp)
    ctx->pc = 0x21453cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_214540:
    // 0x214540: 0x46043102  mul.s       $f4, $f6, $f4
    ctx->pc = 0x214540u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
label_214544:
    // 0x214544: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x214544u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_214548:
    // 0x214548: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x214548u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_21454c:
    // 0x21454c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x21454cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_214550:
    // 0x214550: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x214550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_214554:
    // 0x214554: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x214554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_214558:
    // 0x214558: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x214558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_21455c:
    // 0x21455c: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x21455cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_214560:
    // 0x214560: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x214560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_214564:
    // 0x214564: 0xc065c24  jal         func_197090
label_214568:
    if (ctx->pc == 0x214568u) {
        ctx->pc = 0x214568u;
            // 0x214568: 0xe7a000e8  swc1        $f0, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->pc = 0x21456Cu;
        goto label_21456c;
    }
    ctx->pc = 0x214564u;
    SET_GPR_U32(ctx, 31, 0x21456Cu);
    ctx->pc = 0x214568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214564u;
            // 0x214568: 0xe7a000e8  swc1        $f0, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21456Cu; }
        if (ctx->pc != 0x21456Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21456Cu; }
        if (ctx->pc != 0x21456Cu) { return; }
    }
    ctx->pc = 0x21456Cu;
label_21456c:
    // 0x21456c: 0xc065c30  jal         func_1970C0
label_214570:
    if (ctx->pc == 0x214570u) {
        ctx->pc = 0x214570u;
            // 0x214570: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x214574u;
        goto label_214574;
    }
    ctx->pc = 0x21456Cu;
    SET_GPR_U32(ctx, 31, 0x214574u);
    ctx->pc = 0x214570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21456Cu;
            // 0x214570: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214574u; }
        if (ctx->pc != 0x214574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214574u; }
        if (ctx->pc != 0x214574u) { return; }
    }
    ctx->pc = 0x214574u;
label_214574:
    // 0x214574: 0x87c50002  lh          $a1, 0x2($fp)
    ctx->pc = 0x214574u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_214578:
    // 0x214578: 0xc083488  jal         func_20D220
label_21457c:
    if (ctx->pc == 0x21457Cu) {
        ctx->pc = 0x21457Cu;
            // 0x21457c: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x214580u;
        goto label_214580;
    }
    ctx->pc = 0x214578u;
    SET_GPR_U32(ctx, 31, 0x214580u);
    ctx->pc = 0x21457Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214578u;
            // 0x21457c: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D220u;
    if (runtime->hasFunction(0x20D220u)) {
        auto targetFn = runtime->lookupFunction(0x20D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214580u; }
        if (ctx->pc != 0x214580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChildFishNo__Fii_0x20d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214580u; }
        if (ctx->pc != 0x214580u) { return; }
    }
    ctx->pc = 0x214580u;
label_214580:
    // 0x214580: 0x96540036  lhu         $s4, 0x36($s2)
    ctx->pc = 0x214580u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 54)));
label_214584:
    // 0x214584: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x214584u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
label_214588:
    // 0x214588: 0x283082a  slt         $at, $s4, $v1
    ctx->pc = 0x214588u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21458c:
    // 0x21458c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_214590:
    if (ctx->pc == 0x214590u) {
        ctx->pc = 0x214594u;
        goto label_214594;
    }
    ctx->pc = 0x21458Cu;
    {
        const bool branch_taken_0x21458c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21458c) {
            ctx->pc = 0x214598u;
            goto label_214598;
        }
    }
    ctx->pc = 0x214594u;
label_214594:
    // 0x214594: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x214594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_214598:
    // 0x214598: 0x26940014  addiu       $s4, $s4, 0x14
    ctx->pc = 0x214598u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_21459c:
    // 0x21459c: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_2145a0:
    if (ctx->pc == 0x2145A0u) {
        ctx->pc = 0x2145A0u;
            // 0x2145a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2145A4u;
        goto label_2145a4;
    }
    ctx->pc = 0x21459Cu;
    {
        const bool branch_taken_0x21459c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2145A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21459Cu;
            // 0x2145a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21459c) {
            ctx->pc = 0x2145ACu;
            goto label_2145ac;
        }
    }
    ctx->pc = 0x2145A4u;
label_2145a4:
    // 0x2145a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2145a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2145a8:
    // 0x2145a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2145a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2145ac:
    // 0x2145ac: 0xc066750  jal         func_199D40
label_2145b0:
    if (ctx->pc == 0x2145B0u) {
        ctx->pc = 0x2145B0u;
            // 0x2145b0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2145B4u;
        goto label_2145b4;
    }
    ctx->pc = 0x2145ACu;
    SET_GPR_U32(ctx, 31, 0x2145B4u);
    ctx->pc = 0x2145B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2145ACu;
            // 0x2145b0: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199D40u;
    if (runtime->hasFunction(0x199D40u)) {
        auto targetFn = runtime->lookupFunction(0x199D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2145B4u; }
        if (ctx->pc != 0x2145B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataFish__13CGameDataUsedFi_0x199d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2145B4u; }
        if (ctx->pc != 0x2145B4u) { return; }
    }
    ctx->pc = 0x2145B4u;
label_2145b4:
    // 0x2145b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2145b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2145b8:
    // 0x2145b8: 0xc0941b0  jal         func_2506C0
label_2145bc:
    if (ctx->pc == 0x2145BCu) {
        ctx->pc = 0x2145BCu;
            // 0x2145bc: 0x27b00120  addiu       $s0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2145C0u;
        goto label_2145c0;
    }
    ctx->pc = 0x2145B8u;
    SET_GPR_U32(ctx, 31, 0x2145C0u);
    ctx->pc = 0x2145BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2145B8u;
            // 0x2145bc: 0x27b00120  addiu       $s0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2145C0u; }
        if (ctx->pc != 0x2145C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2145C0u; }
        if (ctx->pc != 0x2145C0u) { return; }
    }
    ctx->pc = 0x2145C0u;
label_2145c0:
    // 0x2145c0: 0xa2020015  sb          $v0, 0x15($s0)
    ctx->pc = 0x2145c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 2));
label_2145c4:
    // 0x2145c4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2145c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2145c8:
    // 0x2145c8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2145c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2145cc:
    // 0x2145cc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2145ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_2145d0:
    // 0x2145d0: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x2145d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_2145d4:
    // 0x2145d4: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x2145d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_2145d8:
    // 0x2145d8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2145dc:
    if (ctx->pc == 0x2145DCu) {
        ctx->pc = 0x2145DCu;
            // 0x2145dc: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x2145E0u;
        goto label_2145e0;
    }
    ctx->pc = 0x2145D8u;
    {
        const bool branch_taken_0x2145d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2145DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2145D8u;
            // 0x2145dc: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145d8) {
            ctx->pc = 0x2145E8u;
            goto label_2145e8;
        }
    }
    ctx->pc = 0x2145E0u;
label_2145e0:
    // 0x2145e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2145e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2145e4:
    // 0x2145e4: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x2145e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_2145e8:
    // 0x2145e8: 0x96630018  lhu         $v1, 0x18($s3)
    ctx->pc = 0x2145e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_2145ec:
    // 0x2145ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_2145f0:
    if (ctx->pc == 0x2145F0u) {
        ctx->pc = 0x2145F0u;
            // 0x2145f0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x2145F4u;
        goto label_2145f4;
    }
    ctx->pc = 0x2145ECu;
    {
        const bool branch_taken_0x2145ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2145F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2145ECu;
            // 0x2145f0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145ec) {
            ctx->pc = 0x2145FCu;
            goto label_2145fc;
        }
    }
    ctx->pc = 0x2145F4u;
label_2145f4:
    // 0x2145f4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2145f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2145f8:
    // 0x2145f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2145f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_2145fc:
    // 0x2145fc: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2145fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_214600:
    // 0x214600: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x214600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_214604:
    // 0x214604: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x214604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_214608:
    // 0x214608: 0xc0941c0  jal         func_250700
label_21460c:
    if (ctx->pc == 0x21460Cu) {
        ctx->pc = 0x21460Cu;
            // 0x21460c: 0xa6030018  sh          $v1, 0x18($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x214610u;
        goto label_214610;
    }
    ctx->pc = 0x214608u;
    SET_GPR_U32(ctx, 31, 0x214610u);
    ctx->pc = 0x21460Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214608u;
            // 0x21460c: 0xa6030018  sh          $v1, 0x18($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214610u; }
        if (ctx->pc != 0x214610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214610u; }
        if (ctx->pc != 0x214610u) { return; }
    }
    ctx->pc = 0x214610u;
label_214610:
    // 0x214610: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x214610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_214614:
    // 0x214614: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x214614u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_214618:
    // 0x214618: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x214618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21461c:
    // 0x21461c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_214620:
    if (ctx->pc == 0x214620u) {
        ctx->pc = 0x214620u;
            // 0x214620: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x214624u;
        goto label_214624;
    }
    ctx->pc = 0x21461Cu;
    {
        const bool branch_taken_0x21461c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x214620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21461Cu;
            // 0x214620: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21461c) {
            ctx->pc = 0x214630u;
            goto label_214630;
        }
    }
    ctx->pc = 0x214624u;
label_214624:
    // 0x214624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x214624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_214628:
    // 0x214628: 0x10000008  b           . + 4 + (0x8 << 2)
label_21462c:
    if (ctx->pc == 0x21462Cu) {
        ctx->pc = 0x21462Cu;
            // 0x21462c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x214630u;
        goto label_214630;
    }
    ctx->pc = 0x214628u;
    {
        const bool branch_taken_0x214628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21462Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214628u;
            // 0x21462c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214628) {
            ctx->pc = 0x21464Cu;
            goto label_21464c;
        }
    }
    ctx->pc = 0x214630u;
label_214630:
    // 0x214630: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x214630u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_214634:
    // 0x214634: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x214634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_214638:
    // 0x214638: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x214638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_21463c:
    // 0x21463c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21463cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_214640:
    // 0x214640: 0x0  nop
    ctx->pc = 0x214640u;
    // NOP
label_214644:
    // 0x214644: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x214644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_214648:
    // 0x214648: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x214648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_21464c:
    // 0x21464c: 0xc0a24b0  jal         func_2892C0
label_214650:
    if (ctx->pc == 0x214650u) {
        ctx->pc = 0x214650u;
            // 0x214650: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x214654u;
        goto label_214654;
    }
    ctx->pc = 0x21464Cu;
    SET_GPR_U32(ctx, 31, 0x214654u);
    ctx->pc = 0x214650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21464Cu;
            // 0x214650: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214654u; }
        if (ctx->pc != 0x214654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214654u; }
        if (ctx->pc != 0x214654u) { return; }
    }
    ctx->pc = 0x214654u;
label_214654:
    // 0x214654: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x214654u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
label_214658:
    // 0x214658: 0x96650026  lhu         $a1, 0x26($s3)
    ctx->pc = 0x214658u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
label_21465c:
    // 0x21465c: 0xc0850f4  jal         func_2143D0
label_214660:
    if (ctx->pc == 0x214660u) {
        ctx->pc = 0x214660u;
            // 0x214660: 0x96440026  lhu         $a0, 0x26($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
        ctx->pc = 0x214664u;
        goto label_214664;
    }
    ctx->pc = 0x21465Cu;
    SET_GPR_U32(ctx, 31, 0x214664u);
    ctx->pc = 0x214660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21465Cu;
            // 0x214660: 0x96440026  lhu         $a0, 0x26($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2143D0u;
    if (runtime->hasFunction(0x2143D0u)) {
        auto targetFn = runtime->lookupFunction(0x2143D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214664u; }
        if (ctx->pc != 0x214664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CombineParam__Fii_0x2143d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214664u; }
        if (ctx->pc != 0x214664u) { return; }
    }
    ctx->pc = 0x214664u;
label_214664:
    // 0x214664: 0xa6020026  sh          $v0, 0x26($s0)
    ctx->pc = 0x214664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
label_214668:
    // 0x214668: 0x96650028  lhu         $a1, 0x28($s3)
    ctx->pc = 0x214668u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
label_21466c:
    // 0x21466c: 0xc0850f4  jal         func_2143D0
label_214670:
    if (ctx->pc == 0x214670u) {
        ctx->pc = 0x214670u;
            // 0x214670: 0x96440028  lhu         $a0, 0x28($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x214674u;
        goto label_214674;
    }
    ctx->pc = 0x21466Cu;
    SET_GPR_U32(ctx, 31, 0x214674u);
    ctx->pc = 0x214670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21466Cu;
            // 0x214670: 0x96440028  lhu         $a0, 0x28($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2143D0u;
    if (runtime->hasFunction(0x2143D0u)) {
        auto targetFn = runtime->lookupFunction(0x2143D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214674u; }
        if (ctx->pc != 0x214674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CombineParam__Fii_0x2143d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214674u; }
        if (ctx->pc != 0x214674u) { return; }
    }
    ctx->pc = 0x214674u;
label_214674:
    // 0x214674: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x214674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
label_214678:
    // 0x214678: 0x9665002a  lhu         $a1, 0x2A($s3)
    ctx->pc = 0x214678u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 42)));
label_21467c:
    // 0x21467c: 0xc0850f4  jal         func_2143D0
label_214680:
    if (ctx->pc == 0x214680u) {
        ctx->pc = 0x214680u;
            // 0x214680: 0x9644002a  lhu         $a0, 0x2A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
        ctx->pc = 0x214684u;
        goto label_214684;
    }
    ctx->pc = 0x21467Cu;
    SET_GPR_U32(ctx, 31, 0x214684u);
    ctx->pc = 0x214680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21467Cu;
            // 0x214680: 0x9644002a  lhu         $a0, 0x2A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2143D0u;
    if (runtime->hasFunction(0x2143D0u)) {
        auto targetFn = runtime->lookupFunction(0x2143D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214684u; }
        if (ctx->pc != 0x214684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CombineParam__Fii_0x2143d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214684u; }
        if (ctx->pc != 0x214684u) { return; }
    }
    ctx->pc = 0x214684u;
label_214684:
    // 0x214684: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x214684u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
label_214688:
    // 0x214688: 0x9665002c  lhu         $a1, 0x2C($s3)
    ctx->pc = 0x214688u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 44)));
label_21468c:
    // 0x21468c: 0xc0850f4  jal         func_2143D0
label_214690:
    if (ctx->pc == 0x214690u) {
        ctx->pc = 0x214690u;
            // 0x214690: 0x9644002c  lhu         $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->pc = 0x214694u;
        goto label_214694;
    }
    ctx->pc = 0x21468Cu;
    SET_GPR_U32(ctx, 31, 0x214694u);
    ctx->pc = 0x214690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21468Cu;
            // 0x214690: 0x9644002c  lhu         $a0, 0x2C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2143D0u;
    if (runtime->hasFunction(0x2143D0u)) {
        auto targetFn = runtime->lookupFunction(0x2143D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214694u; }
        if (ctx->pc != 0x214694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CombineParam__Fii_0x2143d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214694u; }
        if (ctx->pc != 0x214694u) { return; }
    }
    ctx->pc = 0x214694u;
label_214694:
    // 0x214694: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x214694u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
label_214698:
    // 0x214698: 0x9665002e  lhu         $a1, 0x2E($s3)
    ctx->pc = 0x214698u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 46)));
label_21469c:
    // 0x21469c: 0xc0850f4  jal         func_2143D0
label_2146a0:
    if (ctx->pc == 0x2146A0u) {
        ctx->pc = 0x2146A0u;
            // 0x2146a0: 0x9644002e  lhu         $a0, 0x2E($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 46)));
        ctx->pc = 0x2146A4u;
        goto label_2146a4;
    }
    ctx->pc = 0x21469Cu;
    SET_GPR_U32(ctx, 31, 0x2146A4u);
    ctx->pc = 0x2146A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21469Cu;
            // 0x2146a0: 0x9644002e  lhu         $a0, 0x2E($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 46)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2143D0u;
    if (runtime->hasFunction(0x2143D0u)) {
        auto targetFn = runtime->lookupFunction(0x2143D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146A4u; }
        if (ctx->pc != 0x2146A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CombineParam__Fii_0x2143d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146A4u; }
        if (ctx->pc != 0x2146A4u) { return; }
    }
    ctx->pc = 0x2146A4u;
label_2146a4:
    // 0x2146a4: 0xa602002e  sh          $v0, 0x2E($s0)
    ctx->pc = 0x2146a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 2));
label_2146a8:
    // 0x2146a8: 0xa6140036  sh          $s4, 0x36($s0)
    ctx->pc = 0x2146a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 20));
label_2146ac:
    // 0x2146ac: 0x96020036  lhu         $v0, 0x36($s0)
    ctx->pc = 0x2146acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_2146b0:
    // 0x2146b0: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x2146b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
label_2146b4:
    // 0x2146b4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_2146b8:
    if (ctx->pc == 0x2146B8u) {
        ctx->pc = 0x2146B8u;
            // 0x2146b8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2146BCu;
        goto label_2146bc;
    }
    ctx->pc = 0x2146B4u;
    {
        const bool branch_taken_0x2146b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2146B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2146B4u;
            // 0x2146b8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146b4) {
            ctx->pc = 0x2146C8u;
            goto label_2146c8;
        }
    }
    ctx->pc = 0x2146BCu;
label_2146bc:
    // 0x2146bc: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x2146bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_2146c0:
    // 0x2146c0: 0xa6020036  sh          $v0, 0x36($s0)
    ctx->pc = 0x2146c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 2));
label_2146c4:
    // 0x2146c4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2146c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2146c8:
    // 0x2146c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2146c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2146cc:
    // 0x2146cc: 0xa2020035  sb          $v0, 0x35($s0)
    ctx->pc = 0x2146ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 2));
label_2146d0:
    // 0x2146d0: 0xa6000038  sh          $zero, 0x38($s0)
    ctx->pc = 0x2146d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
label_2146d4:
    // 0x2146d4: 0x96020038  lhu         $v0, 0x38($s0)
    ctx->pc = 0x2146d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
label_2146d8:
    // 0x2146d8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2146d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2146dc:
    // 0x2146dc: 0xa6020038  sh          $v0, 0x38($s0)
    ctx->pc = 0x2146dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 2));
label_2146e0:
    // 0x2146e0: 0x92420016  lbu         $v0, 0x16($s2)
    ctx->pc = 0x2146e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_2146e4:
    // 0x2146e4: 0xc0850e4  jal         func_214390
label_2146e8:
    if (ctx->pc == 0x2146E8u) {
        ctx->pc = 0x2146E8u;
            // 0x2146e8: 0xa2020016  sb          $v0, 0x16($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2146ECu;
        goto label_2146ec;
    }
    ctx->pc = 0x2146E4u;
    SET_GPR_U32(ctx, 31, 0x2146ECu);
    ctx->pc = 0x2146E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2146E4u;
            // 0x2146e8: 0xa2020016  sb          $v0, 0x16($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214390u;
    if (runtime->hasFunction(0x214390u)) {
        auto targetFn = runtime->lookupFunction(0x214390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146ECu; }
        if (ctx->pc != 0x2146ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcFishParam__FP14BREEDFISH_USED_0x214390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146ECu; }
        if (ctx->pc != 0x2146ECu) { return; }
    }
    ctx->pc = 0x2146ECu;
label_2146ec:
    // 0x2146ec: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2146ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_2146f0:
    // 0x2146f0: 0xc0850e4  jal         func_214390
label_2146f4:
    if (ctx->pc == 0x2146F4u) {
        ctx->pc = 0x2146F4u;
            // 0x2146f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2146F8u;
        goto label_2146f8;
    }
    ctx->pc = 0x2146F0u;
    SET_GPR_U32(ctx, 31, 0x2146F8u);
    ctx->pc = 0x2146F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2146F0u;
            // 0x2146f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214390u;
    if (runtime->hasFunction(0x214390u)) {
        auto targetFn = runtime->lookupFunction(0x214390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146F8u; }
        if (ctx->pc != 0x2146F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcFishParam__FP14BREEDFISH_USED_0x214390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2146F8u; }
        if (ctx->pc != 0x2146F8u) { return; }
    }
    ctx->pc = 0x2146F8u;
label_2146f8:
    // 0x2146f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2146f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2146fc:
    // 0x2146fc: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x2146fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
label_214700:
    // 0x214700: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x214700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_214704:
    // 0x214704: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x214704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_214708:
    // 0x214708: 0x9242003a  lbu         $v0, 0x3A($s2)
    ctx->pc = 0x214708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 58)));
label_21470c:
    // 0x21470c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_214710:
    if (ctx->pc == 0x214710u) {
        ctx->pc = 0x214710u;
            // 0x214710: 0xafa20198  sw          $v0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
        ctx->pc = 0x214714u;
        goto label_214714;
    }
    ctx->pc = 0x21470Cu;
    {
        const bool branch_taken_0x21470c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x214710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21470Cu;
            // 0x214710: 0xafa20198  sw          $v0, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21470c) {
            ctx->pc = 0x214724u;
            goto label_214724;
        }
    }
    ctx->pc = 0x214714u;
label_214714:
    // 0x214714: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x214714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_214718:
    // 0x214718: 0xc084738  jal         func_211CE0
label_21471c:
    if (ctx->pc == 0x21471Cu) {
        ctx->pc = 0x21471Cu;
            // 0x21471c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214720u;
        goto label_214720;
    }
    ctx->pc = 0x214718u;
    SET_GPR_U32(ctx, 31, 0x214720u);
    ctx->pc = 0x21471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214718u;
            // 0x21471c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211CE0u;
    if (runtime->hasFunction(0x211CE0u)) {
        auto targetFn = runtime->lookupFunction(0x211CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214720u; }
        if (ctx->pc != 0x214720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishImageColor__Fii_0x211ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214720u; }
        if (ctx->pc != 0x214720u) { return; }
    }
    ctx->pc = 0x214720u;
label_214720:
    // 0x214720: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x214720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_214724:
    // 0x214724: 0x9263003a  lbu         $v1, 0x3A($s3)
    ctx->pc = 0x214724u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 58)));
label_214728:
    // 0x214728: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x214728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_21472c:
    // 0x21472c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_214730:
    if (ctx->pc == 0x214730u) {
        ctx->pc = 0x214730u;
            // 0x214730: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x214734u;
        goto label_214734;
    }
    ctx->pc = 0x21472Cu;
    {
        const bool branch_taken_0x21472c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21472Cu;
            // 0x214730: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21472c) {
            ctx->pc = 0x214748u;
            goto label_214748;
        }
    }
    ctx->pc = 0x214734u;
label_214734:
    // 0x214734: 0x87c40002  lh          $a0, 0x2($fp)
    ctx->pc = 0x214734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
label_214738:
    // 0x214738: 0xc084738  jal         func_211CE0
label_21473c:
    if (ctx->pc == 0x21473Cu) {
        ctx->pc = 0x21473Cu;
            // 0x21473c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x214740u;
        goto label_214740;
    }
    ctx->pc = 0x214738u;
    SET_GPR_U32(ctx, 31, 0x214740u);
    ctx->pc = 0x21473Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214738u;
            // 0x21473c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211CE0u;
    if (runtime->hasFunction(0x211CE0u)) {
        auto targetFn = runtime->lookupFunction(0x211CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214740u; }
        if (ctx->pc != 0x214740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishImageColor__Fii_0x211ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214740u; }
        if (ctx->pc != 0x214740u) { return; }
    }
    ctx->pc = 0x214740u;
label_214740:
    // 0x214740: 0x27a3019c  addiu       $v1, $sp, 0x19C
    ctx->pc = 0x214740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_214744:
    // 0x214744: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x214744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_214748:
    // 0x214748: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x214748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_21474c:
    // 0x21474c: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x21474cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_214750:
    // 0x214750: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_214754:
    if (ctx->pc == 0x214754u) {
        ctx->pc = 0x214754u;
            // 0x214754: 0x282082a  slt         $at, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x214758u;
        goto label_214758;
    }
    ctx->pc = 0x214750u;
    {
        const bool branch_taken_0x214750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x214754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214750u;
            // 0x214754: 0x282082a  slt         $at, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214750) {
            ctx->pc = 0x214768u;
            goto label_214768;
        }
    }
    ctx->pc = 0x214758u;
label_214758:
    // 0x214758: 0x27a2019c  addiu       $v0, $sp, 0x19C
    ctx->pc = 0x214758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 412));
label_21475c:
    // 0x21475c: 0x1000000d  b           . + 4 + (0xD << 2)
label_214760:
    if (ctx->pc == 0x214760u) {
        ctx->pc = 0x214760u;
            // 0x214760: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x214764u;
        goto label_214764;
    }
    ctx->pc = 0x21475Cu;
    {
        const bool branch_taken_0x21475c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21475Cu;
            // 0x214760: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21475c) {
            ctx->pc = 0x214794u;
            goto label_214794;
        }
    }
    ctx->pc = 0x214764u;
label_214764:
    // 0x214764: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x214764u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_214768:
    // 0x214768: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_21476c:
    if (ctx->pc == 0x21476Cu) {
        ctx->pc = 0x21476Cu;
            // 0x21476c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x214770u;
        goto label_214770;
    }
    ctx->pc = 0x214768u;
    {
        const bool branch_taken_0x214768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21476Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214768u;
            // 0x21476c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214768) {
            ctx->pc = 0x21477Cu;
            goto label_21477c;
        }
    }
    ctx->pc = 0x214770u;
label_214770:
    // 0x214770: 0x10000008  b           . + 4 + (0x8 << 2)
label_214774:
    if (ctx->pc == 0x214774u) {
        ctx->pc = 0x214774u;
            // 0x214774: 0x8fb20198  lw          $s2, 0x198($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
        ctx->pc = 0x214778u;
        goto label_214778;
    }
    ctx->pc = 0x214770u;
    {
        const bool branch_taken_0x214770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x214770u;
            // 0x214774: 0x8fb20198  lw          $s2, 0x198($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214770) {
            ctx->pc = 0x214794u;
            goto label_214794;
        }
    }
    ctx->pc = 0x214778u;
label_214778:
    // 0x214778: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x214778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21477c:
    // 0x21477c: 0xc0941b0  jal         func_2506C0
label_214780:
    if (ctx->pc == 0x214780u) {
        ctx->pc = 0x214784u;
        goto label_214784;
    }
    ctx->pc = 0x21477Cu;
    SET_GPR_U32(ctx, 31, 0x214784u);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214784u; }
        if (ctx->pc != 0x214784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214784u; }
        if (ctx->pc != 0x214784u) { return; }
    }
    ctx->pc = 0x214784u;
label_214784:
    // 0x214784: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x214784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_214788:
    // 0x214788: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x214788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_21478c:
    // 0x21478c: 0x8c520198  lw          $s2, 0x198($v0)
    ctx->pc = 0x21478cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
label_214790:
    // 0x214790: 0x0  nop
    ctx->pc = 0x214790u;
    // NOP
label_214794:
    // 0x214794: 0x87a40112  lh          $a0, 0x112($sp)
    ctx->pc = 0x214794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 274)));
label_214798:
    // 0x214798: 0xc084738  jal         func_211CE0
label_21479c:
    if (ctx->pc == 0x21479Cu) {
        ctx->pc = 0x21479Cu;
            // 0x21479c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2147A0u;
        goto label_2147a0;
    }
    ctx->pc = 0x214798u;
    SET_GPR_U32(ctx, 31, 0x2147A0u);
    ctx->pc = 0x21479Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214798u;
            // 0x21479c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211CE0u;
    if (runtime->hasFunction(0x211CE0u)) {
        auto targetFn = runtime->lookupFunction(0x211CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2147A0u; }
        if (ctx->pc != 0x2147A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishImageColor__Fii_0x211ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2147A0u; }
        if (ctx->pc != 0x2147A0u) { return; }
    }
    ctx->pc = 0x2147A0u;
label_2147a0:
    // 0x2147a0: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
label_2147a4:
    if (ctx->pc == 0x2147A4u) {
        ctx->pc = 0x2147A4u;
            // 0x2147a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2147A8u;
        goto label_2147a8;
    }
    ctx->pc = 0x2147A0u;
    {
        const bool branch_taken_0x2147a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2147A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2147A0u;
            // 0x2147a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147a0) {
            ctx->pc = 0x2147B0u;
            goto label_2147b0;
        }
    }
    ctx->pc = 0x2147A8u;
label_2147a8:
    // 0x2147a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2147a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2147ac:
    // 0x2147ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2147acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2147b0:
    // 0x2147b0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x2147b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2147b4:
    // 0x2147b4: 0xc06666c  jal         func_1999B0
label_2147b8:
    if (ctx->pc == 0x2147B8u) {
        ctx->pc = 0x2147B8u;
            // 0x2147b8: 0xa212003a  sb          $s2, 0x3A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 18));
        ctx->pc = 0x2147BCu;
        goto label_2147bc;
    }
    ctx->pc = 0x2147B4u;
    SET_GPR_U32(ctx, 31, 0x2147BCu);
    ctx->pc = 0x2147B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2147B4u;
            // 0x2147b8: 0xa212003a  sb          $s2, 0x3A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2147BCu; }
        if (ctx->pc != 0x2147BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2147BCu; }
        if (ctx->pc != 0x2147BCu) { return; }
    }
    ctx->pc = 0x2147BCu;
label_2147bc:
    // 0x2147bc: 0xc066538  jal         func_1994E0
label_2147c0:
    if (ctx->pc == 0x2147C0u) {
        ctx->pc = 0x2147C0u;
            // 0x2147c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2147C4u;
        goto label_2147c4;
    }
    ctx->pc = 0x2147BCu;
    SET_GPR_U32(ctx, 31, 0x2147C4u);
    ctx->pc = 0x2147C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2147BCu;
            // 0x2147c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1994E0u;
    if (runtime->hasFunction(0x1994E0u)) {
        auto targetFn = runtime->lookupFunction(0x1994E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2147C4u; }
        if (ctx->pc != 0x2147C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckParamLimmit__13CGameDataUsedFv_0x1994e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2147C4u; }
        if (ctx->pc != 0x2147C4u) { return; }
    }
    ctx->pc = 0x2147C4u;
label_2147c4:
    // 0x2147c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2147c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2147c8:
    // 0x2147c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2147c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2147cc:
    // 0x2147cc: 0xc084cf0  jal         func_2133C0
label_2147d0:
    if (ctx->pc == 0x2147D0u) {
        ctx->pc = 0x2147D0u;
            // 0x2147d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2147D4u;
        goto label_2147d4;
    }
    ctx->pc = 0x2147CCu;
    SET_GPR_U32(ctx, 31, 0x2147D4u);
    ctx->pc = 0x2147D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2147CCu;
            // 0x2147d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2133C0u;
    if (runtime->hasFunction(0x2133C0u)) {
        auto targetFn = runtime->lookupFunction(0x2133C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2147D4u; }
        if (ctx->pc != 0x2147D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFish__9CAquariumFiP13CGameDataUsed_0x2133c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2147D4u; }
        if (ctx->pc != 0x2147D4u) { return; }
    }
    ctx->pc = 0x2147D4u;
label_2147d4:
    // 0x2147d4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2147d8:
    if (ctx->pc == 0x2147D8u) {
        ctx->pc = 0x2147DCu;
        goto label_2147dc;
    }
    ctx->pc = 0x2147D4u;
    {
        const bool branch_taken_0x2147d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2147d4) {
            ctx->pc = 0x21483Cu;
            goto label_21483c;
        }
    }
    ctx->pc = 0x2147DCu;
label_2147dc:
    // 0x2147dc: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2147dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2147e0:
    // 0x2147e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2147e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2147e4:
    // 0x2147e4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2147e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2147e8:
    // 0x2147e8: 0x320f809  jalr        $t9
label_2147ec:
    if (ctx->pc == 0x2147ECu) {
        ctx->pc = 0x2147ECu;
            // 0x2147ec: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2147F0u;
        goto label_2147f0;
    }
    ctx->pc = 0x2147E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2147F0u);
        ctx->pc = 0x2147ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2147E8u;
            // 0x2147ec: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2147F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2147F0u; }
            if (ctx->pc != 0x2147F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2147F0u;
label_2147f0:
    // 0x2147f0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x2147f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_2147f4:
    // 0x2147f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2147f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2147f8:
    // 0x2147f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2147f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2147fc:
    // 0x2147fc: 0xc0941c0  jal         func_250700
label_214800:
    if (ctx->pc == 0x214800u) {
        ctx->pc = 0x214800u;
            // 0x214800: 0xafa00180  sw          $zero, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
        ctx->pc = 0x214804u;
        goto label_214804;
    }
    ctx->pc = 0x2147FCu;
    SET_GPR_U32(ctx, 31, 0x214804u);
    ctx->pc = 0x214800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2147FCu;
            // 0x214800: 0xafa00180  sw          $zero, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214804u; }
        if (ctx->pc != 0x214804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214804u; }
        if (ctx->pc != 0x214804u) { return; }
    }
    ctx->pc = 0x214804u;
label_214804:
    // 0x214804: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x214804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_214808:
    // 0x214808: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x214808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
label_21480c:
    // 0x21480c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x21480cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_214810:
    // 0x214810: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x214810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_214814:
    // 0x214814: 0x0  nop
    ctx->pc = 0x214814u;
    // NOP
label_214818:
    // 0x214818: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x214818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_21481c:
    // 0x21481c: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x21481cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_214820:
    // 0x214820: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x214820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_214824:
    // 0x214824: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x214824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_214828:
    // 0x214828: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x214828u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_21482c:
    // 0x21482c: 0x320f809  jalr        $t9
label_214830:
    if (ctx->pc == 0x214830u) {
        ctx->pc = 0x214830u;
            // 0x214830: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x214834u;
        goto label_214834;
    }
    ctx->pc = 0x21482Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214834u);
        ctx->pc = 0x214830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21482Cu;
            // 0x214830: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x214834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214834u; }
            if (ctx->pc != 0x214834u) { return; }
        }
        }
    }
    ctx->pc = 0x214834u;
label_214834:
    // 0x214834: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x214834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_214838:
    // 0x214838: 0xa44006ae  sh          $zero, 0x6AE($v0)
    ctx->pc = 0x214838u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1710), (uint16_t)GPR_U32(ctx, 0));
label_21483c:
    // 0x21483c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_214840:
    // 0x214840: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x214840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
label_214844:
    // 0x214844: 0x2463c480  addiu       $v1, $v1, -0x3B80
    ctx->pc = 0x214844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952064));
label_214848:
    // 0x214848: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x214848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21484c:
    // 0x21484c: 0xc083bcc  jal         func_20EF30
label_214850:
    if (ctx->pc == 0x214850u) {
        ctx->pc = 0x214850u;
            // 0x214850: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x214854u;
        goto label_214854;
    }
    ctx->pc = 0x21484Cu;
    SET_GPR_U32(ctx, 31, 0x214854u);
    ctx->pc = 0x214850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21484Cu;
            // 0x214850: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EF30u;
    if (runtime->hasFunction(0x20EF30u)) {
        auto targetFn = runtime->lookupFunction(0x20EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214854u; }
        if (ctx->pc != 0x214854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CAquaFishEffFv_0x20ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214854u; }
        if (ctx->pc != 0x214854u) { return; }
    }
    ctx->pc = 0x214854u;
label_214854:
    // 0x214854: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x214854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_214858:
    // 0x214858: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x214858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
label_21485c:
    // 0x21485c: 0x2463c480  addiu       $v1, $v1, -0x3B80
    ctx->pc = 0x21485cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952064));
label_214860:
    // 0x214860: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x214860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_214864:
    // 0x214864: 0xc083bcc  jal         func_20EF30
label_214868:
    if (ctx->pc == 0x214868u) {
        ctx->pc = 0x214868u;
            // 0x214868: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x21486Cu;
        goto label_21486c;
    }
    ctx->pc = 0x214864u;
    SET_GPR_U32(ctx, 31, 0x21486Cu);
    ctx->pc = 0x214868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x214864u;
            // 0x214868: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EF30u;
    if (runtime->hasFunction(0x20EF30u)) {
        auto targetFn = runtime->lookupFunction(0x20EF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21486Cu; }
        if (ctx->pc != 0x21486Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CAquaFishEffFv_0x20ef30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21486Cu; }
        if (ctx->pc != 0x21486Cu) { return; }
    }
    ctx->pc = 0x21486Cu;
label_21486c:
    // 0x21486c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_214870:
    // 0x214870: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x214870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_214874:
    // 0x214874: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x214874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_214878:
    // 0x214878: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x214878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_21487c:
    // 0x21487c: 0x320f809  jalr        $t9
label_214880:
    if (ctx->pc == 0x214880u) {
        ctx->pc = 0x214884u;
        goto label_214884;
    }
    ctx->pc = 0x21487Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x214884u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x214884u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x214884u; }
            if (ctx->pc != 0x214884u) { return; }
        }
        }
    }
    ctx->pc = 0x214884u;
label_214884:
    // 0x214884: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x214884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_214888:
    // 0x214888: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x214888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_21488c:
    // 0x21488c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21488cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_214890:
    // 0x214890: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x214890u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_214894:
    // 0x214894: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x214894u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_214898:
    // 0x214898: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x214898u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21489c:
    // 0x21489c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21489cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2148a0:
    // 0x2148a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2148a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2148a4:
    // 0x2148a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2148a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2148a8:
    // 0x2148a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2148a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2148ac:
    // 0x2148ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2148acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2148b0:
    // 0x2148b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2148b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2148b4:
    // 0x2148b4: 0x3e00008  jr          $ra
label_2148b8:
    if (ctx->pc == 0x2148B8u) {
        ctx->pc = 0x2148B8u;
            // 0x2148b8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x2148BCu;
        goto label_fallthrough_0x2148b4;
    }
    ctx->pc = 0x2148B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2148B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2148B4u;
            // 0x2148b8: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2148b4:
    ctx->pc = 0x2148BCu;
}
