#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EdEventDraw__Fv
// Address: 0x261f50 - 0x262050
void EdEventDraw__Fv_0x261f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EdEventDraw__Fv_0x261f50");
#endif

    switch (ctx->pc) {
        case 0x261f6cu: goto label_261f6c;
        case 0x261f78u: goto label_261f78;
        case 0x261f80u: goto label_261f80;
        case 0x261f90u: goto label_261f90;
        case 0x261fb4u: goto label_261fb4;
        case 0x261fc8u: goto label_261fc8;
        case 0x261fd4u: goto label_261fd4;
        case 0x261fe0u: goto label_261fe0;
        case 0x261fecu: goto label_261fec;
        case 0x261ff8u: goto label_261ff8;
        case 0x262000u: goto label_262000;
        case 0x262010u: goto label_262010;
        case 0x26202cu: goto label_26202c;
        case 0x262034u: goto label_262034;
        case 0x26203cu: goto label_26203c;
        default: break;
    }

    ctx->pc = 0x261f50u;

    // 0x261f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x261f54: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x261f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x261f58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x261f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x261f5c: 0x2484f0c0  addiu       $a0, $a0, -0xF40
    ctx->pc = 0x261f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
    // 0x261f60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x261f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x261f64: 0xc0a08f8  jal         func_2823E0
    ctx->pc = 0x261F64u;
    SET_GPR_U32(ctx, 31, 0x261F6Cu);
    ctx->pc = 0x261F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261F64u;
            // 0x261f68: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2823E0u;
    if (runtime->hasFunction(0x2823E0u)) {
        auto targetFn = runtime->lookupFunction(0x2823E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F6Cu; }
        if (ctx->pc != 0x261F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__5CRainFv_0x2823e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F6Cu; }
        if (ctx->pc != 0x261F6Cu) { return; }
    }
    ctx->pc = 0x261F6Cu;
label_261f6c:
    // 0x261f6c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x261f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x261f70: 0xc0a0a78  jal         func_2829E0
    ctx->pc = 0x261F70u;
    SET_GPR_U32(ctx, 31, 0x261F78u);
    ctx->pc = 0x261F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261F70u;
            // 0x261f74: 0x2484f0c0  addiu       $a0, $a0, -0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2829E0u;
    if (runtime->hasFunction(0x2829E0u)) {
        auto targetFn = runtime->lookupFunction(0x2829E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F78u; }
        if (ctx->pc != 0x261F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__5CRainFv_0x2829e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F78u; }
        if (ctx->pc != 0x261F78u) { return; }
    }
    ctx->pc = 0x261F78u;
label_261f78:
    // 0x261f78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x261f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261f7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x261f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261f80:
    // 0x261f80: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x261f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x261f84: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x261f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x261f88: 0xc070a98  jal         func_1C2A60
    ctx->pc = 0x261F88u;
    SET_GPR_U32(ctx, 31, 0x261F90u);
    ctx->pc = 0x261F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261F88u;
            // 0x261f8c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2A60u;
    if (runtime->hasFunction(0x1C2A60u)) {
        auto targetFn = runtime->lookupFunction(0x1C2A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F90u; }
        if (ctx->pc != 0x261F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__15CHitEffectImageFv_0x1c2a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261F90u; }
        if (ctx->pc != 0x261F90u) { return; }
    }
    ctx->pc = 0x261F90u;
label_261f90:
    // 0x261f90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x261f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x261f94: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x261f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x261f98: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x261F98u;
    {
        const bool branch_taken_0x261f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261F98u;
            // 0x261f9c: 0x26310060  addiu       $s1, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261f98) {
            ctx->pc = 0x261F80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261f80;
        }
    }
    ctx->pc = 0x261FA0u;
    // 0x261fa0: 0x8f8497e8  lw          $a0, -0x6818($gp)
    ctx->pc = 0x261fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940648)));
    // 0x261fa4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x261FA4u;
    {
        const bool branch_taken_0x261fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261fa4) {
            ctx->pc = 0x261FB4u;
            goto label_261fb4;
        }
    }
    ctx->pc = 0x261FACu;
    // 0x261fac: 0xc07074c  jal         func_1C1D30
    ctx->pc = 0x261FACu;
    SET_GPR_U32(ctx, 31, 0x261FB4u);
    ctx->pc = 0x1C1D30u;
    if (runtime->hasFunction(0x1C1D30u)) {
        auto targetFn = runtime->lookupFunction(0x1C1D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FB4u; }
        if (ctx->pc != 0x261FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__16CSWordAfterImageFv_0x1c1d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FB4u; }
        if (ctx->pc != 0x261FB4u) { return; }
    }
    ctx->pc = 0x261FB4u;
label_261fb4:
    // 0x261fb4: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x261fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x261fb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x261FB8u;
    {
        const bool branch_taken_0x261fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261fb8) {
            ctx->pc = 0x261FC8u;
            goto label_261fc8;
        }
    }
    ctx->pc = 0x261FC0u;
    // 0x261fc0: 0xc0b866c  jal         func_2E19B0
    ctx->pc = 0x261FC0u;
    SET_GPR_U32(ctx, 31, 0x261FC8u);
    ctx->pc = 0x2E19B0u;
    if (runtime->hasFunction(0x2E19B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E19B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FC8u; }
        if (ctx->pc != 0x261FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__16CEffectScriptManFv_0x2e19b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FC8u; }
        if (ctx->pc != 0x261FC8u) { return; }
    }
    ctx->pc = 0x261FC8u;
label_261fc8:
    // 0x261fc8: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x261fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x261fcc: 0xc07b7fc  jal         func_1EDFF0
    ctx->pc = 0x261FCCu;
    SET_GPR_U32(ctx, 31, 0x261FD4u);
    ctx->pc = 0x261FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261FCCu;
            // 0x261fd0: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EDFF0u;
    if (runtime->hasFunction(0x1EDFF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EDFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FD4u; }
        if (ctx->pc != 0x261FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__11CDngFreeMapFv_0x1edff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FD4u; }
        if (ctx->pc != 0x261FD4u) { return; }
    }
    ctx->pc = 0x261FD4u;
label_261fd4:
    // 0x261fd4: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x261fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x261fd8: 0xc07b868  jal         func_1EE1A0
    ctx->pc = 0x261FD8u;
    SET_GPR_U32(ctx, 31, 0x261FE0u);
    ctx->pc = 0x261FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261FD8u;
            // 0x261fdc: 0x24849810  addiu       $a0, $a0, -0x67F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1A0u;
    if (runtime->hasFunction(0x1EE1A0u)) {
        auto targetFn = runtime->lookupFunction(0x1EE1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FE0u; }
        if (ctx->pc != 0x261FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__11CDngFreeMapFv_0x1ee1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FE0u; }
        if (ctx->pc != 0x261FE0u) { return; }
    }
    ctx->pc = 0x261FE0u;
label_261fe0:
    // 0x261fe0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x261fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x261fe4: 0xc0a4228  jal         func_2908A0
    ctx->pc = 0x261FE4u;
    SET_GPR_U32(ctx, 31, 0x261FECu);
    ctx->pc = 0x261FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261FE4u;
            // 0x261fe8: 0x2484ea80  addiu       $a0, $a0, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2908A0u;
    if (runtime->hasFunction(0x2908A0u)) {
        auto targetFn = runtime->lookupFunction(0x2908A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FECu; }
        if (ctx->pc != 0x261FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__18CEventSpriteMotherFv_0x2908a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FECu; }
        if (ctx->pc != 0x261FECu) { return; }
    }
    ctx->pc = 0x261FECu;
label_261fec:
    // 0x261fec: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x261fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x261ff0: 0xc0a4240  jal         func_290900
    ctx->pc = 0x261FF0u;
    SET_GPR_U32(ctx, 31, 0x261FF8u);
    ctx->pc = 0x261FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261FF0u;
            // 0x261ff4: 0x2484ea80  addiu       $a0, $a0, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290900u;
    if (runtime->hasFunction(0x290900u)) {
        auto targetFn = runtime->lookupFunction(0x290900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FF8u; }
        if (ctx->pc != 0x261FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__18CEventSpriteMotherFv_0x290900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261FF8u; }
        if (ctx->pc != 0x261FF8u) { return; }
    }
    ctx->pc = 0x261FF8u;
label_261ff8:
    // 0x261ff8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x261ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ffc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x261ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262000:
    // 0x262000: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x262000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x262004: 0x24421230  addiu       $v0, $v0, 0x1230
    ctx->pc = 0x262004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4656));
    // 0x262008: 0xc0a4318  jal         func_290C60
    ctx->pc = 0x262008u;
    SET_GPR_U32(ctx, 31, 0x262010u);
    ctx->pc = 0x26200Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262008u;
            // 0x26200c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290C60u;
    if (runtime->hasFunction(0x290C60u)) {
        auto targetFn = runtime->lookupFunction(0x290C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262010u; }
        if (ctx->pc != 0x262010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalDraw__13CEventSprite2Fv_0x290c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262010u; }
        if (ctx->pc != 0x262010u) { return; }
    }
    ctx->pc = 0x262010u;
label_262010:
    // 0x262010: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x262010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x262014: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x262014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x262018: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x262018u;
    {
        const bool branch_taken_0x262018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26201Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262018u;
            // 0x26201c: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262018) {
            ctx->pc = 0x262000u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262000;
        }
    }
    ctx->pc = 0x262020u;
    // 0x262020: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x262020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x262024: 0xc098190  jal         func_260640
    ctx->pc = 0x262024u;
    SET_GPR_U32(ctx, 31, 0x26202Cu);
    ctx->pc = 0x262028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262024u;
            // 0x262028: 0x24842a40  addiu       $a0, $a0, 0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260640u;
    if (runtime->hasFunction(0x260640u)) {
        auto targetFn = runtime->lookupFunction(0x260640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26202Cu; }
        if (ctx->pc != 0x26202Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__13CScreenEffectFv_0x260640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26202Cu; }
        if (ctx->pc != 0x26202Cu) { return; }
    }
    ctx->pc = 0x26202Cu;
label_26202c:
    // 0x26202c: 0xc0889fc  jal         func_2227F0
    ctx->pc = 0x26202Cu;
    SET_GPR_U32(ctx, 31, 0x262034u);
    ctx->pc = 0x262030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26202Cu;
            // 0x262030: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2227F0u;
    if (runtime->hasFunction(0x2227F0u)) {
        auto targetFn = runtime->lookupFunction(0x2227F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262034u; }
        if (ctx->pc != 0x262034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuDl__Fi_0x2227f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262034u; }
        if (ctx->pc != 0x262034u) { return; }
    }
    ctx->pc = 0x262034u;
label_262034:
    // 0x262034: 0xc07d68c  jal         func_1F5A30
    ctx->pc = 0x262034u;
    SET_GPR_U32(ctx, 31, 0x26203Cu);
    ctx->pc = 0x1F5A30u;
    if (runtime->hasFunction(0x1F5A30u)) {
        auto targetFn = runtime->lookupFunction(0x1F5A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26203Cu; }
        if (ctx->pc != 0x26203Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDownLoadAnaunce__Fv_0x1f5a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26203Cu; }
        if (ctx->pc != 0x26203Cu) { return; }
    }
    ctx->pc = 0x26203Cu;
label_26203c:
    // 0x26203c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26203cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262048: 0x3e00008  jr          $ra
    ctx->pc = 0x262048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26204Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262048u;
            // 0x26204c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262050u;
}
