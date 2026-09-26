#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_FISHINGTOURNAMENT_ETC__FP12RS_STACKDATAi
// Address: 0x274320 - 0x27440c
void ps2__SET_FISHINGTOURNAMENT_ETC__FP12RS_STACKDATAi_0x274320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_FISHINGTOURNAMENT_ETC__FP12RS_STACKDATAi_0x274320");
#endif

    switch (ctx->pc) {
        case 0x274338u: goto label_274338;
        case 0x27436cu: goto label_27436c;
        case 0x274388u: goto label_274388;
        case 0x274394u: goto label_274394;
        case 0x2743a4u: goto label_2743a4;
        case 0x2743bcu: goto label_2743bc;
        case 0x2743ccu: goto label_2743cc;
        case 0x2743d4u: goto label_2743d4;
        case 0x2743e4u: goto label_2743e4;
        default: break;
    }

    ctx->pc = 0x274320u;

    // 0x274320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x274324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x274328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27432c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x27432cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x274330: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274330u;
    SET_GPR_U32(ctx, 31, 0x274338u);
    ctx->pc = 0x274334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274330u;
            // 0x274334: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274338u; }
        if (ctx->pc != 0x274338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274338u; }
        if (ctx->pc != 0x274338u) { return; }
    }
    ctx->pc = 0x274338u;
label_274338:
    // 0x274338: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x274338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27433c: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x27433Cu;
    {
        const bool branch_taken_0x27433c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x274340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27433Cu;
            // 0x274340: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27433c) {
            ctx->pc = 0x2743DCu;
            goto label_2743dc;
        }
    }
    ctx->pc = 0x274344u;
    // 0x274344: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x274344u;
    {
        const bool branch_taken_0x274344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x274348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274344u;
            // 0x274348: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274344) {
            ctx->pc = 0x2743C4u;
            goto label_2743c4;
        }
    }
    ctx->pc = 0x27434Cu;
    // 0x27434c: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x27434Cu;
    {
        const bool branch_taken_0x27434c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27434c) {
            ctx->pc = 0x27439Cu;
            goto label_27439c;
        }
    }
    ctx->pc = 0x274354u;
    // 0x274354: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274354u;
    {
        const bool branch_taken_0x274354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274354) {
            ctx->pc = 0x274364u;
            goto label_274364;
        }
    }
    ctx->pc = 0x27435Cu;
    // 0x27435c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x27435Cu;
    {
        const bool branch_taken_0x27435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27435Cu;
            // 0x274360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27435c) {
            ctx->pc = 0x2743ECu;
            goto label_2743ec;
        }
    }
    ctx->pc = 0x274364u;
label_274364:
    // 0x274364: 0xc065b08  jal         func_196C20
    ctx->pc = 0x274364u;
    SET_GPR_U32(ctx, 31, 0x27436Cu);
    ctx->pc = 0x196C20u;
    if (runtime->hasFunction(0x196C20u)) {
        auto targetFn = runtime->lookupFunction(0x196C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27436Cu; }
        if (ctx->pc != 0x27436Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishTournament__Fv_0x196c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27436Cu; }
        if (ctx->pc != 0x27436Cu) { return; }
    }
    ctx->pc = 0x27436Cu;
label_27436c:
    // 0x27436c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27436cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274370: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274370u;
    {
        const bool branch_taken_0x274370 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x274374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274370u;
            // 0x274374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274370) {
            ctx->pc = 0x274380u;
            goto label_274380;
        }
    }
    ctx->pc = 0x274378u;
    // 0x274378: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x274378u;
    {
        const bool branch_taken_0x274378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27437Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274378u;
            // 0x27437c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274378) {
            ctx->pc = 0x2743F8u;
            goto label_2743f8;
        }
    }
    ctx->pc = 0x274380u;
label_274380:
    // 0x274380: 0xc097e18  jal         func_25F860
    ctx->pc = 0x274380u;
    SET_GPR_U32(ctx, 31, 0x274388u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274388u; }
        if (ctx->pc != 0x274388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274388u; }
        if (ctx->pc != 0x274388u) { return; }
    }
    ctx->pc = 0x274388u;
label_274388:
    // 0x274388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27438c: 0xc066c04  jal         func_19B010
    ctx->pc = 0x27438Cu;
    SET_GPR_U32(ctx, 31, 0x274394u);
    ctx->pc = 0x274390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27438Cu;
            // 0x274390: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B010u;
    if (runtime->hasFunction(0x19B010u)) {
        auto targetFn = runtime->lookupFunction(0x19B010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274394u; }
        if (ctx->pc != 0x274394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRank__18CFishingTournamentFi_0x19b010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274394u; }
        if (ctx->pc != 0x274394u) { return; }
    }
    ctx->pc = 0x274394u;
label_274394:
    // 0x274394: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x274394u;
    {
        const bool branch_taken_0x274394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274394u;
            // 0x274398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274394) {
            ctx->pc = 0x2743F8u;
            goto label_2743f8;
        }
    }
    ctx->pc = 0x27439Cu;
label_27439c:
    // 0x27439c: 0xc065b08  jal         func_196C20
    ctx->pc = 0x27439Cu;
    SET_GPR_U32(ctx, 31, 0x2743A4u);
    ctx->pc = 0x196C20u;
    if (runtime->hasFunction(0x196C20u)) {
        auto targetFn = runtime->lookupFunction(0x196C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743A4u; }
        if (ctx->pc != 0x2743A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishTournament__Fv_0x196c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743A4u; }
        if (ctx->pc != 0x2743A4u) { return; }
    }
    ctx->pc = 0x2743A4u;
label_2743a4:
    // 0x2743a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2743A4u;
    {
        const bool branch_taken_0x2743a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2743A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2743A4u;
            // 0x2743a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743a4) {
            ctx->pc = 0x2743B4u;
            goto label_2743b4;
        }
    }
    ctx->pc = 0x2743ACu;
    // 0x2743ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2743ACu;
    {
        const bool branch_taken_0x2743ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2743B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2743ACu;
            // 0x2743b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743ac) {
            ctx->pc = 0x2743F8u;
            goto label_2743f8;
        }
    }
    ctx->pc = 0x2743B4u;
label_2743b4:
    // 0x2743b4: 0xc066bd0  jal         func_19AF40
    ctx->pc = 0x2743B4u;
    SET_GPR_U32(ctx, 31, 0x2743BCu);
    ctx->pc = 0x19AF40u;
    if (runtime->hasFunction(0x19AF40u)) {
        auto targetFn = runtime->lookupFunction(0x19AF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743BCu; }
        if (ctx->pc != 0x2743BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetRecord__18CFishingTournamentFv_0x19af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743BCu; }
        if (ctx->pc != 0x2743BCu) { return; }
    }
    ctx->pc = 0x2743BCu;
label_2743bc:
    // 0x2743bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2743BCu;
    {
        const bool branch_taken_0x2743bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2743bc) {
            ctx->pc = 0x2743F4u;
            goto label_2743f4;
        }
    }
    ctx->pc = 0x2743C4u;
label_2743c4:
    // 0x2743c4: 0xc0867c4  jal         func_219F10
    ctx->pc = 0x2743C4u;
    SET_GPR_U32(ctx, 31, 0x2743CCu);
    ctx->pc = 0x219F10u;
    if (runtime->hasFunction(0x219F10u)) {
        auto targetFn = runtime->lookupFunction(0x219F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743CCu; }
        if (ctx->pc != 0x2743CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFishPrize__Fv_0x219f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743CCu; }
        if (ctx->pc != 0x2743CCu) { return; }
    }
    ctx->pc = 0x2743CCu;
label_2743cc:
    // 0x2743cc: 0xc0867cc  jal         func_219F30
    ctx->pc = 0x2743CCu;
    SET_GPR_U32(ctx, 31, 0x2743D4u);
    ctx->pc = 0x2743D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2743CCu;
            // 0x2743d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219F30u;
    if (runtime->hasFunction(0x219F30u)) {
        auto targetFn = runtime->lookupFunction(0x219F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743D4u; }
        if (ctx->pc != 0x2743D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFishPrize__Fi_0x219f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743D4u; }
        if (ctx->pc != 0x2743D4u) { return; }
    }
    ctx->pc = 0x2743D4u;
label_2743d4:
    // 0x2743d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2743D4u;
    {
        const bool branch_taken_0x2743d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2743d4) {
            ctx->pc = 0x2743F4u;
            goto label_2743f4;
        }
    }
    ctx->pc = 0x2743DCu;
label_2743dc:
    // 0x2743dc: 0xc08689c  jal         func_21A270
    ctx->pc = 0x2743DCu;
    SET_GPR_U32(ctx, 31, 0x2743E4u);
    ctx->pc = 0x21A270u;
    if (runtime->hasFunction(0x21A270u)) {
        auto targetFn = runtime->lookupFunction(0x21A270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743E4u; }
        if (ctx->pc != 0x2743E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TuriTourCount__Fv_0x21a270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2743E4u; }
        if (ctx->pc != 0x2743E4u) { return; }
    }
    ctx->pc = 0x2743E4u;
label_2743e4:
    // 0x2743e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2743E4u;
    {
        const bool branch_taken_0x2743e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2743e4) {
            ctx->pc = 0x2743F4u;
            goto label_2743f4;
        }
    }
    ctx->pc = 0x2743ECu;
label_2743ec:
    // 0x2743ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2743ECu;
    {
        const bool branch_taken_0x2743ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2743F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2743ECu;
            // 0x2743f0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2743ec) {
            ctx->pc = 0x2743FCu;
            goto label_2743fc;
        }
    }
    ctx->pc = 0x2743F4u;
label_2743f4:
    // 0x2743f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2743f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2743f8:
    // 0x2743f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2743f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2743fc:
    // 0x2743fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2743fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274404: 0x3e00008  jr          $ra
    ctx->pc = 0x274404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274404u;
            // 0x274408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27440Cu;
}
