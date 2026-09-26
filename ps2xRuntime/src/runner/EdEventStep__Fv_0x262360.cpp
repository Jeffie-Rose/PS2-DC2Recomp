#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EdEventStep__Fv
// Address: 0x262360 - 0x262448
void EdEventStep__Fv_0x262360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EdEventStep__Fv_0x262360");
#endif

    switch (ctx->pc) {
        case 0x26237cu: goto label_26237c;
        case 0x262384u: goto label_262384;
        case 0x262394u: goto label_262394;
        case 0x2623b0u: goto label_2623b0;
        case 0x2623c4u: goto label_2623c4;
        case 0x2623ccu: goto label_2623cc;
        case 0x2623dcu: goto label_2623dc;
        case 0x262400u: goto label_262400;
        case 0x262408u: goto label_262408;
        case 0x26241cu: goto label_26241c;
        case 0x262428u: goto label_262428;
        case 0x262430u: goto label_262430;
        default: break;
    }

    ctx->pc = 0x262360u;

    // 0x262360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x262360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x262364: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262368: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x262368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26236c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x262370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262374: 0xc050d88  jal         func_143620
    ctx->pc = 0x262374u;
    SET_GPR_U32(ctx, 31, 0x26237Cu);
    ctx->pc = 0x262378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262374u;
            // 0x262378: 0xc42ce450  lwc1        $f12, -0x1BB0($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143620u;
    if (runtime->hasFunction(0x143620u)) {
        auto targetFn = runtime->lookupFunction(0x143620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26237Cu; }
        if (ctx->pc != 0x26237Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetProjection__Ff_0x143620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26237Cu; }
        if (ctx->pc != 0x26237Cu) { return; }
    }
    ctx->pc = 0x26237Cu;
label_26237c:
    // 0x26237c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26237cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262380: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x262380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262384:
    // 0x262384: 0x3c0201ef  lui         $v0, 0x1EF
    ctx->pc = 0x262384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)495 << 16));
    // 0x262388: 0x24425430  addiu       $v0, $v0, 0x5430
    ctx->pc = 0x262388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21552));
    // 0x26238c: 0xc0971c4  jal         func_25C710
    ctx->pc = 0x26238Cu;
    SET_GPR_U32(ctx, 31, 0x262394u);
    ctx->pc = 0x262390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26238Cu;
            // 0x262390: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C710u;
    if (runtime->hasFunction(0x25C710u)) {
        auto targetFn = runtime->lookupFunction(0x25C710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262394u; }
        if (ctx->pc != 0x262394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__12CSceneObjSeqFv_0x25c710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262394u; }
        if (ctx->pc != 0x262394u) { return; }
    }
    ctx->pc = 0x262394u;
label_262394:
    // 0x262394: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x262394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x262398: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x262398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x26239c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x26239Cu;
    {
        const bool branch_taken_0x26239c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2623A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26239Cu;
            // 0x2623a0: 0x263105f0  addiu       $s1, $s1, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26239c) {
            ctx->pc = 0x262384u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262384;
        }
    }
    ctx->pc = 0x2623A4u;
    // 0x2623a4: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x2623a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x2623a8: 0xc096504  jal         func_259410
    ctx->pc = 0x2623A8u;
    SET_GPR_U32(ctx, 31, 0x2623B0u);
    ctx->pc = 0x2623ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2623A8u;
            // 0x2623ac: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259410u;
    if (runtime->hasFunction(0x259410u)) {
        auto targetFn = runtime->lookupFunction(0x259410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2623B0u; }
        if (ctx->pc != 0x2623B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Play__12CSceneCmrSeqFv_0x259410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2623B0u; }
        if (ctx->pc != 0x2623B0u) { return; }
    }
    ctx->pc = 0x2623B0u;
label_2623b0:
    // 0x2623b0: 0x8f849ed4  lw          $a0, -0x612C($gp)
    ctx->pc = 0x2623b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x2623b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2623B4u;
    {
        const bool branch_taken_0x2623b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2623B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2623B4u;
            // 0x2623b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623b4) {
            ctx->pc = 0x2623C8u;
            goto label_2623c8;
        }
    }
    ctx->pc = 0x2623BCu;
    // 0x2623bc: 0xc0ba808  jal         func_2EA020
    ctx->pc = 0x2623BCu;
    SET_GPR_U32(ctx, 31, 0x2623C4u);
    ctx->pc = 0x2EA020u;
    if (runtime->hasFunction(0x2EA020u)) {
        auto targetFn = runtime->lookupFunction(0x2EA020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2623C4u; }
        if (ctx->pc != 0x2623C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__7CSphidaFv_0x2ea020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2623C4u; }
        if (ctx->pc != 0x2623C4u) { return; }
    }
    ctx->pc = 0x2623C4u;
label_2623c4:
    // 0x2623c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2623c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2623c8:
    // 0x2623c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2623c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2623cc:
    // 0x2623cc: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x2623ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x2623d0: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2623d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2623d4: 0xc070a50  jal         func_1C2940
    ctx->pc = 0x2623D4u;
    SET_GPR_U32(ctx, 31, 0x2623DCu);
    ctx->pc = 0x2623D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2623D4u;
            // 0x2623d8: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2940u;
    if (runtime->hasFunction(0x1C2940u)) {
        auto targetFn = runtime->lookupFunction(0x1C2940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2623DCu; }
        if (ctx->pc != 0x2623DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__15CHitEffectImageFv_0x1c2940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2623DCu; }
        if (ctx->pc != 0x2623DCu) { return; }
    }
    ctx->pc = 0x2623DCu;
label_2623dc:
    // 0x2623dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2623dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2623e0: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x2623e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2623e4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2623E4u;
    {
        const bool branch_taken_0x2623e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2623E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2623E4u;
            // 0x2623e8: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2623e4) {
            ctx->pc = 0x2623CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2623cc;
        }
    }
    ctx->pc = 0x2623ECu;
    // 0x2623ec: 0x8f8497e8  lw          $a0, -0x6818($gp)
    ctx->pc = 0x2623ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940648)));
    // 0x2623f0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2623F0u;
    {
        const bool branch_taken_0x2623f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2623f0) {
            ctx->pc = 0x262408u;
            goto label_262408;
        }
    }
    ctx->pc = 0x2623F8u;
    // 0x2623f8: 0xc0707cc  jal         func_1C1F30
    ctx->pc = 0x2623F8u;
    SET_GPR_U32(ctx, 31, 0x262400u);
    ctx->pc = 0x1C1F30u;
    if (runtime->hasFunction(0x1C1F30u)) {
        auto targetFn = runtime->lookupFunction(0x1C1F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262400u; }
        if (ctx->pc != 0x262400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatPointList__16CSWordAfterImageFv_0x1c1f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262400u; }
        if (ctx->pc != 0x262400u) { return; }
    }
    ctx->pc = 0x262400u;
label_262400:
    // 0x262400: 0xc070860  jal         func_1C2180
    ctx->pc = 0x262400u;
    SET_GPR_U32(ctx, 31, 0x262408u);
    ctx->pc = 0x262404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262400u;
            // 0x262404: 0x8f8497e8  lw          $a0, -0x6818($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940648)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2180u;
    if (runtime->hasFunction(0x1C2180u)) {
        auto targetFn = runtime->lookupFunction(0x1C2180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262408u; }
        if (ctx->pc != 0x262408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__16CSWordAfterImageFv_0x1c2180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262408u; }
        if (ctx->pc != 0x262408u) { return; }
    }
    ctx->pc = 0x262408u;
label_262408:
    // 0x262408: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x262408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x26240c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26240Cu;
    {
        const bool branch_taken_0x26240c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26240c) {
            ctx->pc = 0x26241Cu;
            goto label_26241c;
        }
    }
    ctx->pc = 0x262414u;
    // 0x262414: 0xc0b8580  jal         func_2E1600
    ctx->pc = 0x262414u;
    SET_GPR_U32(ctx, 31, 0x26241Cu);
    ctx->pc = 0x2E1600u;
    if (runtime->hasFunction(0x2E1600u)) {
        auto targetFn = runtime->lookupFunction(0x2E1600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26241Cu; }
        if (ctx->pc != 0x26241Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__16CEffectScriptManFv_0x2e1600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26241Cu; }
        if (ctx->pc != 0x26241Cu) { return; }
    }
    ctx->pc = 0x26241Cu;
label_26241c:
    // 0x26241c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x26241cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x262420: 0xc09818c  jal         func_260630
    ctx->pc = 0x262420u;
    SET_GPR_U32(ctx, 31, 0x262428u);
    ctx->pc = 0x262424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262420u;
            // 0x262424: 0x24842a40  addiu       $a0, $a0, 0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260630u;
    if (runtime->hasFunction(0x260630u)) {
        auto targetFn = runtime->lookupFunction(0x260630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262428u; }
        if (ctx->pc != 0x262428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__13CScreenEffectFv_0x260630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262428u; }
        if (ctx->pc != 0x262428u) { return; }
    }
    ctx->pc = 0x262428u;
label_262428:
    // 0x262428: 0xc052334  jal         func_148CD0
    ctx->pc = 0x262428u;
    SET_GPR_U32(ctx, 31, 0x262430u);
    ctx->pc = 0x148CD0u;
    if (runtime->hasFunction(0x148CD0u)) {
        auto targetFn = runtime->lookupFunction(0x148CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262430u; }
        if (ctx->pc != 0x262430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBG__Fv_0x148cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262430u; }
        if (ctx->pc != 0x262430u) { return; }
    }
    ctx->pc = 0x262430u;
label_262430:
    // 0x262430: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x262430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26243c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26243cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262440: 0x3e00008  jr          $ra
    ctx->pc = 0x262440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262440u;
            // 0x262444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262448u;
}
