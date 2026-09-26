#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SYNC_CHROBJ__FP12RS_STACKDATAi
// Address: 0x275450 - 0x275504
void ps2__EOH_SYNC_CHROBJ__FP12RS_STACKDATAi_0x275450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SYNC_CHROBJ__FP12RS_STACKDATAi_0x275450");
#endif

    switch (ctx->pc) {
        case 0x275468u: goto label_275468;
        case 0x275478u: goto label_275478;
        case 0x275484u: goto label_275484;
        case 0x275490u: goto label_275490;
        case 0x2754bcu: goto label_2754bc;
        case 0x2754d8u: goto label_2754d8;
        case 0x2754f0u: goto label_2754f0;
        default: break;
    }

    ctx->pc = 0x275450u;

    // 0x275450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x275454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x275458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x275458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27545c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x27545cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x275460: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275460u;
    SET_GPR_U32(ctx, 31, 0x275468u);
    ctx->pc = 0x275464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275460u;
            // 0x275464: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275468u; }
        if (ctx->pc != 0x275468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275468u; }
        if (ctx->pc != 0x275468u) { return; }
    }
    ctx->pc = 0x275468u;
label_275468:
    // 0x275468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27546c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27546cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275470: 0xc097e18  jal         func_25F860
    ctx->pc = 0x275470u;
    SET_GPR_U32(ctx, 31, 0x275478u);
    ctx->pc = 0x275474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275470u;
            // 0x275474: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275478u; }
        if (ctx->pc != 0x275478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275478u; }
        if (ctx->pc != 0x275478u) { return; }
    }
    ctx->pc = 0x275478u;
label_275478:
    // 0x275478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27547c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27547Cu;
    SET_GPR_U32(ctx, 31, 0x275484u);
    ctx->pc = 0x275480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27547Cu;
            // 0x275480: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275484u; }
        if (ctx->pc != 0x275484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275484u; }
        if (ctx->pc != 0x275484u) { return; }
    }
    ctx->pc = 0x275484u;
label_275484:
    // 0x275484: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x275484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275488: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x275488u;
    SET_GPR_U32(ctx, 31, 0x275490u);
    ctx->pc = 0x27548Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275488u;
            // 0x27548c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275490u; }
        if (ctx->pc != 0x275490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275490u; }
        if (ctx->pc != 0x275490u) { return; }
    }
    ctx->pc = 0x275490u;
label_275490:
    // 0x275490: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275490u;
    {
        const bool branch_taken_0x275490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275490) {
            ctx->pc = 0x2754A0u;
            goto label_2754a0;
        }
    }
    ctx->pc = 0x275498u;
    // 0x275498: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x275498u;
    {
        const bool branch_taken_0x275498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27549Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275498u;
            // 0x27549c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275498) {
            ctx->pc = 0x2754F0u;
            goto label_2754f0;
        }
    }
    ctx->pc = 0x2754A0u;
label_2754a0:
    // 0x2754a0: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2754a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2754a4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2754A4u;
    {
        const bool branch_taken_0x2754a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2754A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2754A4u;
            // 0x2754a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754a4) {
            ctx->pc = 0x2754B4u;
            goto label_2754b4;
        }
    }
    ctx->pc = 0x2754ACu;
    // 0x2754ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2754ACu;
    {
        const bool branch_taken_0x2754ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2754ACu;
            // 0x2754b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754ac) {
            ctx->pc = 0x2754F0u;
            goto label_2754f0;
        }
    }
    ctx->pc = 0x2754B4u;
label_2754b4:
    // 0x2754b4: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x2754B4u;
    SET_GPR_U32(ctx, 31, 0x2754BCu);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2754BCu; }
        if (ctx->pc != 0x2754BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2754BCu; }
        if (ctx->pc != 0x2754BCu) { return; }
    }
    ctx->pc = 0x2754BCu;
label_2754bc:
    // 0x2754bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2754BCu;
    {
        const bool branch_taken_0x2754bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2754C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2754BCu;
            // 0x2754c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754bc) {
            ctx->pc = 0x2754CCu;
            goto label_2754cc;
        }
    }
    ctx->pc = 0x2754C4u;
    // 0x2754c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2754C4u;
    {
        const bool branch_taken_0x2754c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2754C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2754C4u;
            // 0x2754c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2754c4) {
            ctx->pc = 0x2754F0u;
            goto label_2754f0;
        }
    }
    ctx->pc = 0x2754CCu;
label_2754cc:
    // 0x2754cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2754ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754d0: 0xc04de4c  jal         func_137930
    ctx->pc = 0x2754D0u;
    SET_GPR_U32(ctx, 31, 0x2754D8u);
    ctx->pc = 0x2754D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2754D0u;
            // 0x2754d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137930u;
    if (runtime->hasFunction(0x137930u)) {
        auto targetFn = runtime->lookupFunction(0x137930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2754D8u; }
        if (ctx->pc != 0x2754D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotType__8mgCFrameFi_0x137930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2754D8u; }
        if (ctx->pc != 0x2754D8u) { return; }
    }
    ctx->pc = 0x2754D8u;
label_2754d8:
    // 0x2754d8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2754d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2754dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2754dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2754e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2754e4: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2754e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x2754e8: 0xc0976c0  jal         func_25DB00
    ctx->pc = 0x2754E8u;
    SET_GPR_U32(ctx, 31, 0x2754F0u);
    ctx->pc = 0x2754ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2754E8u;
            // 0x2754ec: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DB00u;
    if (runtime->hasFunction(0x25DB00u)) {
        auto targetFn = runtime->lookupFunction(0x25DB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2754F0u; }
        if (ctx->pc != 0x2754F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__10CEohMotherFiiP8mgCFrame_0x25db00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2754F0u; }
        if (ctx->pc != 0x2754F0u) { return; }
    }
    ctx->pc = 0x2754F0u;
label_2754f0:
    // 0x2754f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2754f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2754f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2754f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2754f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2754f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2754fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2754FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2754FCu;
            // 0x275500: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x275504u;
}
