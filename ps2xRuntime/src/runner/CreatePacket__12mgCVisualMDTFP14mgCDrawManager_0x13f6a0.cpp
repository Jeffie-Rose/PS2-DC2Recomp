#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatePacket__12mgCVisualMDTFP14mgCDrawManager
// Address: 0x13f6a0 - 0x13f91c
void CreatePacket__12mgCVisualMDTFP14mgCDrawManager_0x13f6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatePacket__12mgCVisualMDTFP14mgCDrawManager_0x13f6a0");
#endif

    switch (ctx->pc) {
        case 0x13f6a0u: goto label_13f6a0;
        case 0x13f6a4u: goto label_13f6a4;
        case 0x13f6a8u: goto label_13f6a8;
        case 0x13f6acu: goto label_13f6ac;
        case 0x13f6b0u: goto label_13f6b0;
        case 0x13f6b4u: goto label_13f6b4;
        case 0x13f6b8u: goto label_13f6b8;
        case 0x13f6bcu: goto label_13f6bc;
        case 0x13f6c0u: goto label_13f6c0;
        case 0x13f6c4u: goto label_13f6c4;
        case 0x13f6c8u: goto label_13f6c8;
        case 0x13f6ccu: goto label_13f6cc;
        case 0x13f6d0u: goto label_13f6d0;
        case 0x13f6d4u: goto label_13f6d4;
        case 0x13f6d8u: goto label_13f6d8;
        case 0x13f6dcu: goto label_13f6dc;
        case 0x13f6e0u: goto label_13f6e0;
        case 0x13f6e4u: goto label_13f6e4;
        case 0x13f6e8u: goto label_13f6e8;
        case 0x13f6ecu: goto label_13f6ec;
        case 0x13f6f0u: goto label_13f6f0;
        case 0x13f6f4u: goto label_13f6f4;
        case 0x13f6f8u: goto label_13f6f8;
        case 0x13f6fcu: goto label_13f6fc;
        case 0x13f700u: goto label_13f700;
        case 0x13f704u: goto label_13f704;
        case 0x13f708u: goto label_13f708;
        case 0x13f70cu: goto label_13f70c;
        case 0x13f710u: goto label_13f710;
        case 0x13f714u: goto label_13f714;
        case 0x13f718u: goto label_13f718;
        case 0x13f71cu: goto label_13f71c;
        case 0x13f720u: goto label_13f720;
        case 0x13f724u: goto label_13f724;
        case 0x13f728u: goto label_13f728;
        case 0x13f72cu: goto label_13f72c;
        case 0x13f730u: goto label_13f730;
        case 0x13f734u: goto label_13f734;
        case 0x13f738u: goto label_13f738;
        case 0x13f73cu: goto label_13f73c;
        case 0x13f740u: goto label_13f740;
        case 0x13f744u: goto label_13f744;
        case 0x13f748u: goto label_13f748;
        case 0x13f74cu: goto label_13f74c;
        case 0x13f750u: goto label_13f750;
        case 0x13f754u: goto label_13f754;
        case 0x13f758u: goto label_13f758;
        case 0x13f75cu: goto label_13f75c;
        case 0x13f760u: goto label_13f760;
        case 0x13f764u: goto label_13f764;
        case 0x13f768u: goto label_13f768;
        case 0x13f76cu: goto label_13f76c;
        case 0x13f770u: goto label_13f770;
        case 0x13f774u: goto label_13f774;
        case 0x13f778u: goto label_13f778;
        case 0x13f77cu: goto label_13f77c;
        case 0x13f780u: goto label_13f780;
        case 0x13f784u: goto label_13f784;
        case 0x13f788u: goto label_13f788;
        case 0x13f78cu: goto label_13f78c;
        case 0x13f790u: goto label_13f790;
        case 0x13f794u: goto label_13f794;
        case 0x13f798u: goto label_13f798;
        case 0x13f79cu: goto label_13f79c;
        case 0x13f7a0u: goto label_13f7a0;
        case 0x13f7a4u: goto label_13f7a4;
        case 0x13f7a8u: goto label_13f7a8;
        case 0x13f7acu: goto label_13f7ac;
        case 0x13f7b0u: goto label_13f7b0;
        case 0x13f7b4u: goto label_13f7b4;
        case 0x13f7b8u: goto label_13f7b8;
        case 0x13f7bcu: goto label_13f7bc;
        case 0x13f7c0u: goto label_13f7c0;
        case 0x13f7c4u: goto label_13f7c4;
        case 0x13f7c8u: goto label_13f7c8;
        case 0x13f7ccu: goto label_13f7cc;
        case 0x13f7d0u: goto label_13f7d0;
        case 0x13f7d4u: goto label_13f7d4;
        case 0x13f7d8u: goto label_13f7d8;
        case 0x13f7dcu: goto label_13f7dc;
        case 0x13f7e0u: goto label_13f7e0;
        case 0x13f7e4u: goto label_13f7e4;
        case 0x13f7e8u: goto label_13f7e8;
        case 0x13f7ecu: goto label_13f7ec;
        case 0x13f7f0u: goto label_13f7f0;
        case 0x13f7f4u: goto label_13f7f4;
        case 0x13f7f8u: goto label_13f7f8;
        case 0x13f7fcu: goto label_13f7fc;
        case 0x13f800u: goto label_13f800;
        case 0x13f804u: goto label_13f804;
        case 0x13f808u: goto label_13f808;
        case 0x13f80cu: goto label_13f80c;
        case 0x13f810u: goto label_13f810;
        case 0x13f814u: goto label_13f814;
        case 0x13f818u: goto label_13f818;
        case 0x13f81cu: goto label_13f81c;
        case 0x13f820u: goto label_13f820;
        case 0x13f824u: goto label_13f824;
        case 0x13f828u: goto label_13f828;
        case 0x13f82cu: goto label_13f82c;
        case 0x13f830u: goto label_13f830;
        case 0x13f834u: goto label_13f834;
        case 0x13f838u: goto label_13f838;
        case 0x13f83cu: goto label_13f83c;
        case 0x13f840u: goto label_13f840;
        case 0x13f844u: goto label_13f844;
        case 0x13f848u: goto label_13f848;
        case 0x13f84cu: goto label_13f84c;
        case 0x13f850u: goto label_13f850;
        case 0x13f854u: goto label_13f854;
        case 0x13f858u: goto label_13f858;
        case 0x13f85cu: goto label_13f85c;
        case 0x13f860u: goto label_13f860;
        case 0x13f864u: goto label_13f864;
        case 0x13f868u: goto label_13f868;
        case 0x13f86cu: goto label_13f86c;
        case 0x13f870u: goto label_13f870;
        case 0x13f874u: goto label_13f874;
        case 0x13f878u: goto label_13f878;
        case 0x13f87cu: goto label_13f87c;
        case 0x13f880u: goto label_13f880;
        case 0x13f884u: goto label_13f884;
        case 0x13f888u: goto label_13f888;
        case 0x13f88cu: goto label_13f88c;
        case 0x13f890u: goto label_13f890;
        case 0x13f894u: goto label_13f894;
        case 0x13f898u: goto label_13f898;
        case 0x13f89cu: goto label_13f89c;
        case 0x13f8a0u: goto label_13f8a0;
        case 0x13f8a4u: goto label_13f8a4;
        case 0x13f8a8u: goto label_13f8a8;
        case 0x13f8acu: goto label_13f8ac;
        case 0x13f8b0u: goto label_13f8b0;
        case 0x13f8b4u: goto label_13f8b4;
        case 0x13f8b8u: goto label_13f8b8;
        case 0x13f8bcu: goto label_13f8bc;
        case 0x13f8c0u: goto label_13f8c0;
        case 0x13f8c4u: goto label_13f8c4;
        case 0x13f8c8u: goto label_13f8c8;
        case 0x13f8ccu: goto label_13f8cc;
        case 0x13f8d0u: goto label_13f8d0;
        case 0x13f8d4u: goto label_13f8d4;
        case 0x13f8d8u: goto label_13f8d8;
        case 0x13f8dcu: goto label_13f8dc;
        case 0x13f8e0u: goto label_13f8e0;
        case 0x13f8e4u: goto label_13f8e4;
        case 0x13f8e8u: goto label_13f8e8;
        case 0x13f8ecu: goto label_13f8ec;
        case 0x13f8f0u: goto label_13f8f0;
        case 0x13f8f4u: goto label_13f8f4;
        case 0x13f8f8u: goto label_13f8f8;
        case 0x13f8fcu: goto label_13f8fc;
        case 0x13f900u: goto label_13f900;
        case 0x13f904u: goto label_13f904;
        case 0x13f908u: goto label_13f908;
        case 0x13f90cu: goto label_13f90c;
        case 0x13f910u: goto label_13f910;
        case 0x13f914u: goto label_13f914;
        case 0x13f918u: goto label_13f918;
        default: break;
    }

    ctx->pc = 0x13f6a0u;

label_13f6a0:
    // 0x13f6a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x13f6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_13f6a4:
    // 0x13f6a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_13f6a8:
    // 0x13f6a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13f6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_13f6ac:
    // 0x13f6ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13f6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_13f6b0:
    // 0x13f6b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13f6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_13f6b4:
    // 0x13f6b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13f6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_13f6b8:
    // 0x13f6b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13f6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_13f6bc:
    // 0x13f6bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13f6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_13f6c0:
    // 0x13f6c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13f6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_13f6c4:
    // 0x13f6c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13f6c8:
    // 0x13f6c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13f6cc:
    // 0x13f6cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13f6ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13f6d0:
    // 0x13f6d0: 0xc04fa08  jal         func_13E820
label_13f6d4:
    if (ctx->pc == 0x13F6D4u) {
        ctx->pc = 0x13F6D4u;
            // 0x13f6d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F6D8u;
        goto label_13f6d8;
    }
    ctx->pc = 0x13F6D0u;
    SET_GPR_U32(ctx, 31, 0x13F6D8u);
    ctx->pc = 0x13F6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F6D0u;
            // 0x13f6d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E820u;
    if (runtime->hasFunction(0x13E820u)) {
        auto targetFn = runtime->lookupFunction(0x13E820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6D8u; }
        if (ctx->pc != 0x13F6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureManager__9mgCVisualFv_0x13e820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F6D8u; }
        if (ctx->pc != 0x13F6D8u) { return; }
    }
    ctx->pc = 0x13F6D8u;
label_13f6d8:
    // 0x13f6d8: 0x8e3e0064  lw          $fp, 0x64($s1)
    ctx->pc = 0x13f6d8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_13f6dc:
    // 0x13f6dc: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x13f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_13f6e0:
    // 0x13f6e0: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x13f6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_13f6e4:
    // 0x13f6e4: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x13f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_13f6e8:
    // 0x13f6e8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x13f6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_13f6ec:
    // 0x13f6ec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_13f6f0:
    // 0x13f6f0: 0x8e110048  lw          $s1, 0x48($s0)
    ctx->pc = 0x13f6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_13f6f4:
    // 0x13f6f4: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x13f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_13f6f8:
    // 0x13f6f8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x13f6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_13f6fc:
    // 0x13f6fc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13f6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_13f700:
    // 0x13f700: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13f700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13f704:
    // 0x13f704: 0x85b821  addu        $s7, $a0, $a1
    ctx->pc = 0x13f704u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_13f708:
    // 0x13f708: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x13f708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_13f70c:
    // 0x13f70c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x13f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_13f710:
    // 0x13f710: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x13f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_13f714:
    // 0x13f714: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13f714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_13f718:
    // 0x13f718: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13f71c:
    // 0x13f71c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x13f71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_13f720:
    // 0x13f720: 0x8fb200c0  lw          $s2, 0xC0($sp)
    ctx->pc = 0x13f720u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_13f724:
    // 0x13f724: 0x12200059  beqz        $s1, . + 4 + (0x59 << 2)
label_13f728:
    if (ctx->pc == 0x13F728u) {
        ctx->pc = 0x13F728u;
            // 0x13f728: 0xaf808758  sw          $zero, -0x78A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 0));
        ctx->pc = 0x13F72Cu;
        goto label_13f72c;
    }
    ctx->pc = 0x13F724u;
    {
        const bool branch_taken_0x13f724 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F724u;
            // 0x13f728: 0xaf808758  sw          $zero, -0x78A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f724) {
            ctx->pc = 0x13F88Cu;
            goto label_13f88c;
        }
    }
    ctx->pc = 0x13F72Cu;
label_13f72c:
    // 0x13f72c: 0xae330010  sw          $s3, 0x10($s1)
    ctx->pc = 0x13f72cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
label_13f730:
    // 0x13f730: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13f730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_13f734:
    // 0x13f734: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x13f734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_13f738:
    // 0x13f738: 0x2422825  or          $a1, $s2, $v0
    ctx->pc = 0x13f738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_13f73c:
    // 0x13f73c: 0x8fc20fcc  lw          $v0, 0xFCC($fp)
    ctx->pc = 0x13f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4044)));
label_13f740:
    // 0x13f740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f744:
    // 0x13f744: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x13f744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_13f748:
    // 0x13f748: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x13f748u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_13f74c:
    // 0x13f74c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13f74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_13f750:
    // 0x13f750: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x13f750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_13f754:
    // 0x13f754: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13f754u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_13f758:
    // 0x13f758: 0xc04f97c  jal         func_13E5F0
label_13f75c:
    if (ctx->pc == 0x13F75Cu) {
        ctx->pc = 0x13F75Cu;
            // 0x13f75c: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->pc = 0x13F760u;
        goto label_13f760;
    }
    ctx->pc = 0x13F758u;
    SET_GPR_U32(ctx, 31, 0x13F760u);
    ctx->pc = 0x13F75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F758u;
            // 0x13f75c: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E5F0u;
    if (runtime->hasFunction(0x13E5F0u)) {
        auto targetFn = runtime->lookupFunction(0x13E5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F760u; }
        if (ctx->pc != 0x13F760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMaterialRef__12mgCVisualMDTFP1P10mgMateriali_0x13e5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F760u; }
        if (ctx->pc != 0x13F760u) { return; }
    }
    ctx->pc = 0x13F760u;
label_13f760:
    // 0x13f760: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x13f760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_13f764:
    // 0x13f764: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13f764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13f768:
    // 0x13f768: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x13f768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_13f76c:
    // 0x13f76c: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x13f76cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_13f770:
    // 0x13f770: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x13f770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_13f774:
    // 0x13f774: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13f774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13f778:
    // 0x13f778: 0xac920004  sw          $s2, 0x4($a0)
    ctx->pc = 0x13f778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 18));
label_13f77c:
    // 0x13f77c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x13f77cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13f780:
    // 0x13f780: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x13f780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_13f784:
    // 0x13f784: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x13f784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_13f788:
    // 0x13f788: 0x8e340004  lw          $s4, 0x4($s1)
    ctx->pc = 0x13f788u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13f78c:
    // 0x13f78c: 0x12800029  beqz        $s4, . + 4 + (0x29 << 2)
label_13f790:
    if (ctx->pc == 0x13F790u) {
        ctx->pc = 0x13F790u;
            // 0x13f790: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x13F794u;
        goto label_13f794;
    }
    ctx->pc = 0x13F78Cu;
    {
        const bool branch_taken_0x13f78c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F78Cu;
            // 0x13f790: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f78c) {
            ctx->pc = 0x13F834u;
            goto label_13f834;
        }
    }
    ctx->pc = 0x13F794u;
label_13f794:
    // 0x13f794: 0x0  nop
    ctx->pc = 0x13f794u;
    // NOP
label_13f798:
    // 0x13f798: 0x96860000  lhu         $a2, 0x0($s4)
    ctx->pc = 0x13f798u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_13f79c:
    // 0x13f79c: 0x12c6000f  beq         $s6, $a2, . + 4 + (0xF << 2)
label_13f7a0:
    if (ctx->pc == 0x13F7A0u) {
        ctx->pc = 0x13F7A0u;
            // 0x13f7a0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->pc = 0x13F7A4u;
        goto label_13f7a4;
    }
    ctx->pc = 0x13F79Cu;
    {
        const bool branch_taken_0x13f79c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 6));
        ctx->pc = 0x13F7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F79Cu;
            // 0x13f7a0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f79c) {
            ctx->pc = 0x13F7DCu;
            goto label_13f7dc;
        }
    }
    ctx->pc = 0x13F7A4u;
label_13f7a4:
    // 0x13f7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f7a8:
    // 0x13f7a8: 0xc04f9d0  jal         func_13E740
label_13f7ac:
    if (ctx->pc == 0x13F7ACu) {
        ctx->pc = 0x13F7ACu;
            // 0x13f7ac: 0x2422825  or          $a1, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
        ctx->pc = 0x13F7B0u;
        goto label_13f7b0;
    }
    ctx->pc = 0x13F7A8u;
    SET_GPR_U32(ctx, 31, 0x13F7B0u);
    ctx->pc = 0x13F7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F7A8u;
            // 0x13f7ac: 0x2422825  or          $a1, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E740u;
    if (runtime->hasFunction(0x13E740u)) {
        auto targetFn = runtime->lookupFunction(0x13E740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F7B0u; }
        if (ctx->pc != 0x13F7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPModeRef__12mgCVisualMDTFP1i_0x13e740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F7B0u; }
        if (ctx->pc != 0x13F7B0u) { return; }
    }
    ctx->pc = 0x13F7B0u;
label_13f7b0:
    // 0x13f7b0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_13f7b4:
    // 0x13f7b4: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x13f7b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13f7b8:
    // 0x13f7b8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x13f7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_13f7bc:
    // 0x13f7bc: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x13f7bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_13f7c0:
    // 0x13f7c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13f7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_13f7c4:
    // 0x13f7c4: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x13f7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_13f7c8:
    // 0x13f7c8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_13f7cc:
    // 0x13f7cc: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x13f7ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_13f7d0:
    // 0x13f7d0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x13f7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_13f7d4:
    // 0x13f7d4: 0x96960000  lhu         $s6, 0x0($s4)
    ctx->pc = 0x13f7d4u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_13f7d8:
    // 0x13f7d8: 0x0  nop
    ctx->pc = 0x13f7d8u;
    // NOP
label_13f7dc:
    // 0x13f7dc: 0x0  nop
    ctx->pc = 0x13f7dcu;
    // NOP
label_13f7e0:
    // 0x13f7e0: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x13f7e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13f7e4:
    // 0x13f7e4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
label_13f7e8:
    // 0x13f7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13f7ec:
    // 0x13f7ec: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x13f7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_13f7f0:
    // 0x13f7f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13f7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_13f7f4:
    // 0x13f7f4: 0xaeb20004  sw          $s2, 0x4($s5)
    ctx->pc = 0x13f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
label_13f7f8:
    // 0x13f7f8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x13f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_13f7fc:
    // 0x13f7fc: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x13f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_13f800:
    // 0x13f800: 0x2422825  or          $a1, $s2, $v0
    ctx->pc = 0x13f800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_13f804:
    // 0x13f804: 0xaea0000c  sw          $zero, 0xC($s5)
    ctx->pc = 0x13f804u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 0));
label_13f808:
    // 0x13f808: 0x8e19001c  lw          $t9, 0x1C($s0)
    ctx->pc = 0x13f808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13f80c:
    // 0x13f80c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x13f80cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_13f810:
    // 0x13f810: 0x320f809  jalr        $t9
label_13f814:
    if (ctx->pc == 0x13F814u) {
        ctx->pc = 0x13F814u;
            // 0x13f814: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x13F818u;
        goto label_13f818;
    }
    ctx->pc = 0x13F810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13F818u);
        ctx->pc = 0x13F814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F810u;
            // 0x13f814: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13F818u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13F818u; }
            if (ctx->pc != 0x13F818u) { return; }
        }
        }
    }
    ctx->pc = 0x13F818u;
label_13f818:
    // 0x13f818: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13f818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13f81c:
    // 0x13f81c: 0x8e940010  lw          $s4, 0x10($s4)
    ctx->pc = 0x13f81cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_13f820:
    // 0x13f820: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x13f820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_13f824:
    // 0x13f824: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x13f824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_13f828:
    // 0x13f828: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x13f828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_13f82c:
    // 0x13f82c: 0x1680ffd9  bnez        $s4, . + 4 + (-0x27 << 2)
label_13f830:
    if (ctx->pc == 0x13F830u) {
        ctx->pc = 0x13F830u;
            // 0x13f830: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x13F834u;
        goto label_13f834;
    }
    ctx->pc = 0x13F82Cu;
    {
        const bool branch_taken_0x13f82c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F82Cu;
            // 0x13f830: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f82c) {
            ctx->pc = 0x13F794u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f794;
        }
    }
    ctx->pc = 0x13F834u;
label_13f834:
    // 0x13f834: 0x0  nop
    ctx->pc = 0x13f834u;
    // NOP
label_13f838:
    // 0x13f838: 0xc04f94c  jal         func_13E530
label_13f83c:
    if (ctx->pc == 0x13F83Cu) {
        ctx->pc = 0x13F83Cu;
            // 0x13f83c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13F840u;
        goto label_13f840;
    }
    ctx->pc = 0x13F838u;
    SET_GPR_U32(ctx, 31, 0x13F840u);
    ctx->pc = 0x13F83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F838u;
            // 0x13f83c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E530u;
    if (runtime->hasFunction(0x13E530u)) {
        auto targetFn = runtime->lookupFunction(0x13E530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F840u; }
        if (ctx->pc != 0x13F840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTexFlush_TagCnt__FPUi_0x13e530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F840u; }
        if (ctx->pc != 0x13F840u) { return; }
    }
    ctx->pc = 0x13F840u;
label_13f840:
    // 0x13f840: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x13f840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13f844:
    // 0x13f844: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x13f844u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_13f848:
    // 0x13f848: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x13f848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_13f84c:
    // 0x13f84c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x13f84cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13f850:
    // 0x13f850: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13f850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_13f854:
    // 0x13f854: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x13f854u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_13f858:
    // 0x13f858: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x13f858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_13f85c:
    // 0x13f85c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x13f85cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_13f860:
    // 0x13f860: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x13f860u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_13f864:
    // 0x13f864: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x13f864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13f868:
    // 0x13f868: 0x2621823  subu        $v1, $s3, $v0
    ctx->pc = 0x13f868u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_13f86c:
    // 0x13f86c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_13f870:
    if (ctx->pc == 0x13F870u) {
        ctx->pc = 0x13F870u;
            // 0x13f870: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x13F874u;
        goto label_13f874;
    }
    ctx->pc = 0x13F86Cu;
    {
        const bool branch_taken_0x13f86c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x13F870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F86Cu;
            // 0x13f870: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f86c) {
            ctx->pc = 0x13F87Cu;
            goto label_13f87c;
        }
    }
    ctx->pc = 0x13F874u;
label_13f874:
    // 0x13f874: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x13f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_13f878:
    // 0x13f878: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x13f878u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_13f87c:
    // 0x13f87c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x13f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_13f880:
    // 0x13f880: 0x8e310008  lw          $s1, 0x8($s1)
    ctx->pc = 0x13f880u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_13f884:
    // 0x13f884: 0x1620ffa9  bnez        $s1, . + 4 + (-0x57 << 2)
label_13f888:
    if (ctx->pc == 0x13F888u) {
        ctx->pc = 0x13F88Cu;
        goto label_13f88c;
    }
    ctx->pc = 0x13F884u;
    {
        const bool branch_taken_0x13f884 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f884) {
            ctx->pc = 0x13F72Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f72c;
        }
    }
    ctx->pc = 0x13F88Cu;
label_13f88c:
    // 0x13f88c: 0x0  nop
    ctx->pc = 0x13f88cu;
    // NOP
label_13f890:
    // 0x13f890: 0x2771023  subu        $v0, $s3, $s7
    ctx->pc = 0x13f890u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
label_13f894:
    // 0x13f894: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_13f898:
    if (ctx->pc == 0x13F898u) {
        ctx->pc = 0x13F898u;
            // 0x13f898: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->pc = 0x13F89Cu;
        goto label_13f89c;
    }
    ctx->pc = 0x13F894u;
    {
        const bool branch_taken_0x13f894 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x13F898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F894u;
            // 0x13f898: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f894) {
            ctx->pc = 0x13F8A4u;
            goto label_13f8a4;
        }
    }
    ctx->pc = 0x13F89Cu;
label_13f89c:
    // 0x13f89c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_13f8a0:
    // 0x13f8a0: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x13f8a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_13f8a4:
    // 0x13f8a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_13f8a8:
    // 0x13f8a8: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x13f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_13f8ac:
    // 0x13f8ac: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_13f8b0:
    // 0x13f8b0: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x13f8b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_13f8b4:
    // 0x13f8b4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x13f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_13f8b8:
    // 0x13f8b8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x13f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_13f8bc:
    // 0x13f8bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x13f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_13f8c0:
    // 0x13f8c0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_13f8c4:
    if (ctx->pc == 0x13F8C4u) {
        ctx->pc = 0x13F8C4u;
            // 0x13f8c4: 0xac450024  sw          $a1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 5));
        ctx->pc = 0x13F8C8u;
        goto label_13f8c8;
    }
    ctx->pc = 0x13F8C0u;
    {
        const bool branch_taken_0x13f8c0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x13F8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F8C0u;
            // 0x13f8c4: 0xac450024  sw          $a1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f8c0) {
            ctx->pc = 0x13F8D0u;
            goto label_13f8d0;
        }
    }
    ctx->pc = 0x13F8C8u;
label_13f8c8:
    // 0x13f8c8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x13f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_13f8cc:
    // 0x13f8cc: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x13f8ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_13f8d0:
    // 0x13f8d0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x13f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13f8d4:
    // 0x13f8d4: 0x17113c  dsll32      $v0, $s7, 4
    ctx->pc = 0x13f8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 4));
label_13f8d8:
    // 0x13f8d8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13f8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
label_13f8dc:
    // 0x13f8dc: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x13f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_13f8e0:
    // 0x13f8e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13f8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_13f8e4:
    // 0x13f8e4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x13f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_13f8e8:
    // 0x13f8e8: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x13f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
label_13f8ec:
    // 0x13f8ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13f8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_13f8f0:
    // 0x13f8f0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13f8f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13f8f4:
    // 0x13f8f4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13f8f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13f8f8:
    // 0x13f8f8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13f8f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_13f8fc:
    // 0x13f8fc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13f8fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13f900:
    // 0x13f900: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13f900u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13f904:
    // 0x13f904: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13f904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13f908:
    // 0x13f908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13f908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13f90c:
    // 0x13f90c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13f910:
    // 0x13f910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13f914:
    // 0x13f914: 0x3e00008  jr          $ra
label_13f918:
    if (ctx->pc == 0x13F918u) {
        ctx->pc = 0x13F918u;
            // 0x13f918: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x13F91Cu;
        goto label_fallthrough_0x13f914;
    }
    ctx->pc = 0x13F914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F914u;
            // 0x13f918: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x13f914:
    ctx->pc = 0x13F91Cu;
}
