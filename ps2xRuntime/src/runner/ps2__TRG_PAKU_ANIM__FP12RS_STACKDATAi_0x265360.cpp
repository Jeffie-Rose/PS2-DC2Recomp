#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _TRG_PAKU_ANIM__FP12RS_STACKDATAi
// Address: 0x265360 - 0x265434
void ps2__TRG_PAKU_ANIM__FP12RS_STACKDATAi_0x265360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__TRG_PAKU_ANIM__FP12RS_STACKDATAi_0x265360");
#endif

    switch (ctx->pc) {
        case 0x265370u: goto label_265370;
        case 0x265388u: goto label_265388;
        case 0x2653acu: goto label_2653ac;
        case 0x2653c8u: goto label_2653c8;
        case 0x2653ecu: goto label_2653ec;
        case 0x265400u: goto label_265400;
        case 0x265424u: goto label_265424;
        default: break;
    }

    ctx->pc = 0x265360u;

    // 0x265360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x265360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x265364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265368: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265368u;
    SET_GPR_U32(ctx, 31, 0x265370u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265370u; }
        if (ctx->pc != 0x265370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265370u; }
        if (ctx->pc != 0x265370u) { return; }
    }
    ctx->pc = 0x265370u;
label_265370:
    // 0x265370: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x265370u;
    {
        const bool branch_taken_0x265370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x265374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265370u;
            // 0x265374: 0x3c0401ee  lui         $a0, 0x1EE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265370) {
            ctx->pc = 0x2653D0u;
            goto label_2653d0;
        }
    }
    ctx->pc = 0x265378u;
    // 0x265378: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x265378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x26537c: 0x248402d0  addiu       $a0, $a0, 0x2D0
    ctx->pc = 0x26537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x265380: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x265380u;
    SET_GPR_U32(ctx, 31, 0x265388u);
    ctx->pc = 0x265384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265380u;
            // 0x265384: 0x24a5c708  addiu       $a1, $a1, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265388u; }
        if (ctx->pc != 0x265388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265388u; }
        if (ctx->pc != 0x265388u) { return; }
    }
    ctx->pc = 0x265388u;
label_265388:
    // 0x265388: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x265388u;
    {
        const bool branch_taken_0x265388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265388) {
            ctx->pc = 0x2653ACu;
            goto label_2653ac;
        }
    }
    ctx->pc = 0x265390u;
    // 0x265390: 0x8f8597f8  lw          $a1, -0x6808($gp)
    ctx->pc = 0x265390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940664)));
    // 0x265394: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x265394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x265398: 0x3c0701ee  lui         $a3, 0x1EE
    ctx->pc = 0x265398u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)494 << 16));
    // 0x26539c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x26539cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x2653a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2653a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2653a4: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x2653A4u;
    SET_GPR_U32(ctx, 31, 0x2653ACu);
    ctx->pc = 0x2653A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2653A4u;
            // 0x2653a8: 0x24e702d0  addiu       $a3, $a3, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E770u;
    if (runtime->hasFunction(0x25E770u)) {
        auto targetFn = runtime->lookupFunction(0x25E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2653ACu; }
        if (ctx->pc != 0x2653ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexAnim__10CEohMotherFiiPc_0x25e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2653ACu; }
        if (ctx->pc != 0x2653ACu) { return; }
    }
    ctx->pc = 0x2653ACu;
label_2653ac:
    // 0x2653ac: 0x8f8597f8  lw          $a1, -0x6808($gp)
    ctx->pc = 0x2653acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940664)));
    // 0x2653b0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2653b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2653b4: 0x3c0701ee  lui         $a3, 0x1EE
    ctx->pc = 0x2653b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)494 << 16));
    // 0x2653b8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2653b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x2653bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2653bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2653c0: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x2653C0u;
    SET_GPR_U32(ctx, 31, 0x2653C8u);
    ctx->pc = 0x2653C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2653C0u;
            // 0x2653c4: 0x24e70290  addiu       $a3, $a3, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E770u;
    if (runtime->hasFunction(0x25E770u)) {
        auto targetFn = runtime->lookupFunction(0x25E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2653C8u; }
        if (ctx->pc != 0x2653C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexAnim__10CEohMotherFiiPc_0x25e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2653C8u; }
        if (ctx->pc != 0x2653C8u) { return; }
    }
    ctx->pc = 0x2653C8u;
label_2653c8:
    // 0x2653c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2653C8u;
    {
        const bool branch_taken_0x2653c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2653CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2653C8u;
            // 0x2653cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2653c8) {
            ctx->pc = 0x265428u;
            goto label_265428;
        }
    }
    ctx->pc = 0x2653D0u;
label_2653d0:
    // 0x2653d0: 0x8f8597f8  lw          $a1, -0x6808($gp)
    ctx->pc = 0x2653d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940664)));
    // 0x2653d4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2653d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x2653d8: 0x3c0701ee  lui         $a3, 0x1EE
    ctx->pc = 0x2653d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)494 << 16));
    // 0x2653dc: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2653dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x2653e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2653e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2653e4: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x2653E4u;
    SET_GPR_U32(ctx, 31, 0x2653ECu);
    ctx->pc = 0x2653E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2653E4u;
            // 0x2653e8: 0x24e70290  addiu       $a3, $a3, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E770u;
    if (runtime->hasFunction(0x25E770u)) {
        auto targetFn = runtime->lookupFunction(0x25E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2653ECu; }
        if (ctx->pc != 0x2653ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexAnim__10CEohMotherFiiPc_0x25e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2653ECu; }
        if (ctx->pc != 0x2653ECu) { return; }
    }
    ctx->pc = 0x2653ECu;
label_2653ec:
    // 0x2653ec: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x2653ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x2653f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2653f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2653f4: 0x248402d0  addiu       $a0, $a0, 0x2D0
    ctx->pc = 0x2653f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x2653f8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2653F8u;
    SET_GPR_U32(ctx, 31, 0x265400u);
    ctx->pc = 0x2653FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2653F8u;
            // 0x2653fc: 0x24a5c708  addiu       $a1, $a1, -0x38F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265400u; }
        if (ctx->pc != 0x265400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265400u; }
        if (ctx->pc != 0x265400u) { return; }
    }
    ctx->pc = 0x265400u;
label_265400:
    // 0x265400: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x265400u;
    {
        const bool branch_taken_0x265400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x265400) {
            ctx->pc = 0x265424u;
            goto label_265424;
        }
    }
    ctx->pc = 0x265408u;
    // 0x265408: 0x8f8597f8  lw          $a1, -0x6808($gp)
    ctx->pc = 0x265408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940664)));
    // 0x26540c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x26540cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x265410: 0x3c0701ee  lui         $a3, 0x1EE
    ctx->pc = 0x265410u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)494 << 16));
    // 0x265414: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x265414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x265418: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x265418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26541c: 0xc0979dc  jal         func_25E770
    ctx->pc = 0x26541Cu;
    SET_GPR_U32(ctx, 31, 0x265424u);
    ctx->pc = 0x265420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26541Cu;
            // 0x265420: 0x24e702d0  addiu       $a3, $a3, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25E770u;
    if (runtime->hasFunction(0x25E770u)) {
        auto targetFn = runtime->lookupFunction(0x25E770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265424u; }
        if (ctx->pc != 0x265424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexAnim__10CEohMotherFiiPc_0x25e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265424u; }
        if (ctx->pc != 0x265424u) { return; }
    }
    ctx->pc = 0x265424u;
label_265424:
    // 0x265424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_265428:
    // 0x265428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26542c: 0x3e00008  jr          $ra
    ctx->pc = 0x26542Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26542Cu;
            // 0x265430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265434u;
}
