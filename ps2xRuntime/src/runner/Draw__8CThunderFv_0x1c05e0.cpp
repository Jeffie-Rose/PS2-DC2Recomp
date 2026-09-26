#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__8CThunderFv
// Address: 0x1c05e0 - 0x1c0940
void Draw__8CThunderFv_0x1c05e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__8CThunderFv_0x1c05e0");
#endif

    switch (ctx->pc) {
        case 0x1c05e0u: goto label_1c05e0;
        case 0x1c05e4u: goto label_1c05e4;
        case 0x1c05e8u: goto label_1c05e8;
        case 0x1c05ecu: goto label_1c05ec;
        case 0x1c05f0u: goto label_1c05f0;
        case 0x1c05f4u: goto label_1c05f4;
        case 0x1c05f8u: goto label_1c05f8;
        case 0x1c05fcu: goto label_1c05fc;
        case 0x1c0600u: goto label_1c0600;
        case 0x1c0604u: goto label_1c0604;
        case 0x1c0608u: goto label_1c0608;
        case 0x1c060cu: goto label_1c060c;
        case 0x1c0610u: goto label_1c0610;
        case 0x1c0614u: goto label_1c0614;
        case 0x1c0618u: goto label_1c0618;
        case 0x1c061cu: goto label_1c061c;
        case 0x1c0620u: goto label_1c0620;
        case 0x1c0624u: goto label_1c0624;
        case 0x1c0628u: goto label_1c0628;
        case 0x1c062cu: goto label_1c062c;
        case 0x1c0630u: goto label_1c0630;
        case 0x1c0634u: goto label_1c0634;
        case 0x1c0638u: goto label_1c0638;
        case 0x1c063cu: goto label_1c063c;
        case 0x1c0640u: goto label_1c0640;
        case 0x1c0644u: goto label_1c0644;
        case 0x1c0648u: goto label_1c0648;
        case 0x1c064cu: goto label_1c064c;
        case 0x1c0650u: goto label_1c0650;
        case 0x1c0654u: goto label_1c0654;
        case 0x1c0658u: goto label_1c0658;
        case 0x1c065cu: goto label_1c065c;
        case 0x1c0660u: goto label_1c0660;
        case 0x1c0664u: goto label_1c0664;
        case 0x1c0668u: goto label_1c0668;
        case 0x1c066cu: goto label_1c066c;
        case 0x1c0670u: goto label_1c0670;
        case 0x1c0674u: goto label_1c0674;
        case 0x1c0678u: goto label_1c0678;
        case 0x1c067cu: goto label_1c067c;
        case 0x1c0680u: goto label_1c0680;
        case 0x1c0684u: goto label_1c0684;
        case 0x1c0688u: goto label_1c0688;
        case 0x1c068cu: goto label_1c068c;
        case 0x1c0690u: goto label_1c0690;
        case 0x1c0694u: goto label_1c0694;
        case 0x1c0698u: goto label_1c0698;
        case 0x1c069cu: goto label_1c069c;
        case 0x1c06a0u: goto label_1c06a0;
        case 0x1c06a4u: goto label_1c06a4;
        case 0x1c06a8u: goto label_1c06a8;
        case 0x1c06acu: goto label_1c06ac;
        case 0x1c06b0u: goto label_1c06b0;
        case 0x1c06b4u: goto label_1c06b4;
        case 0x1c06b8u: goto label_1c06b8;
        case 0x1c06bcu: goto label_1c06bc;
        case 0x1c06c0u: goto label_1c06c0;
        case 0x1c06c4u: goto label_1c06c4;
        case 0x1c06c8u: goto label_1c06c8;
        case 0x1c06ccu: goto label_1c06cc;
        case 0x1c06d0u: goto label_1c06d0;
        case 0x1c06d4u: goto label_1c06d4;
        case 0x1c06d8u: goto label_1c06d8;
        case 0x1c06dcu: goto label_1c06dc;
        case 0x1c06e0u: goto label_1c06e0;
        case 0x1c06e4u: goto label_1c06e4;
        case 0x1c06e8u: goto label_1c06e8;
        case 0x1c06ecu: goto label_1c06ec;
        case 0x1c06f0u: goto label_1c06f0;
        case 0x1c06f4u: goto label_1c06f4;
        case 0x1c06f8u: goto label_1c06f8;
        case 0x1c06fcu: goto label_1c06fc;
        case 0x1c0700u: goto label_1c0700;
        case 0x1c0704u: goto label_1c0704;
        case 0x1c0708u: goto label_1c0708;
        case 0x1c070cu: goto label_1c070c;
        case 0x1c0710u: goto label_1c0710;
        case 0x1c0714u: goto label_1c0714;
        case 0x1c0718u: goto label_1c0718;
        case 0x1c071cu: goto label_1c071c;
        case 0x1c0720u: goto label_1c0720;
        case 0x1c0724u: goto label_1c0724;
        case 0x1c0728u: goto label_1c0728;
        case 0x1c072cu: goto label_1c072c;
        case 0x1c0730u: goto label_1c0730;
        case 0x1c0734u: goto label_1c0734;
        case 0x1c0738u: goto label_1c0738;
        case 0x1c073cu: goto label_1c073c;
        case 0x1c0740u: goto label_1c0740;
        case 0x1c0744u: goto label_1c0744;
        case 0x1c0748u: goto label_1c0748;
        case 0x1c074cu: goto label_1c074c;
        case 0x1c0750u: goto label_1c0750;
        case 0x1c0754u: goto label_1c0754;
        case 0x1c0758u: goto label_1c0758;
        case 0x1c075cu: goto label_1c075c;
        case 0x1c0760u: goto label_1c0760;
        case 0x1c0764u: goto label_1c0764;
        case 0x1c0768u: goto label_1c0768;
        case 0x1c076cu: goto label_1c076c;
        case 0x1c0770u: goto label_1c0770;
        case 0x1c0774u: goto label_1c0774;
        case 0x1c0778u: goto label_1c0778;
        case 0x1c077cu: goto label_1c077c;
        case 0x1c0780u: goto label_1c0780;
        case 0x1c0784u: goto label_1c0784;
        case 0x1c0788u: goto label_1c0788;
        case 0x1c078cu: goto label_1c078c;
        case 0x1c0790u: goto label_1c0790;
        case 0x1c0794u: goto label_1c0794;
        case 0x1c0798u: goto label_1c0798;
        case 0x1c079cu: goto label_1c079c;
        case 0x1c07a0u: goto label_1c07a0;
        case 0x1c07a4u: goto label_1c07a4;
        case 0x1c07a8u: goto label_1c07a8;
        case 0x1c07acu: goto label_1c07ac;
        case 0x1c07b0u: goto label_1c07b0;
        case 0x1c07b4u: goto label_1c07b4;
        case 0x1c07b8u: goto label_1c07b8;
        case 0x1c07bcu: goto label_1c07bc;
        case 0x1c07c0u: goto label_1c07c0;
        case 0x1c07c4u: goto label_1c07c4;
        case 0x1c07c8u: goto label_1c07c8;
        case 0x1c07ccu: goto label_1c07cc;
        case 0x1c07d0u: goto label_1c07d0;
        case 0x1c07d4u: goto label_1c07d4;
        case 0x1c07d8u: goto label_1c07d8;
        case 0x1c07dcu: goto label_1c07dc;
        case 0x1c07e0u: goto label_1c07e0;
        case 0x1c07e4u: goto label_1c07e4;
        case 0x1c07e8u: goto label_1c07e8;
        case 0x1c07ecu: goto label_1c07ec;
        case 0x1c07f0u: goto label_1c07f0;
        case 0x1c07f4u: goto label_1c07f4;
        case 0x1c07f8u: goto label_1c07f8;
        case 0x1c07fcu: goto label_1c07fc;
        case 0x1c0800u: goto label_1c0800;
        case 0x1c0804u: goto label_1c0804;
        case 0x1c0808u: goto label_1c0808;
        case 0x1c080cu: goto label_1c080c;
        case 0x1c0810u: goto label_1c0810;
        case 0x1c0814u: goto label_1c0814;
        case 0x1c0818u: goto label_1c0818;
        case 0x1c081cu: goto label_1c081c;
        case 0x1c0820u: goto label_1c0820;
        case 0x1c0824u: goto label_1c0824;
        case 0x1c0828u: goto label_1c0828;
        case 0x1c082cu: goto label_1c082c;
        case 0x1c0830u: goto label_1c0830;
        case 0x1c0834u: goto label_1c0834;
        case 0x1c0838u: goto label_1c0838;
        case 0x1c083cu: goto label_1c083c;
        case 0x1c0840u: goto label_1c0840;
        case 0x1c0844u: goto label_1c0844;
        case 0x1c0848u: goto label_1c0848;
        case 0x1c084cu: goto label_1c084c;
        case 0x1c0850u: goto label_1c0850;
        case 0x1c0854u: goto label_1c0854;
        case 0x1c0858u: goto label_1c0858;
        case 0x1c085cu: goto label_1c085c;
        case 0x1c0860u: goto label_1c0860;
        case 0x1c0864u: goto label_1c0864;
        case 0x1c0868u: goto label_1c0868;
        case 0x1c086cu: goto label_1c086c;
        case 0x1c0870u: goto label_1c0870;
        case 0x1c0874u: goto label_1c0874;
        case 0x1c0878u: goto label_1c0878;
        case 0x1c087cu: goto label_1c087c;
        case 0x1c0880u: goto label_1c0880;
        case 0x1c0884u: goto label_1c0884;
        case 0x1c0888u: goto label_1c0888;
        case 0x1c088cu: goto label_1c088c;
        case 0x1c0890u: goto label_1c0890;
        case 0x1c0894u: goto label_1c0894;
        case 0x1c0898u: goto label_1c0898;
        case 0x1c089cu: goto label_1c089c;
        case 0x1c08a0u: goto label_1c08a0;
        case 0x1c08a4u: goto label_1c08a4;
        case 0x1c08a8u: goto label_1c08a8;
        case 0x1c08acu: goto label_1c08ac;
        case 0x1c08b0u: goto label_1c08b0;
        case 0x1c08b4u: goto label_1c08b4;
        case 0x1c08b8u: goto label_1c08b8;
        case 0x1c08bcu: goto label_1c08bc;
        case 0x1c08c0u: goto label_1c08c0;
        case 0x1c08c4u: goto label_1c08c4;
        case 0x1c08c8u: goto label_1c08c8;
        case 0x1c08ccu: goto label_1c08cc;
        case 0x1c08d0u: goto label_1c08d0;
        case 0x1c08d4u: goto label_1c08d4;
        case 0x1c08d8u: goto label_1c08d8;
        case 0x1c08dcu: goto label_1c08dc;
        case 0x1c08e0u: goto label_1c08e0;
        case 0x1c08e4u: goto label_1c08e4;
        case 0x1c08e8u: goto label_1c08e8;
        case 0x1c08ecu: goto label_1c08ec;
        case 0x1c08f0u: goto label_1c08f0;
        case 0x1c08f4u: goto label_1c08f4;
        case 0x1c08f8u: goto label_1c08f8;
        case 0x1c08fcu: goto label_1c08fc;
        case 0x1c0900u: goto label_1c0900;
        case 0x1c0904u: goto label_1c0904;
        case 0x1c0908u: goto label_1c0908;
        case 0x1c090cu: goto label_1c090c;
        case 0x1c0910u: goto label_1c0910;
        case 0x1c0914u: goto label_1c0914;
        case 0x1c0918u: goto label_1c0918;
        case 0x1c091cu: goto label_1c091c;
        case 0x1c0920u: goto label_1c0920;
        case 0x1c0924u: goto label_1c0924;
        case 0x1c0928u: goto label_1c0928;
        case 0x1c092cu: goto label_1c092c;
        case 0x1c0930u: goto label_1c0930;
        case 0x1c0934u: goto label_1c0934;
        case 0x1c0938u: goto label_1c0938;
        case 0x1c093cu: goto label_1c093c;
        default: break;
    }

    ctx->pc = 0x1c05e0u;

label_1c05e0:
    // 0x1c05e0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1c05e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1c05e4:
    // 0x1c05e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c05e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c05e8:
    // 0x1c05e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c05e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c05ec:
    // 0x1c05ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c05ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c05f0:
    // 0x1c05f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c05f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c05f4:
    // 0x1c05f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c05f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c05f8:
    // 0x1c05f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c05f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c05fc:
    // 0x1c05fc: 0x80830db0  lb          $v1, 0xDB0($a0)
    ctx->pc = 0x1c05fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3504)));
label_1c0600:
    // 0x1c0600: 0x106000c7  beqz        $v1, . + 4 + (0xC7 << 2)
label_1c0604:
    if (ctx->pc == 0x1C0604u) {
        ctx->pc = 0x1C0604u;
            // 0x1c0604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0608u;
        goto label_1c0608;
    }
    ctx->pc = 0x1C0600u;
    {
        const bool branch_taken_0x1c0600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0600u;
            // 0x1c0604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0600) {
            ctx->pc = 0x1C0920u;
            goto label_1c0920;
        }
    }
    ctx->pc = 0x1C0608u;
label_1c0608:
    // 0x1c0608: 0x82030db1  lb          $v1, 0xDB1($s0)
    ctx->pc = 0x1c0608u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3505)));
label_1c060c:
    // 0x1c060c: 0x186000c4  blez        $v1, . + 4 + (0xC4 << 2)
label_1c0610:
    if (ctx->pc == 0x1C0610u) {
        ctx->pc = 0x1C0614u;
        goto label_1c0614;
    }
    ctx->pc = 0x1C060Cu;
    {
        const bool branch_taken_0x1c060c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c060c) {
            ctx->pc = 0x1C0920u;
            goto label_1c0920;
        }
    }
    ctx->pc = 0x1C0614u;
label_1c0614:
    // 0x1c0614: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c0614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c0618:
    // 0x1c0618: 0x27b1007c  addiu       $s1, $sp, 0x7C
    ctx->pc = 0x1c0618u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_1c061c:
    // 0x1c061c: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x1c061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_1c0620:
    // 0x1c0620: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c0620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c0624:
    // 0x1c0624: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c0624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c0628:
    // 0x1c0628: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x1c0628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1c062c:
    // 0x1c062c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1c062cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1c0630:
    // 0x1c0630: 0x320f809  jalr        $t9
label_1c0634:
    if (ctx->pc == 0x1C0634u) {
        ctx->pc = 0x1C0638u;
        goto label_1c0638;
    }
    ctx->pc = 0x1C0630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C0638u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0638u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0638u; }
            if (ctx->pc != 0x1C0638u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0638u;
label_1c0638:
    // 0x1c0638: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c0638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c063c:
    // 0x1c063c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1c063cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c0640:
    // 0x1c0640: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x1c0640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_1c0644:
    // 0x1c0644: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c0644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c0648:
    // 0x1c0648: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x1c0648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1c064c:
    // 0x1c064c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1c064cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1c0650:
    // 0x1c0650: 0x320f809  jalr        $t9
label_1c0654:
    if (ctx->pc == 0x1C0654u) {
        ctx->pc = 0x1C0658u;
        goto label_1c0658;
    }
    ctx->pc = 0x1C0650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C0658u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0658u; }
            if (ctx->pc != 0x1C0658u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0658u;
label_1c0658:
    // 0x1c0658: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c0658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c065c:
    // 0x1c065c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1c065cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_1c0660:
    // 0x1c0660: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x1c0660u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c0664:
    // 0x1c0664: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1c0664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_1c0668:
    // 0x1c0668: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1c0668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_1c066c:
    // 0x1c066c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1c066cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_1c0670:
    // 0x1c0670: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1c0670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_1c0674:
    // 0x1c0674: 0xc051150  jal         func_144540
label_1c0678:
    if (ctx->pc == 0x1C0678u) {
        ctx->pc = 0x1C0678u;
            // 0x1c0678: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->pc = 0x1C067Cu;
        goto label_1c067c;
    }
    ctx->pc = 0x1C0674u;
    SET_GPR_U32(ctx, 31, 0x1C067Cu);
    ctx->pc = 0x1C0678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0674u;
            // 0x1c0678: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144540u;
    if (runtime->hasFunction(0x144540u)) {
        auto targetFn = runtime->lookupFunction(0x144540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C067Cu; }
        if (ctx->pc != 0x1C067Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetpDrawEnv__Fi_0x144540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C067Cu; }
        if (ctx->pc != 0x1C067Cu) { return; }
    }
    ctx->pc = 0x1C067Cu;
label_1c067c:
    // 0x1c067c: 0xdc4d0000  ld          $t5, 0x0($v0)
    ctx->pc = 0x1c067cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1c0680:
    // 0x1c0680: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c0680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c0684:
    // 0x1c0684: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x1c0684u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_1c0688:
    // 0x1c0688: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x1c0688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1c068c:
    // 0x1c068c: 0x27ac00d0  addiu       $t4, $sp, 0xD0
    ctx->pc = 0x1c068cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1c0690:
    // 0x1c0690: 0x27ab00e0  addiu       $t3, $sp, 0xE0
    ctx->pc = 0x1c0690u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1c0694:
    // 0x1c0694: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1c0694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1c0698:
    // 0x1c0698: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x1c0698u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1c069c:
    // 0x1c069c: 0x2406fff9  addiu       $a2, $zero, -0x7
    ctx->pc = 0x1c069cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_1c06a0:
    // 0x1c06a0: 0x64070004  daddiu      $a3, $zero, 0x4
    ctx->pc = 0x1c06a0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_1c06a4:
    // 0x1c06a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c06a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c06a8:
    // 0x1c06a8: 0xfc8d0000  sd          $t5, 0x0($a0)
    ctx->pc = 0x1c06a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 13));
label_1c06ac:
    // 0x1c06ac: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x1c06acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
label_1c06b0:
    // 0x1c06b0: 0xdc4a0010  ld          $t2, 0x10($v0)
    ctx->pc = 0x1c06b0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_1c06b4:
    // 0x1c06b4: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x1c06b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
label_1c06b8:
    // 0x1c06b8: 0xdc4a0018  ld          $t2, 0x18($v0)
    ctx->pc = 0x1c06b8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_1c06bc:
    // 0x1c06bc: 0xffaa00c8  sd          $t2, 0xC8($sp)
    ctx->pc = 0x1c06bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 10));
label_1c06c0:
    // 0x1c06c0: 0xdc4a0020  ld          $t2, 0x20($v0)
    ctx->pc = 0x1c06c0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_1c06c4:
    // 0x1c06c4: 0xfd8a0000  sd          $t2, 0x0($t4)
    ctx->pc = 0x1c06c4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 10));
label_1c06c8:
    // 0x1c06c8: 0xdc4a0028  ld          $t2, 0x28($v0)
    ctx->pc = 0x1c06c8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 40)));
label_1c06cc:
    // 0x1c06cc: 0xffaa00d8  sd          $t2, 0xD8($sp)
    ctx->pc = 0x1c06ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 10));
label_1c06d0:
    // 0x1c06d0: 0xdc4a0030  ld          $t2, 0x30($v0)
    ctx->pc = 0x1c06d0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 2), 48)));
label_1c06d4:
    // 0x1c06d4: 0xfd6a0000  sd          $t2, 0x0($t3)
    ctx->pc = 0x1c06d4u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 10));
label_1c06d8:
    // 0x1c06d8: 0xdc420038  ld          $v0, 0x38($v0)
    ctx->pc = 0x1c06d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 56)));
label_1c06dc:
    // 0x1c06dc: 0xffa200e8  sd          $v0, 0xE8($sp)
    ctx->pc = 0x1c06dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 2));
label_1c06e0:
    // 0x1c06e0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1c06e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1c06e4:
    // 0x1c06e4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1c06e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_1c06e8:
    // 0x1c06e8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1c06e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_1c06ec:
    // 0x1c06ec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1c06ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1c06f0:
    // 0x1c06f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1c06f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1c06f4:
    // 0x1c06f4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1c06f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1c06f8:
    // 0x1c06f8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c06f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_1c06fc:
    // 0x1c06fc: 0xc04e290  jal         func_138A40
label_1c0700:
    if (ctx->pc == 0x1C0700u) {
        ctx->pc = 0x1C0700u;
            // 0x1c0700: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1C0704u;
        goto label_1c0704;
    }
    ctx->pc = 0x1C06FCu;
    SET_GPR_U32(ctx, 31, 0x1C0704u);
    ctx->pc = 0x1C0700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C06FCu;
            // 0x1c0700: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138A40u;
    if (runtime->hasFunction(0x138A40u)) {
        auto targetFn = runtime->lookupFunction(0x138A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0704u; }
        if (ctx->pc != 0x1C0704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetZBuf__10mgCDrawEnvFi_0x138a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0704u; }
        if (ctx->pc != 0x1C0704u) { return; }
    }
    ctx->pc = 0x1C0704u;
label_1c0704:
    // 0x1c0704: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c0704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c0708:
    // 0x1c0708: 0xc04e25c  jal         func_138970
label_1c070c:
    if (ctx->pc == 0x1C070Cu) {
        ctx->pc = 0x1C070Cu;
            // 0x1c070c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C0710u;
        goto label_1c0710;
    }
    ctx->pc = 0x1C0708u;
    SET_GPR_U32(ctx, 31, 0x1C0710u);
    ctx->pc = 0x1C070Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0708u;
            // 0x1c070c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0710u; }
        if (ctx->pc != 0x1C0710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0710u; }
        if (ctx->pc != 0x1C0710u) { return; }
    }
    ctx->pc = 0x1C0710u;
label_1c0710:
    // 0x1c0710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0714:
    // 0x1c0714: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c0714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0718:
    // 0x1c0718: 0xc04ec68  jal         func_13B1A0
label_1c071c:
    if (ctx->pc == 0x1C071Cu) {
        ctx->pc = 0x1C071Cu;
            // 0x1c071c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0720u;
        goto label_1c0720;
    }
    ctx->pc = 0x1C0718u;
    SET_GPR_U32(ctx, 31, 0x1C0720u);
    ctx->pc = 0x1C071Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0718u;
            // 0x1c071c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B1A0u;
    if (runtime->hasFunction(0x13B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x13B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0720u; }
        if (ctx->pc != 0x1C0720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCreatePacket__11mgC3DSpriteFiP14mgCDrawManager_0x13b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0720u; }
        if (ctx->pc != 0x1C0720u) { return; }
    }
    ctx->pc = 0x1C0720u;
label_1c0720:
    // 0x1c0720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0724:
    // 0x1c0724: 0xc04ec80  jal         func_13B200
label_1c0728:
    if (ctx->pc == 0x1C0728u) {
        ctx->pc = 0x1C0728u;
            // 0x1c0728: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1C072Cu;
        goto label_1c072c;
    }
    ctx->pc = 0x1C0724u;
    SET_GPR_U32(ctx, 31, 0x1C072Cu);
    ctx->pc = 0x1C0728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0724u;
            // 0x1c0728: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B200u;
    if (runtime->hasFunction(0x13B200u)) {
        auto targetFn = runtime->lookupFunction(0x13B200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C072Cu; }
        if (ctx->pc != 0x1C072Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv_0x13b200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C072Cu; }
        if (ctx->pc != 0x1C072Cu) { return; }
    }
    ctx->pc = 0x1C072Cu;
label_1c072c:
    // 0x1c072c: 0x8f858ea8  lw          $a1, -0x7158($gp)
    ctx->pc = 0x1c072cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938280)));
label_1c0730:
    // 0x1c0730: 0xc04ecbc  jal         func_13B2F0
label_1c0734:
    if (ctx->pc == 0x1C0734u) {
        ctx->pc = 0x1C0734u;
            // 0x1c0734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0738u;
        goto label_1c0738;
    }
    ctx->pc = 0x1C0730u;
    SET_GPR_U32(ctx, 31, 0x1C0738u);
    ctx->pc = 0x1C0734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0730u;
            // 0x1c0734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B2F0u;
    if (runtime->hasFunction(0x13B2F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0738u; }
        if (ctx->pc != 0x1C0738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetTexture__11mgC3DSpriteFP10mgCTexture_0x13b2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0738u; }
        if (ctx->pc != 0x1C0738u) { return; }
    }
    ctx->pc = 0x1C0738u;
label_1c0738:
    // 0x1c0738: 0x261201b0  addiu       $s2, $s0, 0x1B0
    ctx->pc = 0x1c0738u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
label_1c073c:
    // 0x1c073c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c073cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0740:
    // 0x1c0740: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x1c0740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0744:
    // 0x1c0744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c0744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c0748:
    // 0x1c0748: 0x0  nop
    ctx->pc = 0x1c0748u;
    // NOP
label_1c074c:
    // 0x1c074c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c074cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c0750:
    // 0x1c0750: 0x0  nop
    ctx->pc = 0x1c0750u;
    // NOP
label_1c0754:
    // 0x1c0754: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1c0758:
    if (ctx->pc == 0x1C0758u) {
        ctx->pc = 0x1C075Cu;
        goto label_1c075c;
    }
    ctx->pc = 0x1C0754u;
    {
        const bool branch_taken_0x1c0754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0754) {
            ctx->pc = 0x1C0764u;
            goto label_1c0764;
        }
    }
    ctx->pc = 0x1C075Cu;
label_1c075c:
    // 0x1c075c: 0x10000060  b           . + 4 + (0x60 << 2)
label_1c0760:
    if (ctx->pc == 0x1C0760u) {
        ctx->pc = 0x1C0760u;
            // 0x1c0760: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->pc = 0x1C0764u;
        goto label_1c0764;
    }
    ctx->pc = 0x1C075Cu;
    {
        const bool branch_taken_0x1c075c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C075Cu;
            // 0x1c0760: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c075c) {
            ctx->pc = 0x1C08E0u;
            goto label_1c08e0;
        }
    }
    ctx->pc = 0x1C0764u;
label_1c0764:
    // 0x1c0764: 0x0  nop
    ctx->pc = 0x1c0764u;
    // NOP
label_1c0768:
    // 0x1c0768: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c0768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1c076c:
    // 0x1c076c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c076cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1c0770:
    // 0x1c0770: 0x82450030  lb          $a1, 0x30($s2)
    ctx->pc = 0x1c0770u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
label_1c0774:
    // 0x1c0774: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1c0774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_1c0778:
    // 0x1c0778: 0x27b400f8  addiu       $s4, $sp, 0xF8
    ctx->pc = 0x1c0778u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_1c077c:
    // 0x1c077c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1c077cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1c0780:
    // 0x1c0780: 0x24848d50  addiu       $a0, $a0, -0x72B0
    ctx->pc = 0x1c0780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937936));
label_1c0784:
    // 0x1c0784: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1c0784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1c0788:
    // 0x1c0788: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1c0788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1c078c:
    // 0x1c078c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1c078cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_1c0790:
    // 0x1c0790: 0xc6000db4  lwc1        $f0, 0xDB4($s0)
    ctx->pc = 0x1c0790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0794:
    // 0x1c0794: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c0794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1c0798:
    // 0x1c0798: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1c0798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1c079c:
    // 0x1c079c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1c079cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1c07a0:
    // 0x1c07a0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1c07a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c07a4:
    // 0x1c07a4: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x1c07a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c07a8:
    // 0x1c07a8: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1c07a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1c07ac:
    // 0x1c07ac: 0x0  nop
    ctx->pc = 0x1c07acu;
    // NOP
label_1c07b0:
    // 0x1c07b0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1c07b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1c07b4:
    // 0x1c07b4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1c07b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1c07b8:
    // 0x1c07b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c07b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1c07bc:
    // 0x1c07bc: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1c07bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1c07c0:
    // 0x1c07c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c07c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c07c4:
    // 0x1c07c4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1c07c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1c07c8:
    // 0x1c07c8: 0x82420030  lb          $v0, 0x30($s2)
    ctx->pc = 0x1c07c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
label_1c07cc:
    // 0x1c07cc: 0xc6000db4  lwc1        $f0, 0xDB4($s0)
    ctx->pc = 0x1c07ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c07d0:
    // 0x1c07d0: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x1c07d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c07d4:
    // 0x1c07d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c07d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c07d8:
    // 0x1c07d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1c07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1c07dc:
    // 0x1c07dc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1c07dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c07e0:
    // 0x1c07e0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1c07e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1c07e4:
    // 0x1c07e4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1c07e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1c07e8:
    // 0x1c07e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c07e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1c07ec:
    // 0x1c07ec: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1c07ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1c07f0:
    // 0x1c07f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c07f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c07f4:
    // 0x1c07f4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1c07f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1c07f8:
    // 0x1c07f8: 0xc64c0020  lwc1        $f12, 0x20($s2)
    ctx->pc = 0x1c07f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c07fc:
    // 0x1c07fc: 0xc04c374  jal         func_130DD0
label_1c0800:
    if (ctx->pc == 0x1C0800u) {
        ctx->pc = 0x1C0800u;
            // 0x1c0800: 0xe68c0000  swc1        $f12, 0x0($s4) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->pc = 0x1C0804u;
        goto label_1c0804;
    }
    ctx->pc = 0x1C07FCu;
    SET_GPR_U32(ctx, 31, 0x1C0804u);
    ctx->pc = 0x1C0800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C07FCu;
            // 0x1c0800: 0xe68c0000  swc1        $f12, 0x0($s4) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0804u; }
        if (ctx->pc != 0x1C0804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0804u; }
        if (ctx->pc != 0x1C0804u) { return; }
    }
    ctx->pc = 0x1C0804u;
label_1c0804:
    // 0x1c0804: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1c0804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1c0808:
    // 0x1c0808: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1c0808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1c080c:
    // 0x1c080c: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1c080cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_1c0810:
    // 0x1c0810: 0x2442f220  addiu       $v0, $v0, -0xDE0
    ctx->pc = 0x1c0810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963744));
label_1c0814:
    // 0x1c0814: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x1c0814u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c0818:
    // 0x1c0818: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x1c0818u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1c081c:
    // 0x1c081c: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1c081cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_1c0820:
    // 0x1c0820: 0x24a58e10  addiu       $a1, $a1, -0x71F0
    ctx->pc = 0x1c0820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938128));
label_1c0824:
    // 0x1c0824: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x1c0824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1c0828:
    // 0x1c0828: 0x24c68db0  addiu       $a2, $a2, -0x7250
    ctx->pc = 0x1c0828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938032));
label_1c082c:
    // 0x1c082c: 0x27aa0104  addiu       $t2, $sp, 0x104
    ctx->pc = 0x1c082cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_1c0830:
    // 0x1c0830: 0x27a30120  addiu       $v1, $sp, 0x120
    ctx->pc = 0x1c0830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c0834:
    // 0x1c0834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0838:
    // 0x1c0838: 0x7d280000  sq          $t0, 0x0($t1)
    ctx->pc = 0x1c0838u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 8));
label_1c083c:
    // 0x1c083c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c083cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1c0840:
    // 0x1c0840: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x1c0840u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1c0844:
    // 0x1c0844: 0x24428e20  addiu       $v0, $v0, -0x71E0
    ctx->pc = 0x1c0844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938144));
label_1c0848:
    // 0x1c0848: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x1c0848u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
label_1c084c:
    // 0x1c084c: 0x82450030  lb          $a1, 0x30($s2)
    ctx->pc = 0x1c084cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
label_1c0850:
    // 0x1c0850: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1c0850u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1c0854:
    // 0x1c0854: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1c0854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1c0858:
    // 0x1c0858: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1c0858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c085c:
    // 0x1c085c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1c085cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1c0860:
    // 0x1c0860: 0x82450030  lb          $a1, 0x30($s2)
    ctx->pc = 0x1c0860u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
label_1c0864:
    // 0x1c0864: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1c0864u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1c0868:
    // 0x1c0868: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1c0868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1c086c:
    // 0x1c086c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1c086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0870:
    // 0x1c0870: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x1c0870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_1c0874:
    // 0x1c0874: 0x82450030  lb          $a1, 0x30($s2)
    ctx->pc = 0x1c0874u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
label_1c0878:
    // 0x1c0878: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x1c0878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c087c:
    // 0x1c087c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1c087cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1c0880:
    // 0x1c0880: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1c0880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1c0884:
    // 0x1c0884: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1c0884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0888:
    // 0x1c0888: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c0888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c088c:
    // 0x1c088c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1c088cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1c0890:
    // 0x1c0890: 0x82450030  lb          $a1, 0x30($s2)
    ctx->pc = 0x1c0890u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 48)));
label_1c0894:
    // 0x1c0894: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x1c0894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0898:
    // 0x1c0898: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1c0898u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1c089c:
    // 0x1c089c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1c089cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1c08a0:
    // 0x1c08a0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1c08a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c08a4:
    // 0x1c08a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c08a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c08a8:
    // 0x1c08a8: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1c08a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1c08ac:
    // 0x1c08ac: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1c08acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c08b0:
    // 0x1c08b0: 0xc04ecd8  jal         func_13B360
label_1c08b4:
    if (ctx->pc == 0x1C08B4u) {
        ctx->pc = 0x1C08B4u;
            // 0x1c08b4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x1C08B8u;
        goto label_1c08b8;
    }
    ctx->pc = 0x1C08B0u;
    SET_GPR_U32(ctx, 31, 0x1C08B8u);
    ctx->pc = 0x1C08B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08B0u;
            // 0x1c08b4: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B360u;
    if (runtime->hasFunction(0x13B360u)) {
        auto targetFn = runtime->lookupFunction(0x13B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08B8u; }
        if (ctx->pc != 0x1C08B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCPSprite__11mgC3DSpriteFv_0x13b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08B8u; }
        if (ctx->pc != 0x1C08B8u) { return; }
    }
    ctx->pc = 0x1C08B8u;
label_1c08b8:
    // 0x1c08b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c08b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c08bc:
    // 0x1c08bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c08bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c08c0:
    // 0x1c08c0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1c08c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1c08c4:
    // 0x1c08c4: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x1c08c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c08c8:
    // 0x1c08c8: 0x27a80100  addiu       $t0, $sp, 0x100
    ctx->pc = 0x1c08c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1c08cc:
    // 0x1c08cc: 0xc04ed64  jal         func_13B590
label_1c08d0:
    if (ctx->pc == 0x1C08D0u) {
        ctx->pc = 0x1C08D0u;
            // 0x1c08d0: 0x27a90110  addiu       $t1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1C08D4u;
        goto label_1c08d4;
    }
    ctx->pc = 0x1C08CCu;
    SET_GPR_U32(ctx, 31, 0x1C08D4u);
    ctx->pc = 0x1C08D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08CCu;
            // 0x1c08d0: 0x27a90110  addiu       $t1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (runtime->hasFunction(0x13B590u)) {
        auto targetFn = runtime->lookupFunction(0x13B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08D4u; }
        if (ctx->pc != 0x1C08D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetSprite__11mgC3DSpriteFPfPfPfPfPf_0x13b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08D4u; }
        if (ctx->pc != 0x1C08D4u) { return; }
    }
    ctx->pc = 0x1C08D4u;
label_1c08d4:
    // 0x1c08d4: 0xc04edb0  jal         func_13B6C0
label_1c08d8:
    if (ctx->pc == 0x1C08D8u) {
        ctx->pc = 0x1C08D8u;
            // 0x1c08d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C08DCu;
        goto label_1c08dc;
    }
    ctx->pc = 0x1C08D4u;
    SET_GPR_U32(ctx, 31, 0x1C08DCu);
    ctx->pc = 0x1C08D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08D4u;
            // 0x1c08d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B6C0u;
    if (runtime->hasFunction(0x13B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08DCu; }
        if (ctx->pc != 0x1C08DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCPSprite__11mgC3DSpriteFv_0x13b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08DCu; }
        if (ctx->pc != 0x1C08DCu) { return; }
    }
    ctx->pc = 0x1C08DCu;
label_1c08dc:
    // 0x1c08dc: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1c08dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1c08e0:
    // 0x1c08e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c08e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c08e4:
    // 0x1c08e4: 0x2a620030  slti        $v0, $s3, 0x30
    ctx->pc = 0x1c08e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)48) ? 1 : 0);
label_1c08e8:
    // 0x1c08e8: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
label_1c08ec:
    if (ctx->pc == 0x1C08ECu) {
        ctx->pc = 0x1C08ECu;
            // 0x1c08ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C08F0u;
        goto label_1c08f0;
    }
    ctx->pc = 0x1C08E8u;
    {
        const bool branch_taken_0x1c08e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C08ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C08E8u;
            // 0x1c08ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c08e8) {
            ctx->pc = 0x1C0740u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c0740;
        }
    }
    ctx->pc = 0x1C08F0u;
label_1c08f0:
    // 0x1c08f0: 0xc04edfc  jal         func_13B7F0
label_1c08f4:
    if (ctx->pc == 0x1C08F4u) {
        ctx->pc = 0x1C08F8u;
        goto label_1c08f8;
    }
    ctx->pc = 0x1C08F0u;
    SET_GPR_U32(ctx, 31, 0x1C08F8u);
    ctx->pc = 0x13B7F0u;
    if (runtime->hasFunction(0x13B7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08F8u; }
        if (ctx->pc != 0x1C08F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCreatePacket__11mgC3DSpriteFv_0x13b7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C08F8u; }
        if (ctx->pc != 0x1C08F8u) { return; }
    }
    ctx->pc = 0x1C08F8u;
label_1c08f8:
    // 0x1c08f8: 0x82030db1  lb          $v1, 0xDB1($s0)
    ctx->pc = 0x1c08f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3505)));
label_1c08fc:
    // 0x1c08fc: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
label_1c0900:
    if (ctx->pc == 0x1C0900u) {
        ctx->pc = 0x1C0904u;
        goto label_1c0904;
    }
    ctx->pc = 0x1C08FCu;
    {
        const bool branch_taken_0x1c08fc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c08fc) {
            ctx->pc = 0x1C0920u;
            goto label_1c0920;
        }
    }
    ctx->pc = 0x1C0904u;
label_1c0904:
    // 0x1c0904: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1c0904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c0908:
    // 0x1c0908: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1c0908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c090c:
    // 0x1c090c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x1c090cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_1c0910:
    // 0x1c0910: 0x320f809  jalr        $t9
label_1c0914:
    if (ctx->pc == 0x1C0914u) {
        ctx->pc = 0x1C0914u;
            // 0x1c0914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0918u;
        goto label_1c0918;
    }
    ctx->pc = 0x1C0910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C0918u);
        ctx->pc = 0x1C0914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0910u;
            // 0x1c0914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0918u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0918u; }
            if (ctx->pc != 0x1C0918u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0918u;
label_1c0918:
    // 0x1c0918: 0xc050bf4  jal         func_142FD0
label_1c091c:
    if (ctx->pc == 0x1C091Cu) {
        ctx->pc = 0x1C091Cu;
            // 0x1c091c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0920u;
        goto label_1c0920;
    }
    ctx->pc = 0x1C0918u;
    SET_GPR_U32(ctx, 31, 0x1C0920u);
    ctx->pc = 0x1C091Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0918u;
            // 0x1c091c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0920u; }
        if (ctx->pc != 0x1C0920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0920u; }
        if (ctx->pc != 0x1C0920u) { return; }
    }
    ctx->pc = 0x1C0920u;
label_1c0920:
    // 0x1c0920: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c0920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c0924:
    // 0x1c0924: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c0924u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c0928:
    // 0x1c0928: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c0928u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c092c:
    // 0x1c092c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c092cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0930:
    // 0x1c0930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0934:
    // 0x1c0934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0938:
    // 0x1c0938: 0x3e00008  jr          $ra
label_1c093c:
    if (ctx->pc == 0x1C093Cu) {
        ctx->pc = 0x1C093Cu;
            // 0x1c093c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1C0940u;
        goto label_fallthrough_0x1c0938;
    }
    ctx->pc = 0x1C0938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C093Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0938u;
            // 0x1c093c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c0938:
    ctx->pc = 0x1C0940u;
}
