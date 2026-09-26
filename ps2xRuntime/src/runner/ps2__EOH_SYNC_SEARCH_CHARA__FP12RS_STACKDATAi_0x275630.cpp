#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SYNC_SEARCH_CHARA__FP12RS_STACKDATAi
// Address: 0x275630 - 0x2756b4
void ps2__EOH_SYNC_SEARCH_CHARA__FP12RS_STACKDATAi_0x275630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SYNC_SEARCH_CHARA__FP12RS_STACKDATAi_0x275630");
#endif

    switch (ctx->pc) {
        case 0x275648u: goto label_275648;
        case 0x275658u: goto label_275658;
        case 0x275660u: goto label_275660;
        case 0x27566cu: goto label_27566c;
        case 0x275684u: goto label_275684;
        case 0x2756a0u: goto label_2756a0;
        default: break;
    }

    ctx->pc = 0x275630u;

    // 0x275630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27563c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x27563cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x275640: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275640u;
    SET_GPR_U32(ctx, 31, 0x275648u);
    ctx->pc = 0x275644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275640u;
            // 0x275644: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275648u; }
        if (ctx->pc != 0x275648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275648u; }
        if (ctx->pc != 0x275648u) { return; }
    }
    ctx->pc = 0x275648u;
label_275648:
    // 0x275648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27564c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27564cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275650: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275650u;
    SET_GPR_U32(ctx, 31, 0x275658u);
    ctx->pc = 0x275654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275650u;
            // 0x275654: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275658u; }
        if (ctx->pc != 0x275658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275658u; }
        if (ctx->pc != 0x275658u) { return; }
    }
    ctx->pc = 0x275658u;
label_275658:
    // 0x275658: 0xc097e48  jal         func_25F920
    ctx->pc = 0x275658u;
    SET_GPR_U32(ctx, 31, 0x275660u);
    ctx->pc = 0x27565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275658u;
            // 0x27565c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275660u; }
        if (ctx->pc != 0x275660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275660u; }
        if (ctx->pc != 0x275660u) { return; }
    }
    ctx->pc = 0x275660u;
label_275660:
    // 0x275660: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x275660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275664: 0xc0956d4  jal         func_255B50
    ctx->pc = 0x275664u;
    SET_GPR_U32(ctx, 31, 0x27566Cu);
    ctx->pc = 0x275668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275664u;
            // 0x275668: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27566Cu; }
        if (ctx->pc != 0x27566Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27566Cu; }
        if (ctx->pc != 0x27566Cu) { return; }
    }
    ctx->pc = 0x27566Cu;
label_27566c:
    // 0x27566c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27566Cu;
    {
        const bool branch_taken_0x27566c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27566Cu;
            // 0x275670: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27566c) {
            ctx->pc = 0x27567Cu;
            goto label_27567c;
        }
    }
    ctx->pc = 0x275674u;
    // 0x275674: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x275674u;
    {
        const bool branch_taken_0x275674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275674u;
            // 0x275678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275674) {
            ctx->pc = 0x2756A0u;
            goto label_2756a0;
        }
    }
    ctx->pc = 0x27567Cu;
label_27567c:
    // 0x27567c: 0xc05af24  jal         func_16BC90
    ctx->pc = 0x27567Cu;
    SET_GPR_U32(ctx, 31, 0x275684u);
    ctx->pc = 0x275680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27567Cu;
            // 0x275680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275684u; }
        if (ctx->pc != 0x275684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275684u; }
        if (ctx->pc != 0x275684u) { return; }
    }
    ctx->pc = 0x275684u;
label_275684:
    // 0x275684: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x275688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x275688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27568c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x27568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x275690: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x275690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275694: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x275694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x275698: 0xc0976a0  jal         func_25DA80
    ctx->pc = 0x275698u;
    SET_GPR_U32(ctx, 31, 0x2756A0u);
    ctx->pc = 0x27569Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275698u;
            // 0x27569c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DA80u;
    if (runtime->hasFunction(0x25DA80u)) {
        auto targetFn = runtime->lookupFunction(0x25DA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2756A0u; }
        if (ctx->pc != 0x2756A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__10CEohMotherFiiiP11CCharacter2_0x25da80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2756A0u; }
        if (ctx->pc != 0x2756A0u) { return; }
    }
    ctx->pc = 0x2756A0u;
label_2756a0:
    // 0x2756a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2756a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2756a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2756a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2756a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2756a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2756ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2756ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2756B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2756ACu;
            // 0x2756b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2756B4u;
}
