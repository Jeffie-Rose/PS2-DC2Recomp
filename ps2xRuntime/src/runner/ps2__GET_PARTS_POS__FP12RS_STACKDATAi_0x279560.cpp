#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_PARTS_POS__FP12RS_STACKDATAi
// Address: 0x279560 - 0x2796d8
void ps2__GET_PARTS_POS__FP12RS_STACKDATAi_0x279560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_PARTS_POS__FP12RS_STACKDATAi_0x279560");
#endif

    switch (ctx->pc) {
        case 0x279560u: goto label_279560;
        case 0x279564u: goto label_279564;
        case 0x279568u: goto label_279568;
        case 0x27956cu: goto label_27956c;
        case 0x279570u: goto label_279570;
        case 0x279574u: goto label_279574;
        case 0x279578u: goto label_279578;
        case 0x27957cu: goto label_27957c;
        case 0x279580u: goto label_279580;
        case 0x279584u: goto label_279584;
        case 0x279588u: goto label_279588;
        case 0x27958cu: goto label_27958c;
        case 0x279590u: goto label_279590;
        case 0x279594u: goto label_279594;
        case 0x279598u: goto label_279598;
        case 0x27959cu: goto label_27959c;
        case 0x2795a0u: goto label_2795a0;
        case 0x2795a4u: goto label_2795a4;
        case 0x2795a8u: goto label_2795a8;
        case 0x2795acu: goto label_2795ac;
        case 0x2795b0u: goto label_2795b0;
        case 0x2795b4u: goto label_2795b4;
        case 0x2795b8u: goto label_2795b8;
        case 0x2795bcu: goto label_2795bc;
        case 0x2795c0u: goto label_2795c0;
        case 0x2795c4u: goto label_2795c4;
        case 0x2795c8u: goto label_2795c8;
        case 0x2795ccu: goto label_2795cc;
        case 0x2795d0u: goto label_2795d0;
        case 0x2795d4u: goto label_2795d4;
        case 0x2795d8u: goto label_2795d8;
        case 0x2795dcu: goto label_2795dc;
        case 0x2795e0u: goto label_2795e0;
        case 0x2795e4u: goto label_2795e4;
        case 0x2795e8u: goto label_2795e8;
        case 0x2795ecu: goto label_2795ec;
        case 0x2795f0u: goto label_2795f0;
        case 0x2795f4u: goto label_2795f4;
        case 0x2795f8u: goto label_2795f8;
        case 0x2795fcu: goto label_2795fc;
        case 0x279600u: goto label_279600;
        case 0x279604u: goto label_279604;
        case 0x279608u: goto label_279608;
        case 0x27960cu: goto label_27960c;
        case 0x279610u: goto label_279610;
        case 0x279614u: goto label_279614;
        case 0x279618u: goto label_279618;
        case 0x27961cu: goto label_27961c;
        case 0x279620u: goto label_279620;
        case 0x279624u: goto label_279624;
        case 0x279628u: goto label_279628;
        case 0x27962cu: goto label_27962c;
        case 0x279630u: goto label_279630;
        case 0x279634u: goto label_279634;
        case 0x279638u: goto label_279638;
        case 0x27963cu: goto label_27963c;
        case 0x279640u: goto label_279640;
        case 0x279644u: goto label_279644;
        case 0x279648u: goto label_279648;
        case 0x27964cu: goto label_27964c;
        case 0x279650u: goto label_279650;
        case 0x279654u: goto label_279654;
        case 0x279658u: goto label_279658;
        case 0x27965cu: goto label_27965c;
        case 0x279660u: goto label_279660;
        case 0x279664u: goto label_279664;
        case 0x279668u: goto label_279668;
        case 0x27966cu: goto label_27966c;
        case 0x279670u: goto label_279670;
        case 0x279674u: goto label_279674;
        case 0x279678u: goto label_279678;
        case 0x27967cu: goto label_27967c;
        case 0x279680u: goto label_279680;
        case 0x279684u: goto label_279684;
        case 0x279688u: goto label_279688;
        case 0x27968cu: goto label_27968c;
        case 0x279690u: goto label_279690;
        case 0x279694u: goto label_279694;
        case 0x279698u: goto label_279698;
        case 0x27969cu: goto label_27969c;
        case 0x2796a0u: goto label_2796a0;
        case 0x2796a4u: goto label_2796a4;
        case 0x2796a8u: goto label_2796a8;
        case 0x2796acu: goto label_2796ac;
        case 0x2796b0u: goto label_2796b0;
        case 0x2796b4u: goto label_2796b4;
        case 0x2796b8u: goto label_2796b8;
        case 0x2796bcu: goto label_2796bc;
        case 0x2796c0u: goto label_2796c0;
        case 0x2796c4u: goto label_2796c4;
        case 0x2796c8u: goto label_2796c8;
        case 0x2796ccu: goto label_2796cc;
        case 0x2796d0u: goto label_2796d0;
        case 0x2796d4u: goto label_2796d4;
        default: break;
    }

    ctx->pc = 0x279560u;

label_279560:
    // 0x279560: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x279560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_279564:
    // 0x279564: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x279564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_279568:
    // 0x279568: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x279568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_27956c:
    // 0x27956c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_279570:
    // 0x279570: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x279570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_279574:
    // 0x279574: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x279574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_279578:
    // 0x279578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x279578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27957c:
    // 0x27957c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_279580:
    // 0x279580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x279580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_279584:
    // 0x279584: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_279588:
    // 0x279588: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x279588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_27958c:
    // 0x27958c: 0xc0a1214  jal         func_284850
label_279590:
    if (ctx->pc == 0x279590u) {
        ctx->pc = 0x279590u;
            // 0x279590: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x279594u;
        goto label_279594;
    }
    ctx->pc = 0x27958Cu;
    SET_GPR_U32(ctx, 31, 0x279594u);
    ctx->pc = 0x279590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27958Cu;
            // 0x279590: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279594u; }
        if (ctx->pc != 0x279594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279594u; }
        if (ctx->pc != 0x279594u) { return; }
    }
    ctx->pc = 0x279594u;
label_279594:
    // 0x279594: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x279594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279598:
    // 0x279598: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_27959c:
    if (ctx->pc == 0x27959Cu) {
        ctx->pc = 0x27959Cu;
            // 0x27959c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2795A0u;
        goto label_2795a0;
    }
    ctx->pc = 0x279598u;
    {
        const bool branch_taken_0x279598 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x27959Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279598u;
            // 0x27959c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279598) {
            ctx->pc = 0x2795A8u;
            goto label_2795a8;
        }
    }
    ctx->pc = 0x2795A0u;
label_2795a0:
    // 0x2795a0: 0x10000045  b           . + 4 + (0x45 << 2)
label_2795a4:
    if (ctx->pc == 0x2795A4u) {
        ctx->pc = 0x2795A4u;
            // 0x2795a4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2795A8u;
        goto label_2795a8;
    }
    ctx->pc = 0x2795A0u;
    {
        const bool branch_taken_0x2795a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2795A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2795A0u;
            // 0x2795a4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795a0) {
            ctx->pc = 0x2796B8u;
            goto label_2796b8;
        }
    }
    ctx->pc = 0x2795A8u;
label_2795a8:
    // 0x2795a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2795a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2795ac:
    // 0x2795ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2795acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2795b0:
    // 0x2795b0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_2795b4:
    if (ctx->pc == 0x2795B4u) {
        ctx->pc = 0x2795B4u;
            // 0x2795b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2795B8u;
        goto label_2795b8;
    }
    ctx->pc = 0x2795B0u;
    {
        const bool branch_taken_0x2795b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2795B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2795B0u;
            // 0x2795b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795b0) {
            ctx->pc = 0x279618u;
            goto label_279618;
        }
    }
    ctx->pc = 0x2795B8u;
label_2795b8:
    // 0x2795b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2795bc:
    if (ctx->pc == 0x2795BCu) {
        ctx->pc = 0x2795BCu;
            // 0x2795bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2795C0u;
        goto label_2795c0;
    }
    ctx->pc = 0x2795B8u;
    {
        const bool branch_taken_0x2795b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2795BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2795B8u;
            // 0x2795bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795b8) {
            ctx->pc = 0x2795C8u;
            goto label_2795c8;
        }
    }
    ctx->pc = 0x2795C0u;
label_2795c0:
    // 0x2795c0: 0x10000027  b           . + 4 + (0x27 << 2)
label_2795c4:
    if (ctx->pc == 0x2795C4u) {
        ctx->pc = 0x2795C8u;
        goto label_2795c8;
    }
    ctx->pc = 0x2795C0u;
    {
        const bool branch_taken_0x2795c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2795c0) {
            ctx->pc = 0x279660u;
            goto label_279660;
        }
    }
    ctx->pc = 0x2795C8u;
label_2795c8:
    // 0x2795c8: 0xc097e18  jal         func_25F860
label_2795cc:
    if (ctx->pc == 0x2795CCu) {
        ctx->pc = 0x2795CCu;
            // 0x2795cc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2795D0u;
        goto label_2795d0;
    }
    ctx->pc = 0x2795C8u;
    SET_GPR_U32(ctx, 31, 0x2795D0u);
    ctx->pc = 0x2795CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2795C8u;
            // 0x2795cc: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2795D0u; }
        if (ctx->pc != 0x2795D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2795D0u; }
        if (ctx->pc != 0x2795D0u) { return; }
    }
    ctx->pc = 0x2795D0u;
label_2795d0:
    // 0x2795d0: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2795d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2795d4:
    // 0x2795d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2795d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2795d8:
    // 0x2795d8: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_2795dc:
    if (ctx->pc == 0x2795DCu) {
        ctx->pc = 0x2795DCu;
            // 0x2795dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2795E0u;
        goto label_2795e0;
    }
    ctx->pc = 0x2795D8u;
    {
        const bool branch_taken_0x2795d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2795DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2795D8u;
            // 0x2795dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2795d8) {
            ctx->pc = 0x279660u;
            goto label_279660;
        }
    }
    ctx->pc = 0x2795E0u;
label_2795e0:
    // 0x2795e0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2795e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2795e4:
    // 0x2795e4: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x2795e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
label_2795e8:
    // 0x2795e8: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2795e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2795ec:
    // 0x2795ec: 0xc057530  jal         func_15D4C0
label_2795f0:
    if (ctx->pc == 0x2795F0u) {
        ctx->pc = 0x2795F0u;
            // 0x2795f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2795F4u;
        goto label_2795f4;
    }
    ctx->pc = 0x2795ECu;
    SET_GPR_U32(ctx, 31, 0x2795F4u);
    ctx->pc = 0x2795F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2795ECu;
            // 0x2795f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4C0u;
    if (runtime->hasFunction(0x15D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2795F4u; }
        if (ctx->pc != 0x2795F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFi_0x15d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2795F4u; }
        if (ctx->pc != 0x2795F4u) { return; }
    }
    ctx->pc = 0x2795F4u;
label_2795f4:
    // 0x2795f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2795f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2795f8:
    // 0x2795f8: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
label_2795fc:
    if (ctx->pc == 0x2795FCu) {
        ctx->pc = 0x279600u;
        goto label_279600;
    }
    ctx->pc = 0x2795F8u;
    {
        const bool branch_taken_0x2795f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2795f8) {
            ctx->pc = 0x279660u;
            goto label_279660;
        }
    }
    ctx->pc = 0x279600u;
label_279600:
    // 0x279600: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x279600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_279604:
    // 0x279604: 0x272102a  slt         $v0, $s3, $s2
    ctx->pc = 0x279604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_279608:
    // 0x279608: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_27960c:
    if (ctx->pc == 0x27960Cu) {
        ctx->pc = 0x27960Cu;
            // 0x27960c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x279610u;
        goto label_279610;
    }
    ctx->pc = 0x279608u;
    {
        const bool branch_taken_0x279608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27960Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279608u;
            // 0x27960c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279608) {
            ctx->pc = 0x2795E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2795e4;
        }
    }
    ctx->pc = 0x279610u;
label_279610:
    // 0x279610: 0x10000013  b           . + 4 + (0x13 << 2)
label_279614:
    if (ctx->pc == 0x279614u) {
        ctx->pc = 0x279618u;
        goto label_279618;
    }
    ctx->pc = 0x279610u;
    {
        const bool branch_taken_0x279610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279610) {
            ctx->pc = 0x279660u;
            goto label_279660;
        }
    }
    ctx->pc = 0x279618u;
label_279618:
    // 0x279618: 0xc097e48  jal         func_25F920
label_27961c:
    if (ctx->pc == 0x27961Cu) {
        ctx->pc = 0x27961Cu;
            // 0x27961c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x279620u;
        goto label_279620;
    }
    ctx->pc = 0x279618u;
    SET_GPR_U32(ctx, 31, 0x279620u);
    ctx->pc = 0x27961Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279618u;
            // 0x27961c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279620u; }
        if (ctx->pc != 0x279620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279620u; }
        if (ctx->pc != 0x279620u) { return; }
    }
    ctx->pc = 0x279620u;
label_279620:
    // 0x279620: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x279620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_279624:
    // 0x279624: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x279624u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279628:
    // 0x279628: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_27962c:
    if (ctx->pc == 0x27962Cu) {
        ctx->pc = 0x27962Cu;
            // 0x27962c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279630u;
        goto label_279630;
    }
    ctx->pc = 0x279628u;
    {
        const bool branch_taken_0x279628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279628u;
            // 0x27962c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279628) {
            ctx->pc = 0x279660u;
            goto label_279660;
        }
    }
    ctx->pc = 0x279630u;
label_279630:
    // 0x279630: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x279630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_279634:
    // 0x279634: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x279634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_279638:
    // 0x279638: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x279638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_27963c:
    // 0x27963c: 0xc057508  jal         func_15D420
label_279640:
    if (ctx->pc == 0x279640u) {
        ctx->pc = 0x279640u;
            // 0x279640: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279644u;
        goto label_279644;
    }
    ctx->pc = 0x27963Cu;
    SET_GPR_U32(ctx, 31, 0x279644u);
    ctx->pc = 0x279640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27963Cu;
            // 0x279640: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279644u; }
        if (ctx->pc != 0x279644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279644u; }
        if (ctx->pc != 0x279644u) { return; }
    }
    ctx->pc = 0x279644u;
label_279644:
    // 0x279644: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x279644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_279648:
    // 0x279648: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_27964c:
    if (ctx->pc == 0x27964Cu) {
        ctx->pc = 0x279650u;
        goto label_279650;
    }
    ctx->pc = 0x279648u;
    {
        const bool branch_taken_0x279648 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x279648) {
            ctx->pc = 0x279660u;
            goto label_279660;
        }
    }
    ctx->pc = 0x279650u;
label_279650:
    // 0x279650: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x279650u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_279654:
    // 0x279654: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x279654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_279658:
    // 0x279658: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_27965c:
    if (ctx->pc == 0x27965Cu) {
        ctx->pc = 0x27965Cu;
            // 0x27965c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x279660u;
        goto label_279660;
    }
    ctx->pc = 0x279658u;
    {
        const bool branch_taken_0x279658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27965Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279658u;
            // 0x27965c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279658) {
            ctx->pc = 0x279634u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_279634;
        }
    }
    ctx->pc = 0x279660u;
label_279660:
    // 0x279660: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_279664:
    if (ctx->pc == 0x279664u) {
        ctx->pc = 0x279664u;
            // 0x279664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x279668u;
        goto label_279668;
    }
    ctx->pc = 0x279660u;
    {
        const bool branch_taken_0x279660 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x279664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279660u;
            // 0x279664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279660) {
            ctx->pc = 0x279670u;
            goto label_279670;
        }
    }
    ctx->pc = 0x279668u;
label_279668:
    // 0x279668: 0x10000012  b           . + 4 + (0x12 << 2)
label_27966c:
    if (ctx->pc == 0x27966Cu) {
        ctx->pc = 0x279670u;
        goto label_279670;
    }
    ctx->pc = 0x279668u;
    {
        const bool branch_taken_0x279668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279668) {
            ctx->pc = 0x2796B4u;
            goto label_2796b4;
        }
    }
    ctx->pc = 0x279670u;
label_279670:
    // 0x279670: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x279670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_279674:
    // 0x279674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_279678:
    // 0x279678: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x279678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_27967c:
    // 0x27967c: 0x320f809  jalr        $t9
label_279680:
    if (ctx->pc == 0x279680u) {
        ctx->pc = 0x279680u;
            // 0x279680: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x279684u;
        goto label_279684;
    }
    ctx->pc = 0x27967Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x279684u);
        ctx->pc = 0x279680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27967Cu;
            // 0x279680: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x279684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x279684u; }
            if (ctx->pc != 0x279684u) { return; }
        }
        }
    }
    ctx->pc = 0x279684u;
label_279684:
    // 0x279684: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x279684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_279688:
    // 0x279688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27968c:
    // 0x27968c: 0xc097e54  jal         func_25F950
label_279690:
    if (ctx->pc == 0x279690u) {
        ctx->pc = 0x279690u;
            // 0x279690: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x279694u;
        goto label_279694;
    }
    ctx->pc = 0x27968Cu;
    SET_GPR_U32(ctx, 31, 0x279694u);
    ctx->pc = 0x279690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27968Cu;
            // 0x279690: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279694u; }
        if (ctx->pc != 0x279694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279694u; }
        if (ctx->pc != 0x279694u) { return; }
    }
    ctx->pc = 0x279694u;
label_279694:
    // 0x279694: 0xc7ac0094  lwc1        $f12, 0x94($sp)
    ctx->pc = 0x279694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_279698:
    // 0x279698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27969c:
    // 0x27969c: 0xc097e54  jal         func_25F950
label_2796a0:
    if (ctx->pc == 0x2796A0u) {
        ctx->pc = 0x2796A0u;
            // 0x2796a0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x2796A4u;
        goto label_2796a4;
    }
    ctx->pc = 0x27969Cu;
    SET_GPR_U32(ctx, 31, 0x2796A4u);
    ctx->pc = 0x2796A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27969Cu;
            // 0x2796a0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2796A4u; }
        if (ctx->pc != 0x2796A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2796A4u; }
        if (ctx->pc != 0x2796A4u) { return; }
    }
    ctx->pc = 0x2796A4u;
label_2796a4:
    // 0x2796a4: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x2796a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2796a8:
    // 0x2796a8: 0xc097e54  jal         func_25F950
label_2796ac:
    if (ctx->pc == 0x2796ACu) {
        ctx->pc = 0x2796ACu;
            // 0x2796ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2796B0u;
        goto label_2796b0;
    }
    ctx->pc = 0x2796A8u;
    SET_GPR_U32(ctx, 31, 0x2796B0u);
    ctx->pc = 0x2796ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2796A8u;
            // 0x2796ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2796B0u; }
        if (ctx->pc != 0x2796B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2796B0u; }
        if (ctx->pc != 0x2796B0u) { return; }
    }
    ctx->pc = 0x2796B0u;
label_2796b0:
    // 0x2796b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2796b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2796b4:
    // 0x2796b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2796b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2796b8:
    // 0x2796b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2796b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2796bc:
    // 0x2796bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2796bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2796c0:
    // 0x2796c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2796c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2796c4:
    // 0x2796c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2796c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2796c8:
    // 0x2796c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2796c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2796cc:
    // 0x2796cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2796ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2796d0:
    // 0x2796d0: 0x3e00008  jr          $ra
label_2796d4:
    if (ctx->pc == 0x2796D4u) {
        ctx->pc = 0x2796D4u;
            // 0x2796d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2796D8u;
        goto label_fallthrough_0x2796d0;
    }
    ctx->pc = 0x2796D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2796D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2796D0u;
            // 0x2796d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2796d0:
    ctx->pc = 0x2796D8u;
}
