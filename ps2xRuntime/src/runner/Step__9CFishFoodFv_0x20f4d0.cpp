#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9CFishFoodFv
// Address: 0x20f4d0 - 0x20f8e4
void Step__9CFishFoodFv_0x20f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9CFishFoodFv_0x20f4d0");
#endif

    switch (ctx->pc) {
        case 0x20f4d0u: goto label_20f4d0;
        case 0x20f4d4u: goto label_20f4d4;
        case 0x20f4d8u: goto label_20f4d8;
        case 0x20f4dcu: goto label_20f4dc;
        case 0x20f4e0u: goto label_20f4e0;
        case 0x20f4e4u: goto label_20f4e4;
        case 0x20f4e8u: goto label_20f4e8;
        case 0x20f4ecu: goto label_20f4ec;
        case 0x20f4f0u: goto label_20f4f0;
        case 0x20f4f4u: goto label_20f4f4;
        case 0x20f4f8u: goto label_20f4f8;
        case 0x20f4fcu: goto label_20f4fc;
        case 0x20f500u: goto label_20f500;
        case 0x20f504u: goto label_20f504;
        case 0x20f508u: goto label_20f508;
        case 0x20f50cu: goto label_20f50c;
        case 0x20f510u: goto label_20f510;
        case 0x20f514u: goto label_20f514;
        case 0x20f518u: goto label_20f518;
        case 0x20f51cu: goto label_20f51c;
        case 0x20f520u: goto label_20f520;
        case 0x20f524u: goto label_20f524;
        case 0x20f528u: goto label_20f528;
        case 0x20f52cu: goto label_20f52c;
        case 0x20f530u: goto label_20f530;
        case 0x20f534u: goto label_20f534;
        case 0x20f538u: goto label_20f538;
        case 0x20f53cu: goto label_20f53c;
        case 0x20f540u: goto label_20f540;
        case 0x20f544u: goto label_20f544;
        case 0x20f548u: goto label_20f548;
        case 0x20f54cu: goto label_20f54c;
        case 0x20f550u: goto label_20f550;
        case 0x20f554u: goto label_20f554;
        case 0x20f558u: goto label_20f558;
        case 0x20f55cu: goto label_20f55c;
        case 0x20f560u: goto label_20f560;
        case 0x20f564u: goto label_20f564;
        case 0x20f568u: goto label_20f568;
        case 0x20f56cu: goto label_20f56c;
        case 0x20f570u: goto label_20f570;
        case 0x20f574u: goto label_20f574;
        case 0x20f578u: goto label_20f578;
        case 0x20f57cu: goto label_20f57c;
        case 0x20f580u: goto label_20f580;
        case 0x20f584u: goto label_20f584;
        case 0x20f588u: goto label_20f588;
        case 0x20f58cu: goto label_20f58c;
        case 0x20f590u: goto label_20f590;
        case 0x20f594u: goto label_20f594;
        case 0x20f598u: goto label_20f598;
        case 0x20f59cu: goto label_20f59c;
        case 0x20f5a0u: goto label_20f5a0;
        case 0x20f5a4u: goto label_20f5a4;
        case 0x20f5a8u: goto label_20f5a8;
        case 0x20f5acu: goto label_20f5ac;
        case 0x20f5b0u: goto label_20f5b0;
        case 0x20f5b4u: goto label_20f5b4;
        case 0x20f5b8u: goto label_20f5b8;
        case 0x20f5bcu: goto label_20f5bc;
        case 0x20f5c0u: goto label_20f5c0;
        case 0x20f5c4u: goto label_20f5c4;
        case 0x20f5c8u: goto label_20f5c8;
        case 0x20f5ccu: goto label_20f5cc;
        case 0x20f5d0u: goto label_20f5d0;
        case 0x20f5d4u: goto label_20f5d4;
        case 0x20f5d8u: goto label_20f5d8;
        case 0x20f5dcu: goto label_20f5dc;
        case 0x20f5e0u: goto label_20f5e0;
        case 0x20f5e4u: goto label_20f5e4;
        case 0x20f5e8u: goto label_20f5e8;
        case 0x20f5ecu: goto label_20f5ec;
        case 0x20f5f0u: goto label_20f5f0;
        case 0x20f5f4u: goto label_20f5f4;
        case 0x20f5f8u: goto label_20f5f8;
        case 0x20f5fcu: goto label_20f5fc;
        case 0x20f600u: goto label_20f600;
        case 0x20f604u: goto label_20f604;
        case 0x20f608u: goto label_20f608;
        case 0x20f60cu: goto label_20f60c;
        case 0x20f610u: goto label_20f610;
        case 0x20f614u: goto label_20f614;
        case 0x20f618u: goto label_20f618;
        case 0x20f61cu: goto label_20f61c;
        case 0x20f620u: goto label_20f620;
        case 0x20f624u: goto label_20f624;
        case 0x20f628u: goto label_20f628;
        case 0x20f62cu: goto label_20f62c;
        case 0x20f630u: goto label_20f630;
        case 0x20f634u: goto label_20f634;
        case 0x20f638u: goto label_20f638;
        case 0x20f63cu: goto label_20f63c;
        case 0x20f640u: goto label_20f640;
        case 0x20f644u: goto label_20f644;
        case 0x20f648u: goto label_20f648;
        case 0x20f64cu: goto label_20f64c;
        case 0x20f650u: goto label_20f650;
        case 0x20f654u: goto label_20f654;
        case 0x20f658u: goto label_20f658;
        case 0x20f65cu: goto label_20f65c;
        case 0x20f660u: goto label_20f660;
        case 0x20f664u: goto label_20f664;
        case 0x20f668u: goto label_20f668;
        case 0x20f66cu: goto label_20f66c;
        case 0x20f670u: goto label_20f670;
        case 0x20f674u: goto label_20f674;
        case 0x20f678u: goto label_20f678;
        case 0x20f67cu: goto label_20f67c;
        case 0x20f680u: goto label_20f680;
        case 0x20f684u: goto label_20f684;
        case 0x20f688u: goto label_20f688;
        case 0x20f68cu: goto label_20f68c;
        case 0x20f690u: goto label_20f690;
        case 0x20f694u: goto label_20f694;
        case 0x20f698u: goto label_20f698;
        case 0x20f69cu: goto label_20f69c;
        case 0x20f6a0u: goto label_20f6a0;
        case 0x20f6a4u: goto label_20f6a4;
        case 0x20f6a8u: goto label_20f6a8;
        case 0x20f6acu: goto label_20f6ac;
        case 0x20f6b0u: goto label_20f6b0;
        case 0x20f6b4u: goto label_20f6b4;
        case 0x20f6b8u: goto label_20f6b8;
        case 0x20f6bcu: goto label_20f6bc;
        case 0x20f6c0u: goto label_20f6c0;
        case 0x20f6c4u: goto label_20f6c4;
        case 0x20f6c8u: goto label_20f6c8;
        case 0x20f6ccu: goto label_20f6cc;
        case 0x20f6d0u: goto label_20f6d0;
        case 0x20f6d4u: goto label_20f6d4;
        case 0x20f6d8u: goto label_20f6d8;
        case 0x20f6dcu: goto label_20f6dc;
        case 0x20f6e0u: goto label_20f6e0;
        case 0x20f6e4u: goto label_20f6e4;
        case 0x20f6e8u: goto label_20f6e8;
        case 0x20f6ecu: goto label_20f6ec;
        case 0x20f6f0u: goto label_20f6f0;
        case 0x20f6f4u: goto label_20f6f4;
        case 0x20f6f8u: goto label_20f6f8;
        case 0x20f6fcu: goto label_20f6fc;
        case 0x20f700u: goto label_20f700;
        case 0x20f704u: goto label_20f704;
        case 0x20f708u: goto label_20f708;
        case 0x20f70cu: goto label_20f70c;
        case 0x20f710u: goto label_20f710;
        case 0x20f714u: goto label_20f714;
        case 0x20f718u: goto label_20f718;
        case 0x20f71cu: goto label_20f71c;
        case 0x20f720u: goto label_20f720;
        case 0x20f724u: goto label_20f724;
        case 0x20f728u: goto label_20f728;
        case 0x20f72cu: goto label_20f72c;
        case 0x20f730u: goto label_20f730;
        case 0x20f734u: goto label_20f734;
        case 0x20f738u: goto label_20f738;
        case 0x20f73cu: goto label_20f73c;
        case 0x20f740u: goto label_20f740;
        case 0x20f744u: goto label_20f744;
        case 0x20f748u: goto label_20f748;
        case 0x20f74cu: goto label_20f74c;
        case 0x20f750u: goto label_20f750;
        case 0x20f754u: goto label_20f754;
        case 0x20f758u: goto label_20f758;
        case 0x20f75cu: goto label_20f75c;
        case 0x20f760u: goto label_20f760;
        case 0x20f764u: goto label_20f764;
        case 0x20f768u: goto label_20f768;
        case 0x20f76cu: goto label_20f76c;
        case 0x20f770u: goto label_20f770;
        case 0x20f774u: goto label_20f774;
        case 0x20f778u: goto label_20f778;
        case 0x20f77cu: goto label_20f77c;
        case 0x20f780u: goto label_20f780;
        case 0x20f784u: goto label_20f784;
        case 0x20f788u: goto label_20f788;
        case 0x20f78cu: goto label_20f78c;
        case 0x20f790u: goto label_20f790;
        case 0x20f794u: goto label_20f794;
        case 0x20f798u: goto label_20f798;
        case 0x20f79cu: goto label_20f79c;
        case 0x20f7a0u: goto label_20f7a0;
        case 0x20f7a4u: goto label_20f7a4;
        case 0x20f7a8u: goto label_20f7a8;
        case 0x20f7acu: goto label_20f7ac;
        case 0x20f7b0u: goto label_20f7b0;
        case 0x20f7b4u: goto label_20f7b4;
        case 0x20f7b8u: goto label_20f7b8;
        case 0x20f7bcu: goto label_20f7bc;
        case 0x20f7c0u: goto label_20f7c0;
        case 0x20f7c4u: goto label_20f7c4;
        case 0x20f7c8u: goto label_20f7c8;
        case 0x20f7ccu: goto label_20f7cc;
        case 0x20f7d0u: goto label_20f7d0;
        case 0x20f7d4u: goto label_20f7d4;
        case 0x20f7d8u: goto label_20f7d8;
        case 0x20f7dcu: goto label_20f7dc;
        case 0x20f7e0u: goto label_20f7e0;
        case 0x20f7e4u: goto label_20f7e4;
        case 0x20f7e8u: goto label_20f7e8;
        case 0x20f7ecu: goto label_20f7ec;
        case 0x20f7f0u: goto label_20f7f0;
        case 0x20f7f4u: goto label_20f7f4;
        case 0x20f7f8u: goto label_20f7f8;
        case 0x20f7fcu: goto label_20f7fc;
        case 0x20f800u: goto label_20f800;
        case 0x20f804u: goto label_20f804;
        case 0x20f808u: goto label_20f808;
        case 0x20f80cu: goto label_20f80c;
        case 0x20f810u: goto label_20f810;
        case 0x20f814u: goto label_20f814;
        case 0x20f818u: goto label_20f818;
        case 0x20f81cu: goto label_20f81c;
        case 0x20f820u: goto label_20f820;
        case 0x20f824u: goto label_20f824;
        case 0x20f828u: goto label_20f828;
        case 0x20f82cu: goto label_20f82c;
        case 0x20f830u: goto label_20f830;
        case 0x20f834u: goto label_20f834;
        case 0x20f838u: goto label_20f838;
        case 0x20f83cu: goto label_20f83c;
        case 0x20f840u: goto label_20f840;
        case 0x20f844u: goto label_20f844;
        case 0x20f848u: goto label_20f848;
        case 0x20f84cu: goto label_20f84c;
        case 0x20f850u: goto label_20f850;
        case 0x20f854u: goto label_20f854;
        case 0x20f858u: goto label_20f858;
        case 0x20f85cu: goto label_20f85c;
        case 0x20f860u: goto label_20f860;
        case 0x20f864u: goto label_20f864;
        case 0x20f868u: goto label_20f868;
        case 0x20f86cu: goto label_20f86c;
        case 0x20f870u: goto label_20f870;
        case 0x20f874u: goto label_20f874;
        case 0x20f878u: goto label_20f878;
        case 0x20f87cu: goto label_20f87c;
        case 0x20f880u: goto label_20f880;
        case 0x20f884u: goto label_20f884;
        case 0x20f888u: goto label_20f888;
        case 0x20f88cu: goto label_20f88c;
        case 0x20f890u: goto label_20f890;
        case 0x20f894u: goto label_20f894;
        case 0x20f898u: goto label_20f898;
        case 0x20f89cu: goto label_20f89c;
        case 0x20f8a0u: goto label_20f8a0;
        case 0x20f8a4u: goto label_20f8a4;
        case 0x20f8a8u: goto label_20f8a8;
        case 0x20f8acu: goto label_20f8ac;
        case 0x20f8b0u: goto label_20f8b0;
        case 0x20f8b4u: goto label_20f8b4;
        case 0x20f8b8u: goto label_20f8b8;
        case 0x20f8bcu: goto label_20f8bc;
        case 0x20f8c0u: goto label_20f8c0;
        case 0x20f8c4u: goto label_20f8c4;
        case 0x20f8c8u: goto label_20f8c8;
        case 0x20f8ccu: goto label_20f8cc;
        case 0x20f8d0u: goto label_20f8d0;
        case 0x20f8d4u: goto label_20f8d4;
        case 0x20f8d8u: goto label_20f8d8;
        case 0x20f8dcu: goto label_20f8dc;
        case 0x20f8e0u: goto label_20f8e0;
        default: break;
    }

    ctx->pc = 0x20f4d0u;

label_20f4d0:
    // 0x20f4d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x20f4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_20f4d4:
    // 0x20f4d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x20f4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_20f4d8:
    // 0x20f4d8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x20f4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_20f4dc:
    // 0x20f4dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x20f4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_20f4e0:
    // 0x20f4e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20f4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20f4e4:
    // 0x20f4e4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x20f4e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f4e8:
    // 0x20f4e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20f4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20f4ec:
    // 0x20f4ec: 0x27b40084  addiu       $s4, $sp, 0x84
    ctx->pc = 0x20f4ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_20f4f0:
    // 0x20f4f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20f4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20f4f4:
    // 0x20f4f4: 0x27b30088  addiu       $s3, $sp, 0x88
    ctx->pc = 0x20f4f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_20f4f8:
    // 0x20f4f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20f4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20f4fc:
    // 0x20f4fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20f4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20f500:
    // 0x20f500: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x20f500u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_20f504:
    // 0x20f504: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x20f504u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_20f508:
    // 0x20f508: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20f508u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20f50c:
    // 0x20f50c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x20f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_20f510:
    // 0x20f510: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x20f510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_20f514:
    // 0x20f514: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x20f514u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_20f518:
    // 0x20f518: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x20f518u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_20f51c:
    // 0x20f51c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20f51cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20f520:
    // 0x20f520: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x20f520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_20f524:
    // 0x20f524: 0x320f809  jalr        $t9
label_20f528:
    if (ctx->pc == 0x20F528u) {
        ctx->pc = 0x20F528u;
            // 0x20f528: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x20F52Cu;
        goto label_20f52c;
    }
    ctx->pc = 0x20F524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20F52Cu);
        ctx->pc = 0x20F528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F524u;
            // 0x20f528: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F52Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F52Cu; }
            if (ctx->pc != 0x20F52Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20F52Cu;
label_20f52c:
    // 0x20f52c: 0x92a20690  lbu         $v0, 0x690($s5)
    ctx->pc = 0x20f52cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1680)));
label_20f530:
    // 0x20f530: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20f534:
    if (ctx->pc == 0x20F534u) {
        ctx->pc = 0x20F534u;
            // 0x20f534: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20F538u;
        goto label_20f538;
    }
    ctx->pc = 0x20F530u;
    {
        const bool branch_taken_0x20f530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F530u;
            // 0x20f534: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f530) {
            ctx->pc = 0x20F540u;
            goto label_20f540;
        }
    }
    ctx->pc = 0x20F538u;
label_20f538:
    // 0x20f538: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_20f53c:
    if (ctx->pc == 0x20F53Cu) {
        ctx->pc = 0x20F53Cu;
            // 0x20f53c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F540u;
        goto label_20f540;
    }
    ctx->pc = 0x20F538u;
    {
        const bool branch_taken_0x20f538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F538u;
            // 0x20f53c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f538) {
            ctx->pc = 0x20F7CCu;
            goto label_20f7cc;
        }
    }
    ctx->pc = 0x20F540u;
label_20f540:
    // 0x20f540: 0xc6a10674  lwc1        $f1, 0x674($s5)
    ctx->pc = 0x20f540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f544:
    // 0x20f544: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x20f544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_20f548:
    // 0x20f548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f54c:
    // 0x20f54c: 0x0  nop
    ctx->pc = 0x20f54cu;
    // NOP
label_20f550:
    // 0x20f550: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20f550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f554:
    // 0x20f554: 0x0  nop
    ctx->pc = 0x20f554u;
    // NOP
label_20f558:
    // 0x20f558: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_20f55c:
    if (ctx->pc == 0x20F55Cu) {
        ctx->pc = 0x20F55Cu;
            // 0x20f55c: 0x3c02419c  lui         $v0, 0x419C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16796 << 16));
        ctx->pc = 0x20F560u;
        goto label_20f560;
    }
    ctx->pc = 0x20F558u;
    {
        const bool branch_taken_0x20f558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F558u;
            // 0x20f55c: 0x3c02419c  lui         $v0, 0x419C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16796 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f558) {
            ctx->pc = 0x20F59Cu;
            goto label_20f59c;
        }
    }
    ctx->pc = 0x20F560u;
label_20f560:
    // 0x20f560: 0x8ea30684  lw          $v1, 0x684($s5)
    ctx->pc = 0x20f560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1668)));
label_20f564:
    // 0x20f564: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20f564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_20f568:
    // 0x20f568: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f56c:
    // 0x20f56c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x20f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20f570:
    // 0x20f570: 0xaea20684  sw          $v0, 0x684($s5)
    ctx->pc = 0x20f570u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1668), GPR_U32(ctx, 2));
label_20f574:
    // 0x20f574: 0xc6a20684  lwc1        $f2, 0x684($s5)
    ctx->pc = 0x20f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20f578:
    // 0x20f578: 0xc6a00674  lwc1        $f0, 0x674($s5)
    ctx->pc = 0x20f578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f57c:
    // 0x20f57c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x20f57cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_20f580:
    // 0x20f580: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x20f580u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_20f584:
    // 0x20f584: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20f584u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20f588:
    // 0x20f588: 0xe6a00674  swc1        $f0, 0x674($s5)
    ctx->pc = 0x20f588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1652), bits); }
label_20f58c:
    // 0x20f58c: 0xc6b50660  lwc1        $f21, 0x660($s5)
    ctx->pc = 0x20f58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20f590:
    // 0x20f590: 0xc6b40668  lwc1        $f20, 0x668($s5)
    ctx->pc = 0x20f590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20f594:
    // 0x20f594: 0x1000008d  b           . + 4 + (0x8D << 2)
label_20f598:
    if (ctx->pc == 0x20F598u) {
        ctx->pc = 0x20F598u;
            // 0x20f598: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F59Cu;
        goto label_20f59c;
    }
    ctx->pc = 0x20F594u;
    {
        const bool branch_taken_0x20f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F594u;
            // 0x20f598: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f594) {
            ctx->pc = 0x20F7CCu;
            goto label_20f7cc;
        }
    }
    ctx->pc = 0x20F59Cu;
label_20f59c:
    // 0x20f59c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20f59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_20f5a0:
    // 0x20f5a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f5a4:
    // 0x20f5a4: 0x0  nop
    ctx->pc = 0x20f5a4u;
    // NOP
label_20f5a8:
    // 0x20f5a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20f5a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f5ac:
    // 0x20f5ac: 0x0  nop
    ctx->pc = 0x20f5acu;
    // NOP
label_20f5b0:
    // 0x20f5b0: 0x45000086  bc1f        . + 4 + (0x86 << 2)
label_20f5b4:
    if (ctx->pc == 0x20F5B4u) {
        ctx->pc = 0x20F5B4u;
            // 0x20f5b4: 0x3c033e19  lui         $v1, 0x3E19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
        ctx->pc = 0x20F5B8u;
        goto label_20f5b8;
    }
    ctx->pc = 0x20F5B0u;
    {
        const bool branch_taken_0x20f5b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F5B0u;
            // 0x20f5b4: 0x3c033e19  lui         $v1, 0x3E19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5b0) {
            ctx->pc = 0x20F7CCu;
            goto label_20f7cc;
        }
    }
    ctx->pc = 0x20F5B8u;
label_20f5b8:
    // 0x20f5b8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x20f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_20f5bc:
    // 0x20f5bc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x20f5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_20f5c0:
    // 0x20f5c0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x20f5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_20f5c4:
    // 0x20f5c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20f5c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f5c8:
    // 0x20f5c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20f5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20f5cc:
    // 0x20f5cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20f5ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20f5d0:
    // 0x20f5d0: 0xe6a00674  swc1        $f0, 0x674($s5)
    ctx->pc = 0x20f5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1652), bits); }
label_20f5d4:
    // 0x20f5d4: 0xc6a10660  lwc1        $f1, 0x660($s5)
    ctx->pc = 0x20f5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f5d8:
    // 0x20f5d8: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x20f5d8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_20f5dc:
    // 0x20f5dc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x20f5dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_20f5e0:
    // 0x20f5e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20f5e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f5e4:
    // 0x20f5e4: 0x0  nop
    ctx->pc = 0x20f5e4u;
    // NOP
label_20f5e8:
    // 0x20f5e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_20f5ec:
    if (ctx->pc == 0x20F5ECu) {
        ctx->pc = 0x20F5ECu;
            // 0x20f5ec: 0xe6a10660  swc1        $f1, 0x660($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1632), bits); }
        ctx->pc = 0x20F5F0u;
        goto label_20f5f0;
    }
    ctx->pc = 0x20F5E8u;
    {
        const bool branch_taken_0x20f5e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F5E8u;
            // 0x20f5ec: 0xe6a10660  swc1        $f1, 0x660($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5e8) {
            ctx->pc = 0x20F5F4u;
            goto label_20f5f4;
        }
    }
    ctx->pc = 0x20F5F0u;
label_20f5f0:
    // 0x20f5f0: 0xe6a00660  swc1        $f0, 0x660($s5)
    ctx->pc = 0x20f5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1632), bits); }
label_20f5f4:
    // 0x20f5f4: 0xc6a20668  lwc1        $f2, 0x668($s5)
    ctx->pc = 0x20f5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20f5f8:
    // 0x20f5f8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x20f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_20f5fc:
    // 0x20f5fc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x20f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_20f600:
    // 0x20f600: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f604:
    // 0x20f604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f608:
    // 0x20f608: 0x0  nop
    ctx->pc = 0x20f608u;
    // NOP
label_20f60c:
    // 0x20f60c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x20f60cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_20f610:
    // 0x20f610: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20f610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f614:
    // 0x20f614: 0x0  nop
    ctx->pc = 0x20f614u;
    // NOP
label_20f618:
    // 0x20f618: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_20f61c:
    if (ctx->pc == 0x20F61Cu) {
        ctx->pc = 0x20F61Cu;
            // 0x20f61c: 0xe6a10668  swc1        $f1, 0x668($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1640), bits); }
        ctx->pc = 0x20F620u;
        goto label_20f620;
    }
    ctx->pc = 0x20F618u;
    {
        const bool branch_taken_0x20f618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F618u;
            // 0x20f61c: 0xe6a10668  swc1        $f1, 0x668($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f618) {
            ctx->pc = 0x20F624u;
            goto label_20f624;
        }
    }
    ctx->pc = 0x20F620u;
label_20f620:
    // 0x20f620: 0xe6a00668  swc1        $f0, 0x668($s5)
    ctx->pc = 0x20f620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1640), bits); }
label_20f624:
    // 0x20f624: 0xc6a20688  lwc1        $f2, 0x688($s5)
    ctx->pc = 0x20f624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20f628:
    // 0x20f628: 0x3c023c8b  lui         $v0, 0x3C8B
    ctx->pc = 0x20f628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15499 << 16));
label_20f62c:
    // 0x20f62c: 0x34424396  ori         $v0, $v0, 0x4396
    ctx->pc = 0x20f62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17302);
label_20f630:
    // 0x20f630: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f634:
    // 0x20f634: 0xc6b50660  lwc1        $f21, 0x660($s5)
    ctx->pc = 0x20f634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20f638:
    // 0x20f638: 0xc6b40668  lwc1        $f20, 0x668($s5)
    ctx->pc = 0x20f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20f63c:
    // 0x20f63c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20f63cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f640:
    // 0x20f640: 0x0  nop
    ctx->pc = 0x20f640u;
    // NOP
label_20f644:
    // 0x20f644: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x20f644u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_20f648:
    // 0x20f648: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20f648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f64c:
    // 0x20f64c: 0x0  nop
    ctx->pc = 0x20f64cu;
    // NOP
label_20f650:
    // 0x20f650: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_20f654:
    if (ctx->pc == 0x20F654u) {
        ctx->pc = 0x20F654u;
            // 0x20f654: 0xe6a10688  swc1        $f1, 0x688($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1672), bits); }
        ctx->pc = 0x20F658u;
        goto label_20f658;
    }
    ctx->pc = 0x20F650u;
    {
        const bool branch_taken_0x20f650 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F650u;
            // 0x20f654: 0xe6a10688  swc1        $f1, 0x688($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f650) {
            ctx->pc = 0x20F65Cu;
            goto label_20f65c;
        }
    }
    ctx->pc = 0x20F658u;
label_20f658:
    // 0x20f658: 0xe6a00688  swc1        $f0, 0x688($s5)
    ctx->pc = 0x20f658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1672), bits); }
label_20f65c:
    // 0x20f65c: 0xc6a2068c  lwc1        $f2, 0x68C($s5)
    ctx->pc = 0x20f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20f660:
    // 0x20f660: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x20f660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
label_20f664:
    // 0x20f664: 0x34437750  ori         $v1, $v0, 0x7750
    ctx->pc = 0x20f664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_20f668:
    // 0x20f668: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20f668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f66c:
    // 0x20f66c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x20f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_20f670:
    // 0x20f670: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20f670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20f674:
    // 0x20f674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f678:
    // 0x20f678: 0x0  nop
    ctx->pc = 0x20f678u;
    // NOP
label_20f67c:
    // 0x20f67c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x20f67cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_20f680:
    // 0x20f680: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20f680u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f684:
    // 0x20f684: 0x0  nop
    ctx->pc = 0x20f684u;
    // NOP
label_20f688:
    // 0x20f688: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_20f68c:
    if (ctx->pc == 0x20F68Cu) {
        ctx->pc = 0x20F68Cu;
            // 0x20f68c: 0xe6a1068c  swc1        $f1, 0x68C($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1676), bits); }
        ctx->pc = 0x20F690u;
        goto label_20f690;
    }
    ctx->pc = 0x20F688u;
    {
        const bool branch_taken_0x20f688 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F688u;
            // 0x20f68c: 0xe6a1068c  swc1        $f1, 0x68C($s5) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f688) {
            ctx->pc = 0x20F6A8u;
            goto label_20f6a8;
        }
    }
    ctx->pc = 0x20F690u;
label_20f690:
    // 0x20f690: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x20f690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_20f694:
    // 0x20f694: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20f694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20f698:
    // 0x20f698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f69c:
    // 0x20f69c: 0x0  nop
    ctx->pc = 0x20f69cu;
    // NOP
label_20f6a0:
    // 0x20f6a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20f6a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20f6a4:
    // 0x20f6a4: 0xe6a0068c  swc1        $f0, 0x68C($s5)
    ctx->pc = 0x20f6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1676), bits); }
label_20f6a8:
    // 0x20f6a8: 0xc6b60688  lwc1        $f22, 0x688($s5)
    ctx->pc = 0x20f6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_20f6ac:
    // 0x20f6ac: 0xc047a42  jal         func_11E908
label_20f6b0:
    if (ctx->pc == 0x20F6B0u) {
        ctx->pc = 0x20F6B0u;
            // 0x20f6b0: 0xc6ac068c  lwc1        $f12, 0x68C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20F6B4u;
        goto label_20f6b4;
    }
    ctx->pc = 0x20F6ACu;
    SET_GPR_U32(ctx, 31, 0x20F6B4u);
    ctx->pc = 0x20F6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F6ACu;
            // 0x20f6b0: 0xc6ac068c  lwc1        $f12, 0x68C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F6B4u; }
        if (ctx->pc != 0x20F6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F6B4u; }
        if (ctx->pc != 0x20F6B4u) { return; }
    }
    ctx->pc = 0x20F6B4u;
label_20f6b4:
    // 0x20f6b4: 0x4600b01a  mula.s      $f22, $f0
    ctx->pc = 0x20f6b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_20f6b8:
    // 0x20f6b8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_20f6bc:
    // 0x20f6bc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x20f6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f6c0:
    // 0x20f6c0: 0x3c110035  lui         $s1, 0x35
    ctx->pc = 0x20f6c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)53 << 16));
label_20f6c4:
    // 0x20f6c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20f6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20f6c8:
    // 0x20f6c8: 0x2631f4b0  addiu       $s1, $s1, -0xB50
    ctx->pc = 0x20f6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294964400));
label_20f6cc:
    // 0x20f6cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20f6ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20f6d0:
    // 0x20f6d0: 0x4616085d  msub.s      $f1, $f1, $f22
    ctx->pc = 0x20f6d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[22]));
label_20f6d4:
    // 0x20f6d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20f6d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20f6d8:
    // 0x20f6d8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x20f6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_20f6dc:
    // 0x20f6dc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x20f6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f6e0:
    // 0x20f6e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20f6e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20f6e4:
    // 0x20f6e4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x20f6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_20f6e8:
    // 0x20f6e8: 0xc6a10670  lwc1        $f1, 0x670($s5)
    ctx->pc = 0x20f6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f6ec:
    // 0x20f6ec: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x20f6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f6f0:
    // 0x20f6f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20f6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20f6f4:
    // 0x20f6f4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x20f6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_20f6f8:
    // 0x20f6f8: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x20f6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f6fc:
    // 0x20f6fc: 0xc6a00674  lwc1        $f0, 0x674($s5)
    ctx->pc = 0x20f6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f700:
    // 0x20f700: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20f700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20f704:
    // 0x20f704: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x20f704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_20f708:
    // 0x20f708: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x20f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f70c:
    // 0x20f70c: 0xc6a00678  lwc1        $f0, 0x678($s5)
    ctx->pc = 0x20f70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f710:
    // 0x20f710: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20f710u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20f714:
    // 0x20f714: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x20f714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_20f718:
    // 0x20f718: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x20f718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f71c:
    // 0x20f71c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x20f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20f720:
    // 0x20f720: 0xc6a0010c  lwc1        $f0, 0x10C($s5)
    ctx->pc = 0x20f720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f724:
    // 0x20f724: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20f724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f728:
    // 0x20f728: 0xc04c018  jal         func_130060
label_20f72c:
    if (ctx->pc == 0x20F72Cu) {
        ctx->pc = 0x20F72Cu;
            // 0x20f72c: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x20F730u;
        goto label_20f730;
    }
    ctx->pc = 0x20F728u;
    SET_GPR_U32(ctx, 31, 0x20F730u);
    ctx->pc = 0x20F72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F728u;
            // 0x20f72c: 0x46000d80  add.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F730u; }
        if (ctx->pc != 0x20F730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F730u; }
        if (ctx->pc != 0x20F730u) { return; }
    }
    ctx->pc = 0x20F730u;
label_20f730:
    // 0x20f730: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x20f730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f734:
    // 0x20f734: 0x0  nop
    ctx->pc = 0x20f734u;
    // NOP
label_20f738:
    // 0x20f738: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_20f73c:
    if (ctx->pc == 0x20F73Cu) {
        ctx->pc = 0x20F73Cu;
            // 0x20f73c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x20F740u;
        goto label_20f740;
    }
    ctx->pc = 0x20F738u;
    {
        const bool branch_taken_0x20f738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F738u;
            // 0x20f73c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f738) {
            ctx->pc = 0x20F7BCu;
            goto label_20f7bc;
        }
    }
    ctx->pc = 0x20F740u;
label_20f740:
    // 0x20f740: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x20f740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20f744:
    // 0x20f744: 0xc041c3e  jal         func_1070F8
label_20f748:
    if (ctx->pc == 0x20F748u) {
        ctx->pc = 0x20F748u;
            // 0x20f748: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F74Cu;
        goto label_20f74c;
    }
    ctx->pc = 0x20F744u;
    SET_GPR_U32(ctx, 31, 0x20F74Cu);
    ctx->pc = 0x20F748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F744u;
            // 0x20f748: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F74Cu; }
        if (ctx->pc != 0x20F74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F74Cu; }
        if (ctx->pc != 0x20F74Cu) { return; }
    }
    ctx->pc = 0x20F74Cu;
label_20f74c:
    // 0x20f74c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20f750:
    // 0x20f750: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x20f750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_20f754:
    // 0x20f754: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x20f754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_20f758:
    // 0x20f758: 0xc041be0  jal         func_106F80
label_20f75c:
    if (ctx->pc == 0x20F75Cu) {
        ctx->pc = 0x20F75Cu;
            // 0x20f75c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F760u;
        goto label_20f760;
    }
    ctx->pc = 0x20F758u;
    SET_GPR_U32(ctx, 31, 0x20F760u);
    ctx->pc = 0x20F75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F758u;
            // 0x20f75c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F760u; }
        if (ctx->pc != 0x20F760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F760u; }
        if (ctx->pc != 0x20F760u) { return; }
    }
    ctx->pc = 0x20F760u;
label_20f760:
    // 0x20f760: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x20f760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_20f764:
    // 0x20f764: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x20f764u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_20f768:
    // 0x20f768: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x20f768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_20f76c:
    // 0x20f76c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x20f76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20f770:
    // 0x20f770: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x20f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f774:
    // 0x20f774: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x20f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f778:
    // 0x20f778: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x20f778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_20f77c:
    // 0x20f77c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20f77cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20f780:
    // 0x20f780: 0xe6a00670  swc1        $f0, 0x670($s5)
    ctx->pc = 0x20f780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1648), bits); }
label_20f784:
    // 0x20f784: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x20f784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f788:
    // 0x20f788: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x20f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f78c:
    // 0x20f78c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x20f78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20f790:
    // 0x20f790: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20f794:
    // 0x20f794: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x20f794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20f798:
    // 0x20f798: 0xe6a00674  swc1        $f0, 0x674($s5)
    ctx->pc = 0x20f798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1652), bits); }
label_20f79c:
    // 0x20f79c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x20f79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f7a0:
    // 0x20f7a0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x20f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f7a4:
    // 0x20f7a4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x20f7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20f7a8:
    // 0x20f7a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20f7a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20f7ac:
    // 0x20f7ac: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x20f7acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20f7b0:
    // 0x20f7b0: 0xe6a00678  swc1        $f0, 0x678($s5)
    ctx->pc = 0x20f7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1656), bits); }
label_20f7b4:
    // 0x20f7b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_20f7b8:
    if (ctx->pc == 0x20F7B8u) {
        ctx->pc = 0x20F7B8u;
            // 0x20f7b8: 0xaea00688  sw          $zero, 0x688($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1672), GPR_U32(ctx, 0));
        ctx->pc = 0x20F7BCu;
        goto label_20f7bc;
    }
    ctx->pc = 0x20F7B4u;
    {
        const bool branch_taken_0x20f7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F7B4u;
            // 0x20f7b8: 0xaea00688  sw          $zero, 0x688($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7b4) {
            ctx->pc = 0x20F7CCu;
            goto label_20f7cc;
        }
    }
    ctx->pc = 0x20F7BCu;
label_20f7bc:
    // 0x20f7bc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20f7bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20f7c0:
    // 0x20f7c0: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x20f7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_20f7c4:
    // 0x20f7c4: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_20f7c8:
    if (ctx->pc == 0x20F7C8u) {
        ctx->pc = 0x20F7C8u;
            // 0x20f7c8: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x20F7CCu;
        goto label_20f7cc;
    }
    ctx->pc = 0x20F7C4u;
    {
        const bool branch_taken_0x20f7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F7C4u;
            // 0x20f7c8: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f7c4) {
            ctx->pc = 0x20F718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f718;
        }
    }
    ctx->pc = 0x20F7CCu;
label_20f7cc:
    // 0x20f7cc: 0x0  nop
    ctx->pc = 0x20f7ccu;
    // NOP
label_20f7d0:
    // 0x20f7d0: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x20f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_20f7d4:
    // 0x20f7d4: 0xc6a10670  lwc1        $f1, 0x670($s5)
    ctx->pc = 0x20f7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f7d8:
    // 0x20f7d8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x20f7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_20f7dc:
    // 0x20f7dc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x20f7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f7e0:
    // 0x20f7e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20f7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f7e4:
    // 0x20f7e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x20f7e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20f7e8:
    // 0x20f7e8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x20f7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_20f7ec:
    // 0x20f7ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20f7ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20f7f0:
    // 0x20f7f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20f7f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20f7f4:
    // 0x20f7f4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x20f7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_20f7f8:
    // 0x20f7f8: 0xc6a10674  lwc1        $f1, 0x674($s5)
    ctx->pc = 0x20f7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f7fc:
    // 0x20f7fc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x20f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f800:
    // 0x20f800: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20f800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20f804:
    // 0x20f804: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x20f804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_20f808:
    // 0x20f808: 0xc6a10678  lwc1        $f1, 0x678($s5)
    ctx->pc = 0x20f808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f80c:
    // 0x20f80c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x20f80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f810:
    // 0x20f810: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20f810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20f814:
    // 0x20f814: 0xc083258  jal         func_20C960
label_20f818:
    if (ctx->pc == 0x20F818u) {
        ctx->pc = 0x20F818u;
            // 0x20f818: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->pc = 0x20F81Cu;
        goto label_20f81c;
    }
    ctx->pc = 0x20F814u;
    SET_GPR_U32(ctx, 31, 0x20F81Cu);
    ctx->pc = 0x20F818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F814u;
            // 0x20f818: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x20C960u;
    if (runtime->hasFunction(0x20C960u)) {
        auto targetFn = runtime->lookupFunction(0x20C960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F81Cu; }
        if (ctx->pc != 0x20F81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_aquarium_limmit_check__FPffif_0x20c960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F81Cu; }
        if (ctx->pc != 0x20F81Cu) { return; }
    }
    ctx->pc = 0x20F81Cu;
label_20f81c:
    // 0x20f81c: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x20f81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20f820:
    // 0x20f820: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x20f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_20f824:
    // 0x20f824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20f824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20f828:
    // 0x20f828: 0x0  nop
    ctx->pc = 0x20f828u;
    // NOP
label_20f82c:
    // 0x20f82c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x20f82cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20f830:
    // 0x20f830: 0x0  nop
    ctx->pc = 0x20f830u;
    // NOP
label_20f834:
    // 0x20f834: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_20f838:
    if (ctx->pc == 0x20F838u) {
        ctx->pc = 0x20F838u;
            // 0x20f838: 0x92a30690  lbu         $v1, 0x690($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1680)));
        ctx->pc = 0x20F83Cu;
        goto label_20f83c;
    }
    ctx->pc = 0x20F834u;
    {
        const bool branch_taken_0x20f834 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20F838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F834u;
            // 0x20f838: 0x92a30690  lbu         $v1, 0x690($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f834) {
            ctx->pc = 0x20F858u;
            goto label_20f858;
        }
    }
    ctx->pc = 0x20F83Cu;
label_20f83c:
    // 0x20f83c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f840:
    // 0x20f840: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_20f844:
    if (ctx->pc == 0x20F844u) {
        ctx->pc = 0x20F844u;
            // 0x20f844: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x20F848u;
        goto label_20f848;
    }
    ctx->pc = 0x20F840u;
    {
        const bool branch_taken_0x20f840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20F844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F840u;
            // 0x20f844: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f840) {
            ctx->pc = 0x20F854u;
            goto label_20f854;
        }
    }
    ctx->pc = 0x20F848u;
label_20f848:
    // 0x20f848: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20f848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20f84c:
    // 0x20f84c: 0x10000002  b           . + 4 + (0x2 << 2)
label_20f850:
    if (ctx->pc == 0x20F850u) {
        ctx->pc = 0x20F850u;
            // 0x20f850: 0xa2a20690  sb          $v0, 0x690($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1680), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x20F854u;
        goto label_20f854;
    }
    ctx->pc = 0x20F84Cu;
    {
        const bool branch_taken_0x20f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F84Cu;
            // 0x20f850: 0xa2a20690  sb          $v0, 0x690($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1680), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f84c) {
            ctx->pc = 0x20F858u;
            goto label_20f858;
        }
    }
    ctx->pc = 0x20F854u;
label_20f854:
    // 0x20f854: 0xa2a20690  sb          $v0, 0x690($s5)
    ctx->pc = 0x20f854u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1680), (uint8_t)GPR_U32(ctx, 2));
label_20f858:
    // 0x20f858: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x20f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f85c:
    // 0x20f85c: 0x27b00098  addiu       $s0, $sp, 0x98
    ctx->pc = 0x20f85cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_20f860:
    // 0x20f860: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x20f860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_20f864:
    // 0x20f864: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x20f864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_20f868:
    // 0x20f868: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x20f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20f86c:
    // 0x20f86c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x20f86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_20f870:
    // 0x20f870: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x20f870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_20f874:
    // 0x20f874: 0xc04c374  jal         func_130DD0
label_20f878:
    if (ctx->pc == 0x20F878u) {
        ctx->pc = 0x20F878u;
            // 0x20f878: 0xc7ac0090  lwc1        $f12, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20F87Cu;
        goto label_20f87c;
    }
    ctx->pc = 0x20F874u;
    SET_GPR_U32(ctx, 31, 0x20F87Cu);
    ctx->pc = 0x20F878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F874u;
            // 0x20f878: 0xc7ac0090  lwc1        $f12, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F87Cu; }
        if (ctx->pc != 0x20F87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F87Cu; }
        if (ctx->pc != 0x20F87Cu) { return; }
    }
    ctx->pc = 0x20F87Cu;
label_20f87c:
    // 0x20f87c: 0xc04c374  jal         func_130DD0
label_20f880:
    if (ctx->pc == 0x20F880u) {
        ctx->pc = 0x20F880u;
            // 0x20f880: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20F884u;
        goto label_20f884;
    }
    ctx->pc = 0x20F87Cu;
    SET_GPR_U32(ctx, 31, 0x20F884u);
    ctx->pc = 0x20F880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F87Cu;
            // 0x20f880: 0xc60c0000  lwc1        $f12, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F884u; }
        if (ctx->pc != 0x20F884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F884u; }
        if (ctx->pc != 0x20F884u) { return; }
    }
    ctx->pc = 0x20F884u;
label_20f884:
    // 0x20f884: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x20f884u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_20f888:
    // 0x20f888: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20f888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20f88c:
    // 0x20f88c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x20f88cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_20f890:
    // 0x20f890: 0x320f809  jalr        $t9
label_20f894:
    if (ctx->pc == 0x20F894u) {
        ctx->pc = 0x20F894u;
            // 0x20f894: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x20F898u;
        goto label_20f898;
    }
    ctx->pc = 0x20F890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20F898u);
        ctx->pc = 0x20F894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F890u;
            // 0x20f894: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F898u; }
            if (ctx->pc != 0x20F898u) { return; }
        }
        }
    }
    ctx->pc = 0x20F898u;
label_20f898:
    // 0x20f898: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x20f898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_20f89c:
    // 0x20f89c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x20f89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20f8a0:
    // 0x20f8a0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x20f8a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_20f8a4:
    // 0x20f8a4: 0x320f809  jalr        $t9
label_20f8a8:
    if (ctx->pc == 0x20F8A8u) {
        ctx->pc = 0x20F8A8u;
            // 0x20f8a8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x20F8ACu;
        goto label_20f8ac;
    }
    ctx->pc = 0x20F8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20F8ACu);
        ctx->pc = 0x20F8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F8A4u;
            // 0x20f8a8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20F8ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20F8ACu; }
            if (ctx->pc != 0x20F8ACu) { return; }
        }
        }
    }
    ctx->pc = 0x20F8ACu;
label_20f8ac:
    // 0x20f8ac: 0xc05cfb4  jal         func_173ED0
label_20f8b0:
    if (ctx->pc == 0x20F8B0u) {
        ctx->pc = 0x20F8B0u;
            // 0x20f8b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20F8B4u;
        goto label_20f8b4;
    }
    ctx->pc = 0x20F8ACu;
    SET_GPR_U32(ctx, 31, 0x20F8B4u);
    ctx->pc = 0x20F8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20F8ACu;
            // 0x20f8b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173ED0u;
    if (runtime->hasFunction(0x173ED0u)) {
        auto targetFn = runtime->lookupFunction(0x173ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F8B4u; }
        if (ctx->pc != 0x20F8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CCharacter2Fv_0x173ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20F8B4u; }
        if (ctx->pc != 0x20F8B4u) { return; }
    }
    ctx->pc = 0x20F8B4u;
label_20f8b4:
    // 0x20f8b4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x20f8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_20f8b8:
    // 0x20f8b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x20f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_20f8bc:
    // 0x20f8bc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x20f8bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20f8c0:
    // 0x20f8c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x20f8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20f8c4:
    // 0x20f8c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20f8c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20f8c8:
    // 0x20f8c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20f8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20f8cc:
    // 0x20f8cc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20f8ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20f8d0:
    // 0x20f8d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20f8d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20f8d4:
    // 0x20f8d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20f8d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20f8d8:
    // 0x20f8d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20f8d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f8dc:
    // 0x20f8dc: 0x3e00008  jr          $ra
label_20f8e0:
    if (ctx->pc == 0x20F8E0u) {
        ctx->pc = 0x20F8E0u;
            // 0x20f8e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x20F8E4u;
        goto label_fallthrough_0x20f8dc;
    }
    ctx->pc = 0x20F8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20F8DCu;
            // 0x20f8e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20f8dc:
    ctx->pc = 0x20F8E4u;
}
