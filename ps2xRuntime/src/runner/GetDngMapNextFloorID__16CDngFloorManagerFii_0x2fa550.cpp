#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDngMapNextFloorID__16CDngFloorManagerFii
// Address: 0x2fa550 - 0x2fa674
void GetDngMapNextFloorID__16CDngFloorManagerFii_0x2fa550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDngMapNextFloorID__16CDngFloorManagerFii_0x2fa550");
#endif

    switch (ctx->pc) {
        case 0x2fa584u: goto label_2fa584;
        case 0x2fa5c4u: goto label_2fa5c4;
        case 0x2fa5dcu: goto label_2fa5dc;
        case 0x2fa610u: goto label_2fa610;
        default: break;
    }

    ctx->pc = 0x2fa550u;

    // 0x2fa550: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2fa550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2fa554: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2fa554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2fa558: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2fa558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2fa55c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2fa55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2fa560: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2fa560u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa564: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2fa564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2fa568: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2fa568u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa56c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fa56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2fa570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fa570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2fa574: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fa574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fa578: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fa578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa57c: 0xc0be584  jal         func_2F9610
    ctx->pc = 0x2FA57Cu;
    SET_GPR_U32(ctx, 31, 0x2FA584u);
    ctx->pc = 0x2FA580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA57Cu;
            // 0x2fa580: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9610u;
    if (runtime->hasFunction(0x2F9610u)) {
        auto targetFn = runtime->lookupFunction(0x2F9610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA584u; }
        if (ctx->pc != 0x2FA584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorGlidInfo__16CDngFloorManagerFi_0x2f9610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA584u; }
        if (ctx->pc != 0x2FA584u) { return; }
    }
    ctx->pc = 0x2FA584u;
label_2fa584:
    // 0x2fa584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fa584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa588: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA588u;
    {
        const bool branch_taken_0x2fa588 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA588u;
            // 0x2fa58c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa588) {
            ctx->pc = 0x2FA598u;
            goto label_2fa598;
        }
    }
    ctx->pc = 0x2FA590u;
    // 0x2fa590: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2FA590u;
    {
        const bool branch_taken_0x2fa590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA590u;
            // 0x2fa594: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa590) {
            ctx->pc = 0x2FA650u;
            goto label_2fa650;
        }
    }
    ctx->pc = 0x2FA598u;
label_2fa598:
    // 0x2fa598: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x2fa598u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fa59c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fa5a0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA5A0u;
    {
        const bool branch_taken_0x2fa5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA5A0u;
            // 0x2fa5a4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa5a0) {
            ctx->pc = 0x2FA5B8u;
            goto label_2fa5b8;
        }
    }
    ctx->pc = 0x2FA5A8u;
    // 0x2fa5a8: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA5A8u;
    {
        const bool branch_taken_0x2fa5a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FA5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA5A8u;
            // 0x2fa5ac: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa5a8) {
            ctx->pc = 0x2FA5BCu;
            goto label_2fa5bc;
        }
    }
    ctx->pc = 0x2FA5B0u;
    // 0x2fa5b0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2FA5B0u;
    {
        const bool branch_taken_0x2fa5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa5b0) {
            ctx->pc = 0x2FA64Cu;
            goto label_2fa64c;
        }
    }
    ctx->pc = 0x2FA5B8u;
label_2fa5b8:
    // 0x2fa5b8: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x2fa5b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2fa5bc:
    // 0x2fa5bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2fa5bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa5c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2fa5c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa5c4:
    // 0x2fa5c4: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x2fa5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2fa5c8: 0x8445002e  lh          $a1, 0x2E($v0)
    ctx->pc = 0x2fa5c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x2fa5cc: 0x4a0001a  bltz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FA5CCu;
    {
        const bool branch_taken_0x2fa5cc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2FA5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA5CCu;
            // 0x2fa5d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa5cc) {
            ctx->pc = 0x2FA638u;
            goto label_2fa638;
        }
    }
    ctx->pc = 0x2FA5D4u;
    // 0x2fa5d4: 0xc0be584  jal         func_2F9610
    ctx->pc = 0x2FA5D4u;
    SET_GPR_U32(ctx, 31, 0x2FA5DCu);
    ctx->pc = 0x2F9610u;
    if (runtime->hasFunction(0x2F9610u)) {
        auto targetFn = runtime->lookupFunction(0x2F9610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA5DCu; }
        if (ctx->pc != 0x2FA5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorGlidInfo__16CDngFloorManagerFi_0x2f9610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA5DCu; }
        if (ctx->pc != 0x2FA5DCu) { return; }
    }
    ctx->pc = 0x2FA5DCu;
label_2fa5dc:
    // 0x2fa5dc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2FA5DCu;
    {
        const bool branch_taken_0x2fa5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA5DCu;
            // 0x2fa5e0: 0x24530020  addiu       $s3, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa5dc) {
            ctx->pc = 0x2FA638u;
            goto label_2fa638;
        }
    }
    ctx->pc = 0x2FA5E4u;
    // 0x2fa5e4: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FA5E4u;
    {
        const bool branch_taken_0x2fa5e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa5e4) {
            ctx->pc = 0x2FA638u;
            goto label_2fa638;
        }
    }
    ctx->pc = 0x2FA5ECu;
    // 0x2fa5ec: 0x82630009  lb          $v1, 0x9($s3)
    ctx->pc = 0x2fa5ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x2fa5f0: 0x82220009  lb          $v0, 0x9($s1)
    ctx->pc = 0x2fa5f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x2fa5f4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2fa5f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fa5f8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2FA5F8u;
    {
        const bool branch_taken_0x2fa5f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA5F8u;
            // 0x2fa5fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa5f8) {
            ctx->pc = 0x2FA638u;
            goto label_2fa638;
        }
    }
    ctx->pc = 0x2FA600u;
    // 0x2fa600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fa600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa604: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x2fa604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2fa608: 0xc0be8b0  jal         func_2FA2C0
    ctx->pc = 0x2FA608u;
    SET_GPR_U32(ctx, 31, 0x2FA610u);
    ctx->pc = 0x2FA60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA608u;
            // 0x2fa60c: 0xafb2008c  sw          $s2, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA2C0u;
    if (runtime->hasFunction(0x2FA2C0u)) {
        auto targetFn = runtime->lookupFunction(0x2FA2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA610u; }
        if (ctx->pc != 0x2FA610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextGlid__16CDngFloorManagerFP9GLID_INFOPi_0x2fa2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA610u; }
        if (ctx->pc != 0x2FA610u) { return; }
    }
    ctx->pc = 0x2FA610u;
label_2fa610:
    // 0x2fa610: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA610u;
    {
        const bool branch_taken_0x2fa610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa610) {
            ctx->pc = 0x2FA638u;
            goto label_2fa638;
        }
    }
    ctx->pc = 0x2FA618u;
    // 0x2fa618: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2fa618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa61c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA61Cu;
    {
        const bool branch_taken_0x2fa61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa61c) {
            ctx->pc = 0x2FA638u;
            goto label_2fa638;
        }
    }
    ctx->pc = 0x2FA624u;
    // 0x2fa624: 0x90420020  lbu         $v0, 0x20($v0)
    ctx->pc = 0x2fa624u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2fa628: 0x14560003  bne         $v0, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA628u;
    {
        const bool branch_taken_0x2fa628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x2fa628) {
            ctx->pc = 0x2FA638u;
            goto label_2fa638;
        }
    }
    ctx->pc = 0x2FA630u;
    // 0x2fa630: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA630u;
    {
        const bool branch_taken_0x2fa630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA630u;
            // 0x2fa634: 0x82620008  lb          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa630) {
            ctx->pc = 0x2FA64Cu;
            goto label_2fa64c;
        }
    }
    ctx->pc = 0x2FA638u;
label_2fa638:
    // 0x2fa638: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fa638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fa63c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2fa63cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fa640: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2FA640u;
    {
        const bool branch_taken_0x2fa640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA640u;
            // 0x2fa644: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa640) {
            ctx->pc = 0x2FA5C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa5c4;
        }
    }
    ctx->pc = 0x2FA648u;
    // 0x2fa648: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fa648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa64c:
    // 0x2fa64c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2fa64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2fa650:
    // 0x2fa650: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2fa650u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fa654: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2fa654u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fa658: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2fa658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fa65c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fa65cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fa660: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fa660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fa664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fa668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa66c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA66Cu;
            // 0x2fa670: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FA674u;
}
