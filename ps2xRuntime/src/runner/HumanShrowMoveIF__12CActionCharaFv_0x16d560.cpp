#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: HumanShrowMoveIF__12CActionCharaFv
// Address: 0x16d560 - 0x16d8d8
void HumanShrowMoveIF__12CActionCharaFv_0x16d560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HumanShrowMoveIF__12CActionCharaFv_0x16d560");
#endif

    switch (ctx->pc) {
        case 0x16d560u: goto label_16d560;
        case 0x16d564u: goto label_16d564;
        case 0x16d568u: goto label_16d568;
        case 0x16d56cu: goto label_16d56c;
        case 0x16d570u: goto label_16d570;
        case 0x16d574u: goto label_16d574;
        case 0x16d578u: goto label_16d578;
        case 0x16d57cu: goto label_16d57c;
        case 0x16d580u: goto label_16d580;
        case 0x16d584u: goto label_16d584;
        case 0x16d588u: goto label_16d588;
        case 0x16d58cu: goto label_16d58c;
        case 0x16d590u: goto label_16d590;
        case 0x16d594u: goto label_16d594;
        case 0x16d598u: goto label_16d598;
        case 0x16d59cu: goto label_16d59c;
        case 0x16d5a0u: goto label_16d5a0;
        case 0x16d5a4u: goto label_16d5a4;
        case 0x16d5a8u: goto label_16d5a8;
        case 0x16d5acu: goto label_16d5ac;
        case 0x16d5b0u: goto label_16d5b0;
        case 0x16d5b4u: goto label_16d5b4;
        case 0x16d5b8u: goto label_16d5b8;
        case 0x16d5bcu: goto label_16d5bc;
        case 0x16d5c0u: goto label_16d5c0;
        case 0x16d5c4u: goto label_16d5c4;
        case 0x16d5c8u: goto label_16d5c8;
        case 0x16d5ccu: goto label_16d5cc;
        case 0x16d5d0u: goto label_16d5d0;
        case 0x16d5d4u: goto label_16d5d4;
        case 0x16d5d8u: goto label_16d5d8;
        case 0x16d5dcu: goto label_16d5dc;
        case 0x16d5e0u: goto label_16d5e0;
        case 0x16d5e4u: goto label_16d5e4;
        case 0x16d5e8u: goto label_16d5e8;
        case 0x16d5ecu: goto label_16d5ec;
        case 0x16d5f0u: goto label_16d5f0;
        case 0x16d5f4u: goto label_16d5f4;
        case 0x16d5f8u: goto label_16d5f8;
        case 0x16d5fcu: goto label_16d5fc;
        case 0x16d600u: goto label_16d600;
        case 0x16d604u: goto label_16d604;
        case 0x16d608u: goto label_16d608;
        case 0x16d60cu: goto label_16d60c;
        case 0x16d610u: goto label_16d610;
        case 0x16d614u: goto label_16d614;
        case 0x16d618u: goto label_16d618;
        case 0x16d61cu: goto label_16d61c;
        case 0x16d620u: goto label_16d620;
        case 0x16d624u: goto label_16d624;
        case 0x16d628u: goto label_16d628;
        case 0x16d62cu: goto label_16d62c;
        case 0x16d630u: goto label_16d630;
        case 0x16d634u: goto label_16d634;
        case 0x16d638u: goto label_16d638;
        case 0x16d63cu: goto label_16d63c;
        case 0x16d640u: goto label_16d640;
        case 0x16d644u: goto label_16d644;
        case 0x16d648u: goto label_16d648;
        case 0x16d64cu: goto label_16d64c;
        case 0x16d650u: goto label_16d650;
        case 0x16d654u: goto label_16d654;
        case 0x16d658u: goto label_16d658;
        case 0x16d65cu: goto label_16d65c;
        case 0x16d660u: goto label_16d660;
        case 0x16d664u: goto label_16d664;
        case 0x16d668u: goto label_16d668;
        case 0x16d66cu: goto label_16d66c;
        case 0x16d670u: goto label_16d670;
        case 0x16d674u: goto label_16d674;
        case 0x16d678u: goto label_16d678;
        case 0x16d67cu: goto label_16d67c;
        case 0x16d680u: goto label_16d680;
        case 0x16d684u: goto label_16d684;
        case 0x16d688u: goto label_16d688;
        case 0x16d68cu: goto label_16d68c;
        case 0x16d690u: goto label_16d690;
        case 0x16d694u: goto label_16d694;
        case 0x16d698u: goto label_16d698;
        case 0x16d69cu: goto label_16d69c;
        case 0x16d6a0u: goto label_16d6a0;
        case 0x16d6a4u: goto label_16d6a4;
        case 0x16d6a8u: goto label_16d6a8;
        case 0x16d6acu: goto label_16d6ac;
        case 0x16d6b0u: goto label_16d6b0;
        case 0x16d6b4u: goto label_16d6b4;
        case 0x16d6b8u: goto label_16d6b8;
        case 0x16d6bcu: goto label_16d6bc;
        case 0x16d6c0u: goto label_16d6c0;
        case 0x16d6c4u: goto label_16d6c4;
        case 0x16d6c8u: goto label_16d6c8;
        case 0x16d6ccu: goto label_16d6cc;
        case 0x16d6d0u: goto label_16d6d0;
        case 0x16d6d4u: goto label_16d6d4;
        case 0x16d6d8u: goto label_16d6d8;
        case 0x16d6dcu: goto label_16d6dc;
        case 0x16d6e0u: goto label_16d6e0;
        case 0x16d6e4u: goto label_16d6e4;
        case 0x16d6e8u: goto label_16d6e8;
        case 0x16d6ecu: goto label_16d6ec;
        case 0x16d6f0u: goto label_16d6f0;
        case 0x16d6f4u: goto label_16d6f4;
        case 0x16d6f8u: goto label_16d6f8;
        case 0x16d6fcu: goto label_16d6fc;
        case 0x16d700u: goto label_16d700;
        case 0x16d704u: goto label_16d704;
        case 0x16d708u: goto label_16d708;
        case 0x16d70cu: goto label_16d70c;
        case 0x16d710u: goto label_16d710;
        case 0x16d714u: goto label_16d714;
        case 0x16d718u: goto label_16d718;
        case 0x16d71cu: goto label_16d71c;
        case 0x16d720u: goto label_16d720;
        case 0x16d724u: goto label_16d724;
        case 0x16d728u: goto label_16d728;
        case 0x16d72cu: goto label_16d72c;
        case 0x16d730u: goto label_16d730;
        case 0x16d734u: goto label_16d734;
        case 0x16d738u: goto label_16d738;
        case 0x16d73cu: goto label_16d73c;
        case 0x16d740u: goto label_16d740;
        case 0x16d744u: goto label_16d744;
        case 0x16d748u: goto label_16d748;
        case 0x16d74cu: goto label_16d74c;
        case 0x16d750u: goto label_16d750;
        case 0x16d754u: goto label_16d754;
        case 0x16d758u: goto label_16d758;
        case 0x16d75cu: goto label_16d75c;
        case 0x16d760u: goto label_16d760;
        case 0x16d764u: goto label_16d764;
        case 0x16d768u: goto label_16d768;
        case 0x16d76cu: goto label_16d76c;
        case 0x16d770u: goto label_16d770;
        case 0x16d774u: goto label_16d774;
        case 0x16d778u: goto label_16d778;
        case 0x16d77cu: goto label_16d77c;
        case 0x16d780u: goto label_16d780;
        case 0x16d784u: goto label_16d784;
        case 0x16d788u: goto label_16d788;
        case 0x16d78cu: goto label_16d78c;
        case 0x16d790u: goto label_16d790;
        case 0x16d794u: goto label_16d794;
        case 0x16d798u: goto label_16d798;
        case 0x16d79cu: goto label_16d79c;
        case 0x16d7a0u: goto label_16d7a0;
        case 0x16d7a4u: goto label_16d7a4;
        case 0x16d7a8u: goto label_16d7a8;
        case 0x16d7acu: goto label_16d7ac;
        case 0x16d7b0u: goto label_16d7b0;
        case 0x16d7b4u: goto label_16d7b4;
        case 0x16d7b8u: goto label_16d7b8;
        case 0x16d7bcu: goto label_16d7bc;
        case 0x16d7c0u: goto label_16d7c0;
        case 0x16d7c4u: goto label_16d7c4;
        case 0x16d7c8u: goto label_16d7c8;
        case 0x16d7ccu: goto label_16d7cc;
        case 0x16d7d0u: goto label_16d7d0;
        case 0x16d7d4u: goto label_16d7d4;
        case 0x16d7d8u: goto label_16d7d8;
        case 0x16d7dcu: goto label_16d7dc;
        case 0x16d7e0u: goto label_16d7e0;
        case 0x16d7e4u: goto label_16d7e4;
        case 0x16d7e8u: goto label_16d7e8;
        case 0x16d7ecu: goto label_16d7ec;
        case 0x16d7f0u: goto label_16d7f0;
        case 0x16d7f4u: goto label_16d7f4;
        case 0x16d7f8u: goto label_16d7f8;
        case 0x16d7fcu: goto label_16d7fc;
        case 0x16d800u: goto label_16d800;
        case 0x16d804u: goto label_16d804;
        case 0x16d808u: goto label_16d808;
        case 0x16d80cu: goto label_16d80c;
        case 0x16d810u: goto label_16d810;
        case 0x16d814u: goto label_16d814;
        case 0x16d818u: goto label_16d818;
        case 0x16d81cu: goto label_16d81c;
        case 0x16d820u: goto label_16d820;
        case 0x16d824u: goto label_16d824;
        case 0x16d828u: goto label_16d828;
        case 0x16d82cu: goto label_16d82c;
        case 0x16d830u: goto label_16d830;
        case 0x16d834u: goto label_16d834;
        case 0x16d838u: goto label_16d838;
        case 0x16d83cu: goto label_16d83c;
        case 0x16d840u: goto label_16d840;
        case 0x16d844u: goto label_16d844;
        case 0x16d848u: goto label_16d848;
        case 0x16d84cu: goto label_16d84c;
        case 0x16d850u: goto label_16d850;
        case 0x16d854u: goto label_16d854;
        case 0x16d858u: goto label_16d858;
        case 0x16d85cu: goto label_16d85c;
        case 0x16d860u: goto label_16d860;
        case 0x16d864u: goto label_16d864;
        case 0x16d868u: goto label_16d868;
        case 0x16d86cu: goto label_16d86c;
        case 0x16d870u: goto label_16d870;
        case 0x16d874u: goto label_16d874;
        case 0x16d878u: goto label_16d878;
        case 0x16d87cu: goto label_16d87c;
        case 0x16d880u: goto label_16d880;
        case 0x16d884u: goto label_16d884;
        case 0x16d888u: goto label_16d888;
        case 0x16d88cu: goto label_16d88c;
        case 0x16d890u: goto label_16d890;
        case 0x16d894u: goto label_16d894;
        case 0x16d898u: goto label_16d898;
        case 0x16d89cu: goto label_16d89c;
        case 0x16d8a0u: goto label_16d8a0;
        case 0x16d8a4u: goto label_16d8a4;
        case 0x16d8a8u: goto label_16d8a8;
        case 0x16d8acu: goto label_16d8ac;
        case 0x16d8b0u: goto label_16d8b0;
        case 0x16d8b4u: goto label_16d8b4;
        case 0x16d8b8u: goto label_16d8b8;
        case 0x16d8bcu: goto label_16d8bc;
        case 0x16d8c0u: goto label_16d8c0;
        case 0x16d8c4u: goto label_16d8c4;
        case 0x16d8c8u: goto label_16d8c8;
        case 0x16d8ccu: goto label_16d8cc;
        case 0x16d8d0u: goto label_16d8d0;
        case 0x16d8d4u: goto label_16d8d4;
        default: break;
    }

    ctx->pc = 0x16d560u;

label_16d560:
    // 0x16d560: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16d560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_16d564:
    // 0x16d564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16d564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_16d568:
    // 0x16d568: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16d568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_16d56c:
    // 0x16d56c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16d56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_16d570:
    // 0x16d570: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x16d570u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_16d574:
    // 0x16d574: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x16d574u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_16d578:
    // 0x16d578: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16d578u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16d57c:
    // 0x16d57c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16d57cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16d580:
    // 0x16d580: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16d580u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16d584:
    // 0x16d584: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16d584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16d588:
    // 0x16d588: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16d588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16d58c:
    // 0x16d58c: 0x320f809  jalr        $t9
label_16d590:
    if (ctx->pc == 0x16D590u) {
        ctx->pc = 0x16D590u;
            // 0x16d590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D594u;
        goto label_16d594;
    }
    ctx->pc = 0x16D58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D594u);
        ctx->pc = 0x16D590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D58Cu;
            // 0x16d590: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D594u; }
            if (ctx->pc != 0x16D594u) { return; }
        }
        }
    }
    ctx->pc = 0x16D594u;
label_16d594:
    // 0x16d594: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16d594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_16d598:
    // 0x16d598: 0xc041c5c  jal         func_107170
label_16d59c:
    if (ctx->pc == 0x16D59Cu) {
        ctx->pc = 0x16D59Cu;
            // 0x16d59c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x16D5A0u;
        goto label_16d5a0;
    }
    ctx->pc = 0x16D598u;
    SET_GPR_U32(ctx, 31, 0x16D5A0u);
    ctx->pc = 0x16D59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D598u;
            // 0x16d59c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5A0u; }
        if (ctx->pc != 0x16D5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5A0u; }
        if (ctx->pc != 0x16D5A0u) { return; }
    }
    ctx->pc = 0x16D5A0u;
label_16d5a0:
    // 0x16d5a0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x16d5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_16d5a4:
    // 0x16d5a4: 0xc04c678  jal         func_1319E0
label_16d5a8:
    if (ctx->pc == 0x16D5A8u) {
        ctx->pc = 0x16D5A8u;
            // 0x16d5a8: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->pc = 0x16D5ACu;
        goto label_16d5ac;
    }
    ctx->pc = 0x16D5A4u;
    SET_GPR_U32(ctx, 31, 0x16D5ACu);
    ctx->pc = 0x16D5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5A4u;
            // 0x16d5a8: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5ACu; }
        if (ctx->pc != 0x16D5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5ACu; }
        if (ctx->pc != 0x16D5ACu) { return; }
    }
    ctx->pc = 0x16D5ACu;
label_16d5ac:
    // 0x16d5ac: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16d5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16d5b0:
    // 0x16d5b0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x16d5b0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_16d5b4:
    // 0x16d5b4: 0xc052cc0  jal         func_14B300
label_16d5b8:
    if (ctx->pc == 0x16D5B8u) {
        ctx->pc = 0x16D5B8u;
            // 0x16d5b8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16D5BCu;
        goto label_16d5bc;
    }
    ctx->pc = 0x16D5B4u;
    SET_GPR_U32(ctx, 31, 0x16D5BCu);
    ctx->pc = 0x16D5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5B4u;
            // 0x16d5b8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5BCu; }
        if (ctx->pc != 0x16D5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5BCu; }
        if (ctx->pc != 0x16D5BCu) { return; }
    }
    ctx->pc = 0x16D5BCu;
label_16d5bc:
    // 0x16d5bc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16d5c0:
    // 0x16d5c0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x16d5c0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_16d5c4:
    // 0x16d5c4: 0xc052cd0  jal         func_14B340
label_16d5c8:
    if (ctx->pc == 0x16D5C8u) {
        ctx->pc = 0x16D5C8u;
            // 0x16d5c8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16D5CCu;
        goto label_16d5cc;
    }
    ctx->pc = 0x16D5C4u;
    SET_GPR_U32(ctx, 31, 0x16D5CCu);
    ctx->pc = 0x16D5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5C4u;
            // 0x16d5c8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5CCu; }
        if (ctx->pc != 0x16D5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5CCu; }
        if (ctx->pc != 0x16D5CCu) { return; }
    }
    ctx->pc = 0x16D5CCu;
label_16d5cc:
    // 0x16d5cc: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x16d5ccu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_16d5d0:
    // 0x16d5d0: 0xc047964  jal         func_11E590
label_16d5d4:
    if (ctx->pc == 0x16D5D4u) {
        ctx->pc = 0x16D5D4u;
            // 0x16d5d4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x16D5D8u;
        goto label_16d5d8;
    }
    ctx->pc = 0x16D5D0u;
    SET_GPR_U32(ctx, 31, 0x16D5D8u);
    ctx->pc = 0x16D5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5D0u;
            // 0x16d5d4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5D8u; }
        if (ctx->pc != 0x16D5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5D8u; }
        if (ctx->pc != 0x16D5D8u) { return; }
    }
    ctx->pc = 0x16D5D8u;
label_16d5d8:
    // 0x16d5d8: 0x4600bd02  mul.s       $f20, $f23, $f0
    ctx->pc = 0x16d5d8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16d5dc:
    // 0x16d5dc: 0xc047a42  jal         func_11E908
label_16d5e0:
    if (ctx->pc == 0x16D5E0u) {
        ctx->pc = 0x16D5E0u;
            // 0x16d5e0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x16D5E4u;
        goto label_16d5e4;
    }
    ctx->pc = 0x16D5DCu;
    SET_GPR_U32(ctx, 31, 0x16D5E4u);
    ctx->pc = 0x16D5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5DCu;
            // 0x16d5e0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5E4u; }
        if (ctx->pc != 0x16D5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5E4u; }
        if (ctx->pc != 0x16D5E4u) { return; }
    }
    ctx->pc = 0x16D5E4u;
label_16d5e4:
    // 0x16d5e4: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16d5e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_16d5e8:
    // 0x16d5e8: 0x4600a540  add.s       $f21, $f20, $f0
    ctx->pc = 0x16d5e8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_16d5ec:
    // 0x16d5ec: 0xc047a42  jal         func_11E908
label_16d5f0:
    if (ctx->pc == 0x16D5F0u) {
        ctx->pc = 0x16D5F0u;
            // 0x16d5f0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x16D5F4u;
        goto label_16d5f4;
    }
    ctx->pc = 0x16D5ECu;
    SET_GPR_U32(ctx, 31, 0x16D5F4u);
    ctx->pc = 0x16D5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5ECu;
            // 0x16d5f0: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5F4u; }
        if (ctx->pc != 0x16D5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D5F4u; }
        if (ctx->pc != 0x16D5F4u) { return; }
    }
    ctx->pc = 0x16D5F4u;
label_16d5f4:
    // 0x16d5f4: 0x4600b847  neg.s       $f1, $f23
    ctx->pc = 0x16d5f4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[23]);
label_16d5f8:
    // 0x16d5f8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x16d5f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16d5fc:
    // 0x16d5fc: 0xc047964  jal         func_11E590
label_16d600:
    if (ctx->pc == 0x16D600u) {
        ctx->pc = 0x16D600u;
            // 0x16d600: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x16D604u;
        goto label_16d604;
    }
    ctx->pc = 0x16D5FCu;
    SET_GPR_U32(ctx, 31, 0x16D604u);
    ctx->pc = 0x16D600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5FCu;
            // 0x16d600: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D604u; }
        if (ctx->pc != 0x16D604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D604u; }
        if (ctx->pc != 0x16D604u) { return; }
    }
    ctx->pc = 0x16D604u;
label_16d604:
    // 0x16d604: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x16d604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_16d608:
    // 0x16d608: 0xc0683a8  jal         func_1A0EA0
label_16d60c:
    if (ctx->pc == 0x16D60Cu) {
        ctx->pc = 0x16D60Cu;
            // 0x16d60c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x16D610u;
        goto label_16d610;
    }
    ctx->pc = 0x16D608u;
    SET_GPR_U32(ctx, 31, 0x16D610u);
    ctx->pc = 0x16D60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D608u;
            // 0x16d60c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D610u; }
        if (ctx->pc != 0x16D610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D610u; }
        if (ctx->pc != 0x16D610u) { return; }
    }
    ctx->pc = 0x16D610u;
label_16d610:
    // 0x16d610: 0xc068140  jal         func_1A0500
label_16d614:
    if (ctx->pc == 0x16D614u) {
        ctx->pc = 0x16D614u;
            // 0x16d614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D618u;
        goto label_16d618;
    }
    ctx->pc = 0x16D610u;
    SET_GPR_U32(ctx, 31, 0x16D618u);
    ctx->pc = 0x16D614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D610u;
            // 0x16d614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0500u;
    if (runtime->hasFunction(0x1A0500u)) {
        auto targetFn = runtime->lookupFunction(0x1A0500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D618u; }
        if (ctx->pc != 0x16D618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttr__16CBattleCharaInfoFv_0x1a0500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D618u; }
        if (ctx->pc != 0x16D618u) { return; }
    }
    ctx->pc = 0x16D618u;
label_16d618:
    // 0x16d618: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16d618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_16d61c:
    // 0x16d61c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_16d620:
    if (ctx->pc == 0x16D620u) {
        ctx->pc = 0x16D620u;
            // 0x16d620: 0x3c033f4c  lui         $v1, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
        ctx->pc = 0x16D624u;
        goto label_16d624;
    }
    ctx->pc = 0x16D61Cu;
    {
        const bool branch_taken_0x16d61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D61Cu;
            // 0x16d620: 0x3c033f4c  lui         $v1, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d61c) {
            ctx->pc = 0x16D638u;
            goto label_16d638;
        }
    }
    ctx->pc = 0x16D624u;
label_16d624:
    // 0x16d624: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16d624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16d628:
    // 0x16d628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d62c:
    // 0x16d62c: 0x0  nop
    ctx->pc = 0x16d62cu;
    // NOP
label_16d630:
    // 0x16d630: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x16d630u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_16d634:
    // 0x16d634: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x16d634u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_16d638:
    // 0x16d638: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x16d638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_16d63c:
    // 0x16d63c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x16d63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_16d640:
    // 0x16d640: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16d640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16d644:
    // 0x16d644: 0xc7808760  lwc1        $f0, -0x78A0($gp)
    ctx->pc = 0x16d644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d648:
    // 0x16d648: 0x4601ad42  mul.s       $f21, $f21, $f1
    ctx->pc = 0x16d648u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_16d64c:
    // 0x16d64c: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x16d64cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_16d650:
    // 0x16d650: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x16d650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16d654:
    // 0x16d654: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16d654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16d658:
    // 0x16d658: 0x0  nop
    ctx->pc = 0x16d658u;
    // NOP
label_16d65c:
    // 0x16d65c: 0x46151002  mul.s       $f0, $f2, $f21
    ctx->pc = 0x16d65cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_16d660:
    // 0x16d660: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16d660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16d664:
    // 0x16d664: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x16d664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_16d668:
    // 0x16d668: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x16d668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_16d66c:
    // 0x16d66c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16d66cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16d670:
    // 0x16d670: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x16d670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_16d674:
    // 0x16d674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d678:
    // 0x16d678: 0x0  nop
    ctx->pc = 0x16d678u;
    // NOP
label_16d67c:
    // 0x16d67c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x16d67cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d680:
    // 0x16d680: 0x0  nop
    ctx->pc = 0x16d680u;
    // NOP
label_16d684:
    // 0x16d684: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16d688:
    if (ctx->pc == 0x16D688u) {
        ctx->pc = 0x16D68Cu;
        goto label_16d68c;
    }
    ctx->pc = 0x16D684u;
    {
        const bool branch_taken_0x16d684 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d684) {
            ctx->pc = 0x16D69Cu;
            goto label_16d69c;
        }
    }
    ctx->pc = 0x16D68Cu;
label_16d68c:
    // 0x16d68c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16d68cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d690:
    // 0x16d690: 0x0  nop
    ctx->pc = 0x16d690u;
    // NOP
label_16d694:
    // 0x16d694: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16d698:
    if (ctx->pc == 0x16D698u) {
        ctx->pc = 0x16D698u;
            // 0x16d698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16D69Cu;
        goto label_16d69c;
    }
    ctx->pc = 0x16D694u;
    {
        const bool branch_taken_0x16d694 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D694u;
            // 0x16d698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d694) {
            ctx->pc = 0x16D6A4u;
            goto label_16d6a4;
        }
    }
    ctx->pc = 0x16D69Cu;
label_16d69c:
    // 0x16d69c: 0x10000002  b           . + 4 + (0x2 << 2)
label_16d6a0:
    if (ctx->pc == 0x16D6A0u) {
        ctx->pc = 0x16D6A0u;
            // 0x16d6a0: 0xa200076d  sb          $zero, 0x76D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1901), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x16D6A4u;
        goto label_16d6a4;
    }
    ctx->pc = 0x16D69Cu;
    {
        const bool branch_taken_0x16d69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D69Cu;
            // 0x16d6a0: 0xa200076d  sb          $zero, 0x76D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1901), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d69c) {
            ctx->pc = 0x16D6A8u;
            goto label_16d6a8;
        }
    }
    ctx->pc = 0x16D6A4u;
label_16d6a4:
    // 0x16d6a4: 0xa202076d  sb          $v0, 0x76D($s0)
    ctx->pc = 0x16d6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1901), (uint8_t)GPR_U32(ctx, 2));
label_16d6a8:
    // 0x16d6a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16d6a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16d6ac:
    // 0x16d6ac: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16d6acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16d6b0:
    // 0x16d6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d6b4:
    // 0x16d6b4: 0x24a53620  addiu       $a1, $a1, 0x3620
    ctx->pc = 0x16d6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13856));
label_16d6b8:
    // 0x16d6b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d6bc:
    // 0x16d6bc: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16d6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16d6c0:
    // 0x16d6c0: 0x320f809  jalr        $t9
label_16d6c4:
    if (ctx->pc == 0x16D6C4u) {
        ctx->pc = 0x16D6C4u;
            // 0x16d6c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16D6C8u;
        goto label_16d6c8;
    }
    ctx->pc = 0x16D6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D6C8u);
        ctx->pc = 0x16D6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6C0u;
            // 0x16d6c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D6C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D6C8u; }
            if (ctx->pc != 0x16D6C8u) { return; }
        }
        }
    }
    ctx->pc = 0x16D6C8u;
label_16d6c8:
    // 0x16d6c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d6c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d6cc:
    // 0x16d6cc: 0x0  nop
    ctx->pc = 0x16d6ccu;
    // NOP
label_16d6d0:
    // 0x16d6d0: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x16d6d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d6d4:
    // 0x16d6d4: 0x0  nop
    ctx->pc = 0x16d6d4u;
    // NOP
label_16d6d8:
    // 0x16d6d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16d6dc:
    if (ctx->pc == 0x16D6DCu) {
        ctx->pc = 0x16D6DCu;
            // 0x16d6dc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16D6E0u;
        goto label_16d6e0;
    }
    ctx->pc = 0x16D6D8u;
    {
        const bool branch_taken_0x16d6d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6D8u;
            // 0x16d6dc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6d8) {
            ctx->pc = 0x16D6F0u;
            goto label_16d6f0;
        }
    }
    ctx->pc = 0x16D6E0u;
label_16d6e0:
    // 0x16d6e0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16d6e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d6e4:
    // 0x16d6e4: 0x0  nop
    ctx->pc = 0x16d6e4u;
    // NOP
label_16d6e8:
    // 0x16d6e8: 0x4501004b  bc1t        . + 4 + (0x4B << 2)
label_16d6ec:
    if (ctx->pc == 0x16D6ECu) {
        ctx->pc = 0x16D6F0u;
        goto label_16d6f0;
    }
    ctx->pc = 0x16D6E8u;
    {
        const bool branch_taken_0x16d6e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d6e8) {
            ctx->pc = 0x16D818u;
            goto label_16d818;
        }
    }
    ctx->pc = 0x16D6F0u;
label_16d6f0:
    // 0x16d6f0: 0xc047c76  jal         func_11F1D8
label_16d6f4:
    if (ctx->pc == 0x16D6F4u) {
        ctx->pc = 0x16D6F4u;
            // 0x16d6f4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16D6F8u;
        goto label_16d6f8;
    }
    ctx->pc = 0x16D6F0u;
    SET_GPR_U32(ctx, 31, 0x16D6F8u);
    ctx->pc = 0x16D6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6F0u;
            // 0x16d6f4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6F8u; }
        if (ctx->pc != 0x16D6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6F8u; }
        if (ctx->pc != 0x16D6F8u) { return; }
    }
    ctx->pc = 0x16D6F8u;
label_16d6f8:
    // 0x16d6f8: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x16d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_16d6fc:
    // 0x16d6fc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x16d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_16d700:
    // 0x16d700: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16d700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16d704:
    // 0x16d704: 0xc072408  jal         func_1C9020
label_16d708:
    if (ctx->pc == 0x16D708u) {
        ctx->pc = 0x16D708u;
            // 0x16d708: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16D70Cu;
        goto label_16d70c;
    }
    ctx->pc = 0x16D704u;
    SET_GPR_U32(ctx, 31, 0x16D70Cu);
    ctx->pc = 0x16D708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D704u;
            // 0x16d708: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D70Cu; }
        if (ctx->pc != 0x16D70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D70Cu; }
        if (ctx->pc != 0x16D70Cu) { return; }
    }
    ctx->pc = 0x16D70Cu;
label_16d70c:
    // 0x16d70c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16d70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16d710:
    // 0x16d710: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16d710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16d714:
    // 0x16d714: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16d714u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16d718:
    // 0x16d718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d71c:
    // 0x16d71c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16d71cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16d720:
    // 0x16d720: 0x320f809  jalr        $t9
label_16d724:
    if (ctx->pc == 0x16D724u) {
        ctx->pc = 0x16D724u;
            // 0x16d724: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16D728u;
        goto label_16d728;
    }
    ctx->pc = 0x16D720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D728u);
        ctx->pc = 0x16D724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D720u;
            // 0x16d724: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D728u; }
            if (ctx->pc != 0x16D728u) { return; }
        }
        }
    }
    ctx->pc = 0x16D728u;
label_16d728:
    // 0x16d728: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d72c:
    // 0x16d72c: 0x0  nop
    ctx->pc = 0x16d72cu;
    // NOP
label_16d730:
    // 0x16d730: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x16d730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d734:
    // 0x16d734: 0x0  nop
    ctx->pc = 0x16d734u;
    // NOP
label_16d738:
    // 0x16d738: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16d73c:
    if (ctx->pc == 0x16D73Cu) {
        ctx->pc = 0x16D73Cu;
            // 0x16d73c: 0x4600a846  mov.s       $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16D740u;
        goto label_16d740;
    }
    ctx->pc = 0x16D738u;
    {
        const bool branch_taken_0x16d738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D738u;
            // 0x16d73c: 0x4600a846  mov.s       $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d738) {
            ctx->pc = 0x16D744u;
            goto label_16d744;
        }
    }
    ctx->pc = 0x16D740u;
label_16d740:
    // 0x16d740: 0x4600a847  neg.s       $f1, $f21
    ctx->pc = 0x16d740u;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
label_16d744:
    // 0x16d744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d748:
    // 0x16d748: 0x0  nop
    ctx->pc = 0x16d748u;
    // NOP
label_16d74c:
    // 0x16d74c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16d74cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d750:
    // 0x16d750: 0x0  nop
    ctx->pc = 0x16d750u;
    // NOP
label_16d754:
    // 0x16d754: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16d758:
    if (ctx->pc == 0x16D758u) {
        ctx->pc = 0x16D758u;
            // 0x16d758: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16D75Cu;
        goto label_16d75c;
    }
    ctx->pc = 0x16D754u;
    {
        const bool branch_taken_0x16d754 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D754u;
            // 0x16d758: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d754) {
            ctx->pc = 0x16D760u;
            goto label_16d760;
        }
    }
    ctx->pc = 0x16D75Cu;
label_16d75c:
    // 0x16d75c: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x16d75cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_16d760:
    // 0x16d760: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16d760u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d764:
    // 0x16d764: 0x0  nop
    ctx->pc = 0x16d764u;
    // NOP
label_16d768:
    // 0x16d768: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_16d76c:
    if (ctx->pc == 0x16D76Cu) {
        ctx->pc = 0x16D770u;
        goto label_16d770;
    }
    ctx->pc = 0x16D768u;
    {
        const bool branch_taken_0x16d768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d768) {
            ctx->pc = 0x16D794u;
            goto label_16d794;
        }
    }
    ctx->pc = 0x16D770u;
label_16d770:
    // 0x16d770: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d770u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d774:
    // 0x16d774: 0x0  nop
    ctx->pc = 0x16d774u;
    // NOP
label_16d778:
    // 0x16d778: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x16d778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d77c:
    // 0x16d77c: 0x0  nop
    ctx->pc = 0x16d77cu;
    // NOP
label_16d780:
    // 0x16d780: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16d784:
    if (ctx->pc == 0x16D784u) {
        ctx->pc = 0x16D788u;
        goto label_16d788;
    }
    ctx->pc = 0x16D780u;
    {
        const bool branch_taken_0x16d780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d780) {
            ctx->pc = 0x16D78Cu;
            goto label_16d78c;
        }
    }
    ctx->pc = 0x16D788u;
label_16d788:
    // 0x16d788: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x16d788u;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
label_16d78c:
    // 0x16d78c: 0x1000000a  b           . + 4 + (0xA << 2)
label_16d790:
    if (ctx->pc == 0x16D790u) {
        ctx->pc = 0x16D790u;
            // 0x16d790: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x16D794u;
        goto label_16d794;
    }
    ctx->pc = 0x16D78Cu;
    {
        const bool branch_taken_0x16d78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D78Cu;
            // 0x16d790: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d78c) {
            ctx->pc = 0x16D7B8u;
            goto label_16d7b8;
        }
    }
    ctx->pc = 0x16D794u;
label_16d794:
    // 0x16d794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16d794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d798:
    // 0x16d798: 0x0  nop
    ctx->pc = 0x16d798u;
    // NOP
label_16d79c:
    // 0x16d79c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16d79cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d7a0:
    // 0x16d7a0: 0x0  nop
    ctx->pc = 0x16d7a0u;
    // NOP
label_16d7a4:
    // 0x16d7a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16d7a8:
    if (ctx->pc == 0x16D7A8u) {
        ctx->pc = 0x16D7ACu;
        goto label_16d7ac;
    }
    ctx->pc = 0x16D7A4u;
    {
        const bool branch_taken_0x16d7a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d7a4) {
            ctx->pc = 0x16D7B0u;
            goto label_16d7b0;
        }
    }
    ctx->pc = 0x16D7ACu;
label_16d7ac:
    // 0x16d7ac: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x16d7acu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_16d7b0:
    // 0x16d7b0: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x16d7b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_16d7b4:
    // 0x16d7b4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16d7b8:
    // 0x16d7b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d7bc:
    // 0x16d7bc: 0x0  nop
    ctx->pc = 0x16d7bcu;
    // NOP
label_16d7c0:
    // 0x16d7c0: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x16d7c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16d7c4:
    // 0x16d7c4: 0x0  nop
    ctx->pc = 0x16d7c4u;
    // NOP
label_16d7c8:
    // 0x16d7c8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16d7cc:
    if (ctx->pc == 0x16D7CCu) {
        ctx->pc = 0x16D7D0u;
        goto label_16d7d0;
    }
    ctx->pc = 0x16D7C8u;
    {
        const bool branch_taken_0x16d7c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16d7c8) {
            ctx->pc = 0x16D7D4u;
            goto label_16d7d4;
        }
    }
    ctx->pc = 0x16D7D0u;
label_16d7d0:
    // 0x16d7d0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16d7d0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_16d7d4:
    // 0x16d7d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16d7d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16d7d8:
    // 0x16d7d8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16d7dc:
    // 0x16d7dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d7e0:
    // 0x16d7e0: 0x24a53630  addiu       $a1, $a1, 0x3630
    ctx->pc = 0x16d7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13872));
label_16d7e4:
    // 0x16d7e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d7e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d7e8:
    // 0x16d7e8: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16d7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16d7ec:
    // 0x16d7ec: 0x320f809  jalr        $t9
label_16d7f0:
    if (ctx->pc == 0x16D7F0u) {
        ctx->pc = 0x16D7F0u;
            // 0x16d7f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x16D7F4u;
        goto label_16d7f4;
    }
    ctx->pc = 0x16D7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D7F4u);
        ctx->pc = 0x16D7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D7ECu;
            // 0x16d7f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D7F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D7F4u; }
            if (ctx->pc != 0x16D7F4u) { return; }
        }
        }
    }
    ctx->pc = 0x16D7F4u;
label_16d7f4:
    // 0x16d7f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16d7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16d7f8:
    // 0x16d7f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x16d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_16d7fc:
    // 0x16d7fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16d800:
    // 0x16d800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d804:
    // 0x16d804: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x16d804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_16d808:
    // 0x16d808: 0x320f809  jalr        $t9
label_16d80c:
    if (ctx->pc == 0x16D80Cu) {
        ctx->pc = 0x16D80Cu;
            // 0x16d80c: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x16D810u;
        goto label_16d810;
    }
    ctx->pc = 0x16D808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D810u);
        ctx->pc = 0x16D80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D808u;
            // 0x16d80c: 0x46150302  mul.s       $f12, $f0, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D810u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D810u; }
            if (ctx->pc != 0x16D810u) { return; }
        }
        }
    }
    ctx->pc = 0x16D810u;
label_16d810:
    // 0x16d810: 0x10000023  b           . + 4 + (0x23 << 2)
label_16d814:
    if (ctx->pc == 0x16D814u) {
        ctx->pc = 0x16D814u;
            // 0x16d814: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x16D818u;
        goto label_16d818;
    }
    ctx->pc = 0x16D810u;
    {
        const bool branch_taken_0x16d810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D810u;
            // 0x16d814: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d810) {
            ctx->pc = 0x16D8A0u;
            goto label_16d8a0;
        }
    }
    ctx->pc = 0x16D818u;
label_16d818:
    // 0x16d818: 0x86020772  lh          $v0, 0x772($s0)
    ctx->pc = 0x16d818u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1906)));
label_16d81c:
    // 0x16d81c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_16d820:
    if (ctx->pc == 0x16D820u) {
        ctx->pc = 0x16D824u;
        goto label_16d824;
    }
    ctx->pc = 0x16D81Cu;
    {
        const bool branch_taken_0x16d81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d81c) {
            ctx->pc = 0x16D89Cu;
            goto label_16d89c;
        }
    }
    ctx->pc = 0x16D824u;
label_16d824:
    // 0x16d824: 0x8f849da4  lw          $a0, -0x625C($gp)
    ctx->pc = 0x16d824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
label_16d828:
    // 0x16d828: 0xc0a0ed8  jal         func_283B60
label_16d82c:
    if (ctx->pc == 0x16D82Cu) {
        ctx->pc = 0x16D82Cu;
            // 0x16d82c: 0x86050770  lh          $a1, 0x770($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1904)));
        ctx->pc = 0x16D830u;
        goto label_16d830;
    }
    ctx->pc = 0x16D828u;
    SET_GPR_U32(ctx, 31, 0x16D830u);
    ctx->pc = 0x16D82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D828u;
            // 0x16d82c: 0x86050770  lh          $a1, 0x770($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1904)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D830u; }
        if (ctx->pc != 0x16D830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D830u; }
        if (ctx->pc != 0x16D830u) { return; }
    }
    ctx->pc = 0x16D830u;
label_16d830:
    // 0x16d830: 0x8444068a  lh          $a0, 0x68A($v0)
    ctx->pc = 0x16d830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1674)));
label_16d834:
    // 0x16d834: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16d834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16d838:
    // 0x16d838: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
label_16d83c:
    if (ctx->pc == 0x16D83Cu) {
        ctx->pc = 0x16D83Cu;
            // 0x16d83c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D840u;
        goto label_16d840;
    }
    ctx->pc = 0x16D838u;
    {
        const bool branch_taken_0x16d838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x16D83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D838u;
            // 0x16d83c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d838) {
            ctx->pc = 0x16D89Cu;
            goto label_16d89c;
        }
    }
    ctx->pc = 0x16D840u;
label_16d840:
    // 0x16d840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d844:
    // 0x16d844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d848:
    // 0x16d848: 0xc05d420  jal         func_175080
label_16d84c:
    if (ctx->pc == 0x16D84Cu) {
        ctx->pc = 0x16D84Cu;
            // 0x16d84c: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16D850u;
        goto label_16d850;
    }
    ctx->pc = 0x16D848u;
    SET_GPR_U32(ctx, 31, 0x16D850u);
    ctx->pc = 0x16D84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D848u;
            // 0x16d84c: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D850u; }
        if (ctx->pc != 0x16D850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D850u; }
        if (ctx->pc != 0x16D850u) { return; }
    }
    ctx->pc = 0x16D850u;
label_16d850:
    // 0x16d850: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x16d850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16d854:
    // 0x16d854: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x16d854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16d858:
    // 0x16d858: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x16d858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16d85c:
    // 0x16d85c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x16d85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16d860:
    // 0x16d860: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x16d860u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_16d864:
    // 0x16d864: 0xc047c76  jal         func_11F1D8
label_16d868:
    if (ctx->pc == 0x16D868u) {
        ctx->pc = 0x16D868u;
            // 0x16d868: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x16D86Cu;
        goto label_16d86c;
    }
    ctx->pc = 0x16D864u;
    SET_GPR_U32(ctx, 31, 0x16D86Cu);
    ctx->pc = 0x16D868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D864u;
            // 0x16d868: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D86Cu; }
        if (ctx->pc != 0x16D86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D86Cu; }
        if (ctx->pc != 0x16D86Cu) { return; }
    }
    ctx->pc = 0x16D86Cu;
label_16d86c:
    // 0x16d86c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x16d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_16d870:
    // 0x16d870: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x16d870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_16d874:
    // 0x16d874: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16d874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16d878:
    // 0x16d878: 0xc072408  jal         func_1C9020
label_16d87c:
    if (ctx->pc == 0x16D87Cu) {
        ctx->pc = 0x16D87Cu;
            // 0x16d87c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16D880u;
        goto label_16d880;
    }
    ctx->pc = 0x16D878u;
    SET_GPR_U32(ctx, 31, 0x16D880u);
    ctx->pc = 0x16D87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D878u;
            // 0x16d87c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D880u; }
        if (ctx->pc != 0x16D880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D880u; }
        if (ctx->pc != 0x16D880u) { return; }
    }
    ctx->pc = 0x16D880u;
label_16d880:
    // 0x16d880: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16d880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16d884:
    // 0x16d884: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16d884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16d888:
    // 0x16d888: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16d888u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16d88c:
    // 0x16d88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d890:
    // 0x16d890: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16d890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16d894:
    // 0x16d894: 0x320f809  jalr        $t9
label_16d898:
    if (ctx->pc == 0x16D898u) {
        ctx->pc = 0x16D898u;
            // 0x16d898: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16D89Cu;
        goto label_16d89c;
    }
    ctx->pc = 0x16D894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16D89Cu);
        ctx->pc = 0x16D898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D894u;
            // 0x16d898: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D89Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D89Cu; }
            if (ctx->pc != 0x16D89Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16D89Cu;
label_16d89c:
    // 0x16d89c: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x16d89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_16d8a0:
    // 0x16d8a0: 0xc041c5c  jal         func_107170
label_16d8a4:
    if (ctx->pc == 0x16D8A4u) {
        ctx->pc = 0x16D8A4u;
            // 0x16d8a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x16D8A8u;
        goto label_16d8a8;
    }
    ctx->pc = 0x16D8A0u;
    SET_GPR_U32(ctx, 31, 0x16D8A8u);
    ctx->pc = 0x16D8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8A0u;
            // 0x16d8a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8A8u; }
        if (ctx->pc != 0x16D8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8A8u; }
        if (ctx->pc != 0x16D8A8u) { return; }
    }
    ctx->pc = 0x16D8A8u;
label_16d8a8:
    // 0x16d8a8: 0xc05b1e8  jal         func_16C7A0
label_16d8ac:
    if (ctx->pc == 0x16D8ACu) {
        ctx->pc = 0x16D8ACu;
            // 0x16d8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16D8B0u;
        goto label_16d8b0;
    }
    ctx->pc = 0x16D8A8u;
    SET_GPR_U32(ctx, 31, 0x16D8B0u);
    ctx->pc = 0x16D8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8A8u;
            // 0x16d8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C7A0u;
    if (runtime->hasFunction(0x16C7A0u)) {
        auto targetFn = runtime->lookupFunction(0x16C7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8B0u; }
        if (ctx->pc != 0x16D8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RockOn__12CActionCharaFv_0x16c7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D8B0u; }
        if (ctx->pc != 0x16D8B0u) { return; }
    }
    ctx->pc = 0x16D8B0u;
label_16d8b0:
    // 0x16d8b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16d8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16d8b4:
    // 0x16d8b4: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x16d8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_16d8b8:
    // 0x16d8b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16d8b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16d8bc:
    // 0x16d8bc: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x16d8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_16d8c0:
    // 0x16d8c0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16d8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_16d8c4:
    // 0x16d8c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d8c8:
    // 0x16d8c8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16d8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16d8cc:
    // 0x16d8cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16d8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16d8d0:
    // 0x16d8d0: 0x3e00008  jr          $ra
label_16d8d4:
    if (ctx->pc == 0x16D8D4u) {
        ctx->pc = 0x16D8D4u;
            // 0x16d8d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16D8D8u;
        goto label_fallthrough_0x16d8d0;
    }
    ctx->pc = 0x16D8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8D0u;
            // 0x16d8d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16d8d0:
    ctx->pc = 0x16D8D8u;
}
