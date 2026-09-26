#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_REF_DIR__FP12RS_STACKDATAi
// Address: 0x1e4630 - 0x1e4894
void ps2__GET_REF_DIR__FP12RS_STACKDATAi_0x1e4630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_REF_DIR__FP12RS_STACKDATAi_0x1e4630");
#endif

    switch (ctx->pc) {
        case 0x1e4630u: goto label_1e4630;
        case 0x1e4634u: goto label_1e4634;
        case 0x1e4638u: goto label_1e4638;
        case 0x1e463cu: goto label_1e463c;
        case 0x1e4640u: goto label_1e4640;
        case 0x1e4644u: goto label_1e4644;
        case 0x1e4648u: goto label_1e4648;
        case 0x1e464cu: goto label_1e464c;
        case 0x1e4650u: goto label_1e4650;
        case 0x1e4654u: goto label_1e4654;
        case 0x1e4658u: goto label_1e4658;
        case 0x1e465cu: goto label_1e465c;
        case 0x1e4660u: goto label_1e4660;
        case 0x1e4664u: goto label_1e4664;
        case 0x1e4668u: goto label_1e4668;
        case 0x1e466cu: goto label_1e466c;
        case 0x1e4670u: goto label_1e4670;
        case 0x1e4674u: goto label_1e4674;
        case 0x1e4678u: goto label_1e4678;
        case 0x1e467cu: goto label_1e467c;
        case 0x1e4680u: goto label_1e4680;
        case 0x1e4684u: goto label_1e4684;
        case 0x1e4688u: goto label_1e4688;
        case 0x1e468cu: goto label_1e468c;
        case 0x1e4690u: goto label_1e4690;
        case 0x1e4694u: goto label_1e4694;
        case 0x1e4698u: goto label_1e4698;
        case 0x1e469cu: goto label_1e469c;
        case 0x1e46a0u: goto label_1e46a0;
        case 0x1e46a4u: goto label_1e46a4;
        case 0x1e46a8u: goto label_1e46a8;
        case 0x1e46acu: goto label_1e46ac;
        case 0x1e46b0u: goto label_1e46b0;
        case 0x1e46b4u: goto label_1e46b4;
        case 0x1e46b8u: goto label_1e46b8;
        case 0x1e46bcu: goto label_1e46bc;
        case 0x1e46c0u: goto label_1e46c0;
        case 0x1e46c4u: goto label_1e46c4;
        case 0x1e46c8u: goto label_1e46c8;
        case 0x1e46ccu: goto label_1e46cc;
        case 0x1e46d0u: goto label_1e46d0;
        case 0x1e46d4u: goto label_1e46d4;
        case 0x1e46d8u: goto label_1e46d8;
        case 0x1e46dcu: goto label_1e46dc;
        case 0x1e46e0u: goto label_1e46e0;
        case 0x1e46e4u: goto label_1e46e4;
        case 0x1e46e8u: goto label_1e46e8;
        case 0x1e46ecu: goto label_1e46ec;
        case 0x1e46f0u: goto label_1e46f0;
        case 0x1e46f4u: goto label_1e46f4;
        case 0x1e46f8u: goto label_1e46f8;
        case 0x1e46fcu: goto label_1e46fc;
        case 0x1e4700u: goto label_1e4700;
        case 0x1e4704u: goto label_1e4704;
        case 0x1e4708u: goto label_1e4708;
        case 0x1e470cu: goto label_1e470c;
        case 0x1e4710u: goto label_1e4710;
        case 0x1e4714u: goto label_1e4714;
        case 0x1e4718u: goto label_1e4718;
        case 0x1e471cu: goto label_1e471c;
        case 0x1e4720u: goto label_1e4720;
        case 0x1e4724u: goto label_1e4724;
        case 0x1e4728u: goto label_1e4728;
        case 0x1e472cu: goto label_1e472c;
        case 0x1e4730u: goto label_1e4730;
        case 0x1e4734u: goto label_1e4734;
        case 0x1e4738u: goto label_1e4738;
        case 0x1e473cu: goto label_1e473c;
        case 0x1e4740u: goto label_1e4740;
        case 0x1e4744u: goto label_1e4744;
        case 0x1e4748u: goto label_1e4748;
        case 0x1e474cu: goto label_1e474c;
        case 0x1e4750u: goto label_1e4750;
        case 0x1e4754u: goto label_1e4754;
        case 0x1e4758u: goto label_1e4758;
        case 0x1e475cu: goto label_1e475c;
        case 0x1e4760u: goto label_1e4760;
        case 0x1e4764u: goto label_1e4764;
        case 0x1e4768u: goto label_1e4768;
        case 0x1e476cu: goto label_1e476c;
        case 0x1e4770u: goto label_1e4770;
        case 0x1e4774u: goto label_1e4774;
        case 0x1e4778u: goto label_1e4778;
        case 0x1e477cu: goto label_1e477c;
        case 0x1e4780u: goto label_1e4780;
        case 0x1e4784u: goto label_1e4784;
        case 0x1e4788u: goto label_1e4788;
        case 0x1e478cu: goto label_1e478c;
        case 0x1e4790u: goto label_1e4790;
        case 0x1e4794u: goto label_1e4794;
        case 0x1e4798u: goto label_1e4798;
        case 0x1e479cu: goto label_1e479c;
        case 0x1e47a0u: goto label_1e47a0;
        case 0x1e47a4u: goto label_1e47a4;
        case 0x1e47a8u: goto label_1e47a8;
        case 0x1e47acu: goto label_1e47ac;
        case 0x1e47b0u: goto label_1e47b0;
        case 0x1e47b4u: goto label_1e47b4;
        case 0x1e47b8u: goto label_1e47b8;
        case 0x1e47bcu: goto label_1e47bc;
        case 0x1e47c0u: goto label_1e47c0;
        case 0x1e47c4u: goto label_1e47c4;
        case 0x1e47c8u: goto label_1e47c8;
        case 0x1e47ccu: goto label_1e47cc;
        case 0x1e47d0u: goto label_1e47d0;
        case 0x1e47d4u: goto label_1e47d4;
        case 0x1e47d8u: goto label_1e47d8;
        case 0x1e47dcu: goto label_1e47dc;
        case 0x1e47e0u: goto label_1e47e0;
        case 0x1e47e4u: goto label_1e47e4;
        case 0x1e47e8u: goto label_1e47e8;
        case 0x1e47ecu: goto label_1e47ec;
        case 0x1e47f0u: goto label_1e47f0;
        case 0x1e47f4u: goto label_1e47f4;
        case 0x1e47f8u: goto label_1e47f8;
        case 0x1e47fcu: goto label_1e47fc;
        case 0x1e4800u: goto label_1e4800;
        case 0x1e4804u: goto label_1e4804;
        case 0x1e4808u: goto label_1e4808;
        case 0x1e480cu: goto label_1e480c;
        case 0x1e4810u: goto label_1e4810;
        case 0x1e4814u: goto label_1e4814;
        case 0x1e4818u: goto label_1e4818;
        case 0x1e481cu: goto label_1e481c;
        case 0x1e4820u: goto label_1e4820;
        case 0x1e4824u: goto label_1e4824;
        case 0x1e4828u: goto label_1e4828;
        case 0x1e482cu: goto label_1e482c;
        case 0x1e4830u: goto label_1e4830;
        case 0x1e4834u: goto label_1e4834;
        case 0x1e4838u: goto label_1e4838;
        case 0x1e483cu: goto label_1e483c;
        case 0x1e4840u: goto label_1e4840;
        case 0x1e4844u: goto label_1e4844;
        case 0x1e4848u: goto label_1e4848;
        case 0x1e484cu: goto label_1e484c;
        case 0x1e4850u: goto label_1e4850;
        case 0x1e4854u: goto label_1e4854;
        case 0x1e4858u: goto label_1e4858;
        case 0x1e485cu: goto label_1e485c;
        case 0x1e4860u: goto label_1e4860;
        case 0x1e4864u: goto label_1e4864;
        case 0x1e4868u: goto label_1e4868;
        case 0x1e486cu: goto label_1e486c;
        case 0x1e4870u: goto label_1e4870;
        case 0x1e4874u: goto label_1e4874;
        case 0x1e4878u: goto label_1e4878;
        case 0x1e487cu: goto label_1e487c;
        case 0x1e4880u: goto label_1e4880;
        case 0x1e4884u: goto label_1e4884;
        case 0x1e4888u: goto label_1e4888;
        case 0x1e488cu: goto label_1e488c;
        case 0x1e4890u: goto label_1e4890;
        default: break;
    }

    ctx->pc = 0x1e4630u;

label_1e4630:
    // 0x1e4630: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e4630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e4634:
    // 0x1e4634: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1e4634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e4638:
    // 0x1e4638: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e4638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e463c:
    // 0x1e463c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e4640:
    // 0x1e4640: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e4640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e4644:
    // 0x1e4644: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e4648:
    if (ctx->pc == 0x1E4648u) {
        ctx->pc = 0x1E4648u;
            // 0x1e4648: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x1E464Cu;
        goto label_1e464c;
    }
    ctx->pc = 0x1E4644u;
    {
        const bool branch_taken_0x1e4644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4644u;
            // 0x1e4648: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4644) {
            ctx->pc = 0x1E4658u;
            goto label_1e4658;
        }
    }
    ctx->pc = 0x1E464Cu;
label_1e464c:
    // 0x1e464c: 0x28a10006  slti        $at, $a1, 0x6
    ctx->pc = 0x1e464cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
label_1e4650:
    // 0x1e4650: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e4654:
    if (ctx->pc == 0x1E4654u) {
        ctx->pc = 0x1E4654u;
            // 0x1e4654: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4658u;
        goto label_1e4658;
    }
    ctx->pc = 0x1E4650u;
    {
        const bool branch_taken_0x1e4650 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4650u;
            // 0x1e4654: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4650) {
            ctx->pc = 0x1E4660u;
            goto label_1e4660;
        }
    }
    ctx->pc = 0x1E4658u;
label_1e4658:
    // 0x1e4658: 0x10000088  b           . + 4 + (0x88 << 2)
label_1e465c:
    if (ctx->pc == 0x1E465Cu) {
        ctx->pc = 0x1E465Cu;
            // 0x1e465c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4660u;
        goto label_1e4660;
    }
    ctx->pc = 0x1E4658u;
    {
        const bool branch_taken_0x1e4658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E465Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4658u;
            // 0x1e465c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4658) {
            ctx->pc = 0x1E487Cu;
            goto label_1e487c;
        }
    }
    ctx->pc = 0x1E4660u;
label_1e4660:
    // 0x1e4660: 0xc0781ac  jal         func_1E06B0
label_1e4664:
    if (ctx->pc == 0x1E4664u) {
        ctx->pc = 0x1E4668u;
        goto label_1e4668;
    }
    ctx->pc = 0x1E4660u;
    SET_GPR_U32(ctx, 31, 0x1E4668u);
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4668u; }
        if (ctx->pc != 0x1E4668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4668u; }
        if (ctx->pc != 0x1E4668u) { return; }
    }
    ctx->pc = 0x1E4668u;
label_1e4668:
    // 0x1e4668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e466c:
    // 0x1e466c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1e466cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1e4670:
    // 0x1e4670: 0xc0781ac  jal         func_1E06B0
label_1e4674:
    if (ctx->pc == 0x1E4674u) {
        ctx->pc = 0x1E4674u;
            // 0x1e4674: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4678u;
        goto label_1e4678;
    }
    ctx->pc = 0x1E4670u;
    SET_GPR_U32(ctx, 31, 0x1E4678u);
    ctx->pc = 0x1E4674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4670u;
            // 0x1e4674: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4678u; }
        if (ctx->pc != 0x1E4678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4678u; }
        if (ctx->pc != 0x1E4678u) { return; }
    }
    ctx->pc = 0x1E4678u;
label_1e4678:
    // 0x1e4678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e467c:
    // 0x1e467c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1e467cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1e4680:
    // 0x1e4680: 0xc0781ac  jal         func_1E06B0
label_1e4684:
    if (ctx->pc == 0x1E4684u) {
        ctx->pc = 0x1E4684u;
            // 0x1e4684: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4688u;
        goto label_1e4688;
    }
    ctx->pc = 0x1E4680u;
    SET_GPR_U32(ctx, 31, 0x1E4688u);
    ctx->pc = 0x1E4684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4680u;
            // 0x1e4684: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4688u; }
        if (ctx->pc != 0x1E4688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4688u; }
        if (ctx->pc != 0x1E4688u) { return; }
    }
    ctx->pc = 0x1E4688u;
label_1e4688:
    // 0x1e4688: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x1e4688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e468c:
    // 0x1e468c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e468cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4690:
    // 0x1e4690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e4690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e4694:
    // 0x1e4694: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x1e4694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1e4698:
    // 0x1e4698: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1e4698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1e469c:
    // 0x1e469c: 0xc0781ac  jal         func_1E06B0
label_1e46a0:
    if (ctx->pc == 0x1E46A0u) {
        ctx->pc = 0x1E46A0u;
            // 0x1e46a0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x1E46A4u;
        goto label_1e46a4;
    }
    ctx->pc = 0x1E469Cu;
    SET_GPR_U32(ctx, 31, 0x1E46A4u);
    ctx->pc = 0x1E46A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E469Cu;
            // 0x1e46a0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46A4u; }
        if (ctx->pc != 0x1E46A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46A4u; }
        if (ctx->pc != 0x1E46A4u) { return; }
    }
    ctx->pc = 0x1E46A4u;
label_1e46a4:
    // 0x1e46a4: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e46a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e46a8:
    // 0x1e46a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e46a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e46ac:
    // 0x1e46ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e46acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e46b0:
    // 0x1e46b0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e46b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e46b4:
    // 0x1e46b4: 0x320f809  jalr        $t9
label_1e46b8:
    if (ctx->pc == 0x1E46B8u) {
        ctx->pc = 0x1E46B8u;
            // 0x1e46b8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E46BCu;
        goto label_1e46bc;
    }
    ctx->pc = 0x1E46B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E46BCu);
        ctx->pc = 0x1E46B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E46B4u;
            // 0x1e46b8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E46BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E46BCu; }
            if (ctx->pc != 0x1E46BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E46BCu;
label_1e46bc:
    // 0x1e46bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1e46bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e46c0:
    // 0x1e46c0: 0xc04c018  jal         func_130060
label_1e46c4:
    if (ctx->pc == 0x1E46C4u) {
        ctx->pc = 0x1E46C4u;
            // 0x1e46c4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E46C8u;
        goto label_1e46c8;
    }
    ctx->pc = 0x1E46C0u;
    SET_GPR_U32(ctx, 31, 0x1E46C8u);
    ctx->pc = 0x1E46C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E46C0u;
            // 0x1e46c4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46C8u; }
        if (ctx->pc != 0x1E46C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46C8u; }
        if (ctx->pc != 0x1E46C8u) { return; }
    }
    ctx->pc = 0x1E46C8u;
label_1e46c8:
    // 0x1e46c8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1e46c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e46cc:
    // 0x1e46cc: 0x0  nop
    ctx->pc = 0x1e46ccu;
    // NOP
label_1e46d0:
    // 0x1e46d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1e46d4:
    if (ctx->pc == 0x1E46D4u) {
        ctx->pc = 0x1E46D4u;
            // 0x1e46d4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E46D8u;
        goto label_1e46d8;
    }
    ctx->pc = 0x1E46D0u;
    {
        const bool branch_taken_0x1e46d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E46D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E46D0u;
            // 0x1e46d4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e46d0) {
            ctx->pc = 0x1E46ECu;
            goto label_1e46ec;
        }
    }
    ctx->pc = 0x1E46D8u;
label_1e46d8:
    // 0x1e46d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e46d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e46dc:
    // 0x1e46dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e46dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e46e0:
    // 0x1e46e0: 0xc0781bc  jal         func_1E06F0
label_1e46e4:
    if (ctx->pc == 0x1E46E4u) {
        ctx->pc = 0x1E46E4u;
            // 0x1e46e4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E46E8u;
        goto label_1e46e8;
    }
    ctx->pc = 0x1E46E0u;
    SET_GPR_U32(ctx, 31, 0x1E46E8u);
    ctx->pc = 0x1E46E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E46E0u;
            // 0x1e46e4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46E8u; }
        if (ctx->pc != 0x1E46E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46E8u; }
        if (ctx->pc != 0x1E46E8u) { return; }
    }
    ctx->pc = 0x1E46E8u;
label_1e46e8:
    // 0x1e46e8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e46e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e46ec:
    // 0x1e46ec: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1e46ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e46f0:
    // 0x1e46f0: 0xc041c3e  jal         func_1070F8
label_1e46f4:
    if (ctx->pc == 0x1E46F4u) {
        ctx->pc = 0x1E46F4u;
            // 0x1e46f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E46F8u;
        goto label_1e46f8;
    }
    ctx->pc = 0x1E46F0u;
    SET_GPR_U32(ctx, 31, 0x1E46F8u);
    ctx->pc = 0x1E46F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E46F0u;
            // 0x1e46f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46F8u; }
        if (ctx->pc != 0x1E46F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E46F8u; }
        if (ctx->pc != 0x1E46F8u) { return; }
    }
    ctx->pc = 0x1E46F8u;
label_1e46f8:
    // 0x1e46f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e46f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e46fc:
    // 0x1e46fc: 0xc041be0  jal         func_106F80
label_1e4700:
    if (ctx->pc == 0x1E4700u) {
        ctx->pc = 0x1E4700u;
            // 0x1e4700: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4704u;
        goto label_1e4704;
    }
    ctx->pc = 0x1E46FCu;
    SET_GPR_U32(ctx, 31, 0x1E4704u);
    ctx->pc = 0x1E4700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E46FCu;
            // 0x1e4700: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4704u; }
        if (ctx->pc != 0x1E4704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4704u; }
        if (ctx->pc != 0x1E4704u) { return; }
    }
    ctx->pc = 0x1E4704u;
label_1e4704:
    // 0x1e4704: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e4704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4708:
    // 0x1e4708: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e4708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e470c:
    // 0x1e470c: 0xc041c5c  jal         func_107170
label_1e4710:
    if (ctx->pc == 0x1E4710u) {
        ctx->pc = 0x1E4710u;
            // 0x1e4710: 0x24450690  addiu       $a1, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->pc = 0x1E4714u;
        goto label_1e4714;
    }
    ctx->pc = 0x1E470Cu;
    SET_GPR_U32(ctx, 31, 0x1E4714u);
    ctx->pc = 0x1E4710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E470Cu;
            // 0x1e4710: 0x24450690  addiu       $a1, $v0, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4714u; }
        if (ctx->pc != 0x1E4714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4714u; }
        if (ctx->pc != 0x1E4714u) { return; }
    }
    ctx->pc = 0x1E4714u;
label_1e4714:
    // 0x1e4714: 0xc7ad0068  lwc1        $f13, 0x68($sp)
    ctx->pc = 0x1e4714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e4718:
    // 0x1e4718: 0xc047c76  jal         func_11F1D8
label_1e471c:
    if (ctx->pc == 0x1E471Cu) {
        ctx->pc = 0x1E471Cu;
            // 0x1e471c: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1E4720u;
        goto label_1e4720;
    }
    ctx->pc = 0x1E4718u;
    SET_GPR_U32(ctx, 31, 0x1E4720u);
    ctx->pc = 0x1E471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4718u;
            // 0x1e471c: 0xc7ac0060  lwc1        $f12, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4720u; }
        if (ctx->pc != 0x1E4720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4720u; }
        if (ctx->pc != 0x1E4720u) { return; }
    }
    ctx->pc = 0x1E4720u;
label_1e4720:
    // 0x1e4720: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x1e4720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e4724:
    // 0x1e4724: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1e4724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e4728:
    // 0x1e4728: 0xc047c76  jal         func_11F1D8
label_1e472c:
    if (ctx->pc == 0x1E472Cu) {
        ctx->pc = 0x1E472Cu;
            // 0x1e472c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E4730u;
        goto label_1e4730;
    }
    ctx->pc = 0x1E4728u;
    SET_GPR_U32(ctx, 31, 0x1E4730u);
    ctx->pc = 0x1E472Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4728u;
            // 0x1e472c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4730u; }
        if (ctx->pc != 0x1E4730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4730u; }
        if (ctx->pc != 0x1E4730u) { return; }
    }
    ctx->pc = 0x1E4730u;
label_1e4730:
    // 0x1e4730: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e4730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e4734:
    // 0x1e4734: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e4734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1e4738:
    // 0x1e4738: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1e4738u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1e473c:
    // 0x1e473c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e473cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4740:
    // 0x1e4740: 0x0  nop
    ctx->pc = 0x1e4740u;
    // NOP
label_1e4744:
    // 0x1e4744: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e4744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4748:
    // 0x1e4748: 0x0  nop
    ctx->pc = 0x1e4748u;
    // NOP
label_1e474c:
    // 0x1e474c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e4750:
    if (ctx->pc == 0x1E4750u) {
        ctx->pc = 0x1E4750u;
            // 0x1e4750: 0x3c02bf4c  lui         $v0, 0xBF4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
        ctx->pc = 0x1E4754u;
        goto label_1e4754;
    }
    ctx->pc = 0x1E474Cu;
    {
        const bool branch_taken_0x1e474c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E474Cu;
            // 0x1e4750: 0x3c02bf4c  lui         $v0, 0xBF4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e474c) {
            ctx->pc = 0x1E476Cu;
            goto label_1e476c;
        }
    }
    ctx->pc = 0x1E4754u;
label_1e4754:
    // 0x1e4754: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e4754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e4758:
    // 0x1e4758: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e4758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1e475c:
    // 0x1e475c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e475cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4760:
    // 0x1e4760: 0x0  nop
    ctx->pc = 0x1e4760u;
    // NOP
label_1e4764:
    // 0x1e4764: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e4764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1e4768:
    // 0x1e4768: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x1e4768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
label_1e476c:
    // 0x1e476c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e476cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1e4770:
    // 0x1e4770: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4774:
    // 0x1e4774: 0x0  nop
    ctx->pc = 0x1e4774u;
    // NOP
label_1e4778:
    // 0x1e4778: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e4778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e477c:
    // 0x1e477c: 0x0  nop
    ctx->pc = 0x1e477cu;
    // NOP
label_1e4780:
    // 0x1e4780: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_1e4784:
    if (ctx->pc == 0x1E4784u) {
        ctx->pc = 0x1E4784u;
            // 0x1e4784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4788u;
        goto label_1e4788;
    }
    ctx->pc = 0x1E4780u;
    {
        const bool branch_taken_0x1e4780 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4780u;
            // 0x1e4784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4780) {
            ctx->pc = 0x1E47ACu;
            goto label_1e47ac;
        }
    }
    ctx->pc = 0x1E4788u;
label_1e4788:
    // 0x1e4788: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1e4788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1e478c:
    // 0x1e478c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e478cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1e4790:
    // 0x1e4790: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4794:
    // 0x1e4794: 0x0  nop
    ctx->pc = 0x1e4794u;
    // NOP
label_1e4798:
    // 0x1e4798: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e4798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e479c:
    // 0x1e479c: 0x0  nop
    ctx->pc = 0x1e479cu;
    // NOP
label_1e47a0:
    // 0x1e47a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e47a4:
    if (ctx->pc == 0x1E47A4u) {
        ctx->pc = 0x1E47A4u;
            // 0x1e47a4: 0x3c02c00c  lui         $v0, 0xC00C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49164 << 16));
        ctx->pc = 0x1E47A8u;
        goto label_1e47a8;
    }
    ctx->pc = 0x1E47A0u;
    {
        const bool branch_taken_0x1e47a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E47A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47A0u;
            // 0x1e47a4: 0x3c02c00c  lui         $v0, 0xC00C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49164 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47a0) {
            ctx->pc = 0x1E47B0u;
            goto label_1e47b0;
        }
    }
    ctx->pc = 0x1E47A8u;
label_1e47a8:
    // 0x1e47a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e47a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e47ac:
    // 0x1e47ac: 0x3c02c00c  lui         $v0, 0xC00C
    ctx->pc = 0x1e47acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49164 << 16));
label_1e47b0:
    // 0x1e47b0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e47b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1e47b4:
    // 0x1e47b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e47b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e47b8:
    // 0x1e47b8: 0x0  nop
    ctx->pc = 0x1e47b8u;
    // NOP
label_1e47bc:
    // 0x1e47bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e47bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e47c0:
    // 0x1e47c0: 0x0  nop
    ctx->pc = 0x1e47c0u;
    // NOP
label_1e47c4:
    // 0x1e47c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1e47c8:
    if (ctx->pc == 0x1E47C8u) {
        ctx->pc = 0x1E47C8u;
            // 0x1e47c8: 0x3c02400c  lui         $v0, 0x400C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16396 << 16));
        ctx->pc = 0x1E47CCu;
        goto label_1e47cc;
    }
    ctx->pc = 0x1E47C4u;
    {
        const bool branch_taken_0x1e47c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E47C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47C4u;
            // 0x1e47c8: 0x3c02400c  lui         $v0, 0x400C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16396 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47c4) {
            ctx->pc = 0x1E47E8u;
            goto label_1e47e8;
        }
    }
    ctx->pc = 0x1E47CCu;
label_1e47cc:
    // 0x1e47cc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e47ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1e47d0:
    // 0x1e47d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e47d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e47d4:
    // 0x1e47d4: 0x0  nop
    ctx->pc = 0x1e47d4u;
    // NOP
label_1e47d8:
    // 0x1e47d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e47d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e47dc:
    // 0x1e47dc: 0x0  nop
    ctx->pc = 0x1e47dcu;
    // NOP
label_1e47e0:
    // 0x1e47e0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1e47e4:
    if (ctx->pc == 0x1E47E4u) {
        ctx->pc = 0x1E47E4u;
            // 0x1e47e4: 0x3c02bf4c  lui         $v0, 0xBF4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
        ctx->pc = 0x1E47E8u;
        goto label_1e47e8;
    }
    ctx->pc = 0x1E47E0u;
    {
        const bool branch_taken_0x1e47e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E47E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47E0u;
            // 0x1e47e4: 0x3c02bf4c  lui         $v0, 0xBF4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47e0) {
            ctx->pc = 0x1E47F0u;
            goto label_1e47f0;
        }
    }
    ctx->pc = 0x1E47E8u;
label_1e47e8:
    // 0x1e47e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e47e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e47ec:
    // 0x1e47ec: 0x3c02bf4c  lui         $v0, 0xBF4C
    ctx->pc = 0x1e47ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48972 << 16));
label_1e47f0:
    // 0x1e47f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e47f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1e47f4:
    // 0x1e47f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e47f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e47f8:
    // 0x1e47f8: 0x0  nop
    ctx->pc = 0x1e47f8u;
    // NOP
label_1e47fc:
    // 0x1e47fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e47fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4800:
    // 0x1e4800: 0x0  nop
    ctx->pc = 0x1e4800u;
    // NOP
label_1e4804:
    // 0x1e4804: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_1e4808:
    if (ctx->pc == 0x1E4808u) {
        ctx->pc = 0x1E4808u;
            // 0x1e4808: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->pc = 0x1E480Cu;
        goto label_1e480c;
    }
    ctx->pc = 0x1E4804u;
    {
        const bool branch_taken_0x1e4804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4804u;
            // 0x1e4808: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4804) {
            ctx->pc = 0x1E4830u;
            goto label_1e4830;
        }
    }
    ctx->pc = 0x1E480Cu;
label_1e480c:
    // 0x1e480c: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1e480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1e4810:
    // 0x1e4810: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4814:
    // 0x1e4814: 0x0  nop
    ctx->pc = 0x1e4814u;
    // NOP
label_1e4818:
    // 0x1e4818: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e4818u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e481c:
    // 0x1e481c: 0x0  nop
    ctx->pc = 0x1e481cu;
    // NOP
label_1e4820:
    // 0x1e4820: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1e4824:
    if (ctx->pc == 0x1E4824u) {
        ctx->pc = 0x1E4828u;
        goto label_1e4828;
    }
    ctx->pc = 0x1E4820u;
    {
        const bool branch_taken_0x1e4820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4820) {
            ctx->pc = 0x1E482Cu;
            goto label_1e482c;
        }
    }
    ctx->pc = 0x1E4828u;
label_1e4828:
    // 0x1e4828: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1e4828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e482c:
    // 0x1e482c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1e482cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1e4830:
    // 0x1e4830: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e4830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1e4834:
    // 0x1e4834: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4838:
    // 0x1e4838: 0x0  nop
    ctx->pc = 0x1e4838u;
    // NOP
label_1e483c:
    // 0x1e483c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e483cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4840:
    // 0x1e4840: 0x0  nop
    ctx->pc = 0x1e4840u;
    // NOP
label_1e4844:
    // 0x1e4844: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_1e4848:
    if (ctx->pc == 0x1E4848u) {
        ctx->pc = 0x1E4848u;
            // 0x1e4848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E484Cu;
        goto label_1e484c;
    }
    ctx->pc = 0x1E4844u;
    {
        const bool branch_taken_0x1e4844 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4844u;
            // 0x1e4848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4844) {
            ctx->pc = 0x1E4870u;
            goto label_1e4870;
        }
    }
    ctx->pc = 0x1E484Cu;
label_1e484c:
    // 0x1e484c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e484cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e4850:
    // 0x1e4850: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e4850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e4854:
    // 0x1e4854: 0x0  nop
    ctx->pc = 0x1e4854u;
    // NOP
label_1e4858:
    // 0x1e4858: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e4858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e485c:
    // 0x1e485c: 0x0  nop
    ctx->pc = 0x1e485cu;
    // NOP
label_1e4860:
    // 0x1e4860: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1e4864:
    if (ctx->pc == 0x1E4864u) {
        ctx->pc = 0x1E4868u;
        goto label_1e4868;
    }
    ctx->pc = 0x1E4860u;
    {
        const bool branch_taken_0x1e4860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4860) {
            ctx->pc = 0x1E486Cu;
            goto label_1e486c;
        }
    }
    ctx->pc = 0x1E4868u;
label_1e4868:
    // 0x1e4868: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e4868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e486c:
    // 0x1e486c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e486cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4870:
    // 0x1e4870: 0xc0781bc  jal         func_1E06F0
label_1e4874:
    if (ctx->pc == 0x1E4874u) {
        ctx->pc = 0x1E4878u;
        goto label_1e4878;
    }
    ctx->pc = 0x1E4870u;
    SET_GPR_U32(ctx, 31, 0x1E4878u);
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4878u; }
        if (ctx->pc != 0x1E4878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4878u; }
        if (ctx->pc != 0x1E4878u) { return; }
    }
    ctx->pc = 0x1E4878u;
label_1e4878:
    // 0x1e4878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e487c:
    // 0x1e487c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e487cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e4880:
    // 0x1e4880: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e4880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e4884:
    // 0x1e4884: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e4884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4888:
    // 0x1e4888: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e4888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e488c:
    // 0x1e488c: 0x3e00008  jr          $ra
label_1e4890:
    if (ctx->pc == 0x1E4890u) {
        ctx->pc = 0x1E4890u;
            // 0x1e4890: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1E4894u;
        goto label_fallthrough_0x1e488c;
    }
    ctx->pc = 0x1E488Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E488Cu;
            // 0x1e4890: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e488c:
    ctx->pc = 0x1E4894u;
}
