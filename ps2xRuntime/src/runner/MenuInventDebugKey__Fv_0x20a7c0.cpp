#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInventDebugKey__Fv
// Address: 0x20a7c0 - 0x20aa10
void MenuInventDebugKey__Fv_0x20a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInventDebugKey__Fv_0x20a7c0");
#endif

    switch (ctx->pc) {
        case 0x20a7d8u: goto label_20a7d8;
        case 0x20a7e4u: goto label_20a7e4;
        case 0x20a7f0u: goto label_20a7f0;
        case 0x20a8e4u: goto label_20a8e4;
        case 0x20a934u: goto label_20a934;
        case 0x20a93cu: goto label_20a93c;
        case 0x20a94cu: goto label_20a94c;
        case 0x20a95cu: goto label_20a95c;
        case 0x20a964u: goto label_20a964;
        case 0x20a978u: goto label_20a978;
        case 0x20a99cu: goto label_20a99c;
        case 0x20a9acu: goto label_20a9ac;
        case 0x20a9c4u: goto label_20a9c4;
        case 0x20a9d0u: goto label_20a9d0;
        case 0x20a9e8u: goto label_20a9e8;
        default: break;
    }

    ctx->pc = 0x20a7c0u;

    // 0x20a7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a7c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20a7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20a7c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20a7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20a7cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20a7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20a7d0: 0xc08f80c  jal         func_23E030
    ctx->pc = 0x20A7D0u;
    SET_GPR_U32(ctx, 31, 0x20A7D8u);
    ctx->pc = 0x20A7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A7D0u;
            // 0x20a7d4: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A7D8u; }
        if (ctx->pc != 0x20A7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A7D8u; }
        if (ctx->pc != 0x20A7D8u) { return; }
    }
    ctx->pc = 0x20A7D8u;
label_20a7d8:
    // 0x20a7d8: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x20a7dc: 0xc08f840  jal         func_23E100
    ctx->pc = 0x20A7DCu;
    SET_GPR_U32(ctx, 31, 0x20A7E4u);
    ctx->pc = 0x20A7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A7DCu;
            // 0x20a7e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A7E4u; }
        if (ctx->pc != 0x20A7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A7E4u; }
        if (ctx->pc != 0x20A7E4u) { return; }
    }
    ctx->pc = 0x20A7E4u;
label_20a7e4:
    // 0x20a7e4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x20a7e8: 0xc08f8c8  jal         func_23E320
    ctx->pc = 0x20A7E8u;
    SET_GPR_U32(ctx, 31, 0x20A7F0u);
    ctx->pc = 0x20A7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A7E8u;
            // 0x20a7ec: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A7F0u; }
        if (ctx->pc != 0x20A7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A7F0u; }
        if (ctx->pc != 0x20A7F0u) { return; }
    }
    ctx->pc = 0x20A7F0u;
label_20a7f0:
    // 0x20a7f0: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
    // 0x20a7f4: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x20a7f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x20a7f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A7F8u;
    {
        const bool branch_taken_0x20a7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A7F8u;
            // 0x20a7fc: 0x32030001  andi        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7f8) {
            ctx->pc = 0x20A808u;
            goto label_20a808;
        }
    }
    ctx->pc = 0x20A800u;
    // 0x20a800: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x20A800u;
    {
        const bool branch_taken_0x20a800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a800) {
            ctx->pc = 0x20A9F8u;
            goto label_20a9f8;
        }
    }
    ctx->pc = 0x20A808u;
label_20a808:
    // 0x20a808: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A808u;
    {
        const bool branch_taken_0x20a808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A808u;
            // 0x20a80c: 0x32030002  andi        $v1, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a808) {
            ctx->pc = 0x20A820u;
            goto label_20a820;
        }
    }
    ctx->pc = 0x20A810u;
    // 0x20a810: 0x87839198  lh          $v1, -0x6E68($gp)
    ctx->pc = 0x20a810u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939032)));
    // 0x20a814: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20a814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20a818: 0xa7839198  sh          $v1, -0x6E68($gp)
    ctx->pc = 0x20a818u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939032), (uint16_t)GPR_U32(ctx, 3));
    // 0x20a81c: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x20a81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
label_20a820:
    // 0x20a820: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A820u;
    {
        const bool branch_taken_0x20a820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A820u;
            // 0x20a824: 0x32030010  andi        $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a820) {
            ctx->pc = 0x20A838u;
            goto label_20a838;
        }
    }
    ctx->pc = 0x20A828u;
    // 0x20a828: 0x87839198  lh          $v1, -0x6E68($gp)
    ctx->pc = 0x20a828u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939032)));
    // 0x20a82c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20a830: 0xa7839198  sh          $v1, -0x6E68($gp)
    ctx->pc = 0x20a830u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939032), (uint16_t)GPR_U32(ctx, 3));
    // 0x20a834: 0x32030010  andi        $v1, $s0, 0x10
    ctx->pc = 0x20a834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_20a838:
    // 0x20a838: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A838u;
    {
        const bool branch_taken_0x20a838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A838u;
            // 0x20a83c: 0x32030040  andi        $v1, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a838) {
            ctx->pc = 0x20A848u;
            goto label_20a848;
        }
    }
    ctx->pc = 0x20A840u;
    // 0x20a840: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A840u;
    {
        const bool branch_taken_0x20a840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A840u;
            // 0x20a844: 0x32030020  andi        $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a840) {
            ctx->pc = 0x20A858u;
            goto label_20a858;
        }
    }
    ctx->pc = 0x20A848u;
label_20a848:
    // 0x20a848: 0x87839198  lh          $v1, -0x6E68($gp)
    ctx->pc = 0x20a848u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939032)));
    // 0x20a84c: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x20a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x20a850: 0xa7839198  sh          $v1, -0x6E68($gp)
    ctx->pc = 0x20a850u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939032), (uint16_t)GPR_U32(ctx, 3));
    // 0x20a854: 0x32030020  andi        $v1, $s0, 0x20
    ctx->pc = 0x20a854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
label_20a858:
    // 0x20a858: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A858u;
    {
        const bool branch_taken_0x20a858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A858u;
            // 0x20a85c: 0x32030080  andi        $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a858) {
            ctx->pc = 0x20A868u;
            goto label_20a868;
        }
    }
    ctx->pc = 0x20A860u;
    // 0x20a860: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A860u;
    {
        const bool branch_taken_0x20a860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a860) {
            ctx->pc = 0x20A874u;
            goto label_20a874;
        }
    }
    ctx->pc = 0x20A868u;
label_20a868:
    // 0x20a868: 0x87839198  lh          $v1, -0x6E68($gp)
    ctx->pc = 0x20a868u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939032)));
    // 0x20a86c: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x20a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x20a870: 0xa7839198  sh          $v1, -0x6E68($gp)
    ctx->pc = 0x20a870u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939032), (uint16_t)GPR_U32(ctx, 3));
label_20a874:
    // 0x20a874: 0x87839198  lh          $v1, -0x6E68($gp)
    ctx->pc = 0x20a874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939032)));
    // 0x20a878: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A878u;
    {
        const bool branch_taken_0x20a878 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x20a878) {
            ctx->pc = 0x20A884u;
            goto label_20a884;
        }
    }
    ctx->pc = 0x20A880u;
    // 0x20a880: 0xa7809198  sh          $zero, -0x6E68($gp)
    ctx->pc = 0x20a880u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939032), (uint16_t)GPR_U32(ctx, 0));
label_20a884:
    // 0x20a884: 0x878490f4  lh          $a0, -0x6F0C($gp)
    ctx->pc = 0x20a884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938868)));
    // 0x20a888: 0x87839198  lh          $v1, -0x6E68($gp)
    ctx->pc = 0x20a888u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939032)));
    // 0x20a88c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x20a88cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20a890: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A890u;
    {
        const bool branch_taken_0x20a890 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A890u;
            // 0x20a894: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a890) {
            ctx->pc = 0x20A8A4u;
            goto label_20a8a4;
        }
    }
    ctx->pc = 0x20A898u;
    // 0x20a898: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x20a898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x20a89c: 0xa7839198  sh          $v1, -0x6E68($gp)
    ctx->pc = 0x20a89cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939032), (uint16_t)GPR_U32(ctx, 3));
    // 0x20a8a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20a8a4:
    // 0x20a8a4: 0x10430049  beq         $v0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x20A8A4u;
    {
        const bool branch_taken_0x20a8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20A8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A8A4u;
            // 0x20a8a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8a4) {
            ctx->pc = 0x20A9CCu;
            goto label_20a9cc;
        }
    }
    ctx->pc = 0x20A8ACu;
    // 0x20a8ac: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x20a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20a8b0: 0x10430039  beq         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x20A8B0u;
    {
        const bool branch_taken_0x20a8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20A8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A8B0u;
            // 0x20a8b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8b0) {
            ctx->pc = 0x20A998u;
            goto label_20a998;
        }
    }
    ctx->pc = 0x20A8B8u;
    // 0x20a8b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20a8bc: 0x10430025  beq         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x20A8BCu;
    {
        const bool branch_taken_0x20a8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20A8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A8BCu;
            // 0x20a8c0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8bc) {
            ctx->pc = 0x20A954u;
            goto label_20a954;
        }
    }
    ctx->pc = 0x20A8C4u;
    // 0x20a8c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a8c8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20A8C8u;
    {
        const bool branch_taken_0x20a8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20a8c8) {
            ctx->pc = 0x20A8D8u;
            goto label_20a8d8;
        }
    }
    ctx->pc = 0x20A8D0u;
    // 0x20a8d0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x20A8D0u;
    {
        const bool branch_taken_0x20a8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a8d0) {
            ctx->pc = 0x20A9F8u;
            goto label_20a9f8;
        }
    }
    ctx->pc = 0x20A8D8u;
label_20a8d8:
    // 0x20a8d8: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x20a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x20a8dc: 0xc07fac0  jal         func_1FEB00
    ctx->pc = 0x20A8DCu;
    SET_GPR_U32(ctx, 31, 0x20A8E4u);
    ctx->pc = 0x20A8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A8DCu;
            // 0x20a8e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB00u;
    if (runtime->hasFunction(0x1FEB00u)) {
        auto targetFn = runtime->lookupFunction(0x1FEB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A8E4u; }
        if (ctx->pc != 0x20A8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsPhotoSpace__15CInventUserDataFPi_0x1feb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A8E4u; }
        if (ctx->pc != 0x20A8E4u) { return; }
    }
    ctx->pc = 0x20A8E4u;
label_20a8e4:
    // 0x20a8e4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x20A8E4u;
    {
        const bool branch_taken_0x20a8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A8E4u;
            // 0x20a8e8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8e4) {
            ctx->pc = 0x20A944u;
            goto label_20a944;
        }
    }
    ctx->pc = 0x20A8ECu;
    // 0x20a8ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a8f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a8f4: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x20a8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20a8f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a8fc: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x20a8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20a900: 0x87879198  lh          $a3, -0x6E68($gp)
    ctx->pc = 0x20a900u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939032)));
    // 0x20a904: 0x8f8490f0  lw          $a0, -0x6F10($gp)
    ctx->pc = 0x20a904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x20a908: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x20a908u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x20a90c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x20a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x20a910: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x20a910u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a914: 0xa444000a  sh          $a0, 0xA($v0)
    ctx->pc = 0x20a914u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x20a918: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x20a918u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x20a91c: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x20a91cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x20a920: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x20a920u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x20a924: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x20a924u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x20a928: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x20a928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x20a92c: 0xc049c86  jal         func_127218
    ctx->pc = 0x20A92Cu;
    SET_GPR_U32(ctx, 31, 0x20A934u);
    ctx->pc = 0x20A930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A92Cu;
            // 0x20a930: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A934u; }
        if (ctx->pc != 0x20A934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A934u; }
        if (ctx->pc != 0x20A934u) { return; }
    }
    ctx->pc = 0x20A934u;
label_20a934:
    // 0x20a934: 0xc094274  jal         func_2509D0
    ctx->pc = 0x20A934u;
    SET_GPR_U32(ctx, 31, 0x20A93Cu);
    ctx->pc = 0x20A938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A934u;
            // 0x20a938: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A93Cu; }
        if (ctx->pc != 0x20A93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A93Cu; }
        if (ctx->pc != 0x20A93Cu) { return; }
    }
    ctx->pc = 0x20A93Cu;
label_20a93c:
    // 0x20a93c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x20A93Cu;
    {
        const bool branch_taken_0x20a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a93c) {
            ctx->pc = 0x20A9F8u;
            goto label_20a9f8;
        }
    }
    ctx->pc = 0x20A944u;
label_20a944:
    // 0x20a944: 0xc094274  jal         func_2509D0
    ctx->pc = 0x20A944u;
    SET_GPR_U32(ctx, 31, 0x20A94Cu);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A94Cu; }
        if (ctx->pc != 0x20A94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A94Cu; }
        if (ctx->pc != 0x20A94Cu) { return; }
    }
    ctx->pc = 0x20A94Cu;
label_20a94c:
    // 0x20a94c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x20A94Cu;
    {
        const bool branch_taken_0x20a94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a94c) {
            ctx->pc = 0x20A9F8u;
            goto label_20a9f8;
        }
    }
    ctx->pc = 0x20A954u;
label_20a954:
    // 0x20a954: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20A954u;
    {
        const bool branch_taken_0x20a954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A954u;
            // 0x20a958: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a954) {
            ctx->pc = 0x20A980u;
            goto label_20a980;
        }
    }
    ctx->pc = 0x20A95Cu;
label_20a95c:
    // 0x20a95c: 0xc07f84c  jal         func_1FE130
    ctx->pc = 0x20A95Cu;
    SET_GPR_U32(ctx, 31, 0x20A964u);
    ctx->pc = 0x1FE130u;
    if (runtime->hasFunction(0x1FE130u)) {
        auto targetFn = runtime->lookupFunction(0x1FE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A964u; }
        if (ctx->pc != 0x20A964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventUserDataPtr__Fv_0x1fe130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A964u; }
        if (ctx->pc != 0x20A964u) { return; }
    }
    ctx->pc = 0x20A964u;
label_20a964:
    // 0x20a964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20a964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a968: 0x8f8290f0  lw          $v0, -0x6F10($gp)
    ctx->pc = 0x20a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x20a96c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20a970: 0xc07fb10  jal         func_1FEC40
    ctx->pc = 0x20A970u;
    SET_GPR_U32(ctx, 31, 0x20A978u);
    ctx->pc = 0x20A974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A970u;
            // 0x20a974: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC40u;
    if (runtime->hasFunction(0x1FEC40u)) {
        auto targetFn = runtime->lookupFunction(0x1FEC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A978u; }
        if (ctx->pc != 0x20A978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNetaFlag__15CInventUserDataFi_0x1fec40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A978u; }
        if (ctx->pc != 0x20A978u) { return; }
    }
    ctx->pc = 0x20A978u;
label_20a978:
    // 0x20a978: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x20a978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x20a97c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20a97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20a980:
    // 0x20a980: 0x878290f4  lh          $v0, -0x6F0C($gp)
    ctx->pc = 0x20a980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938868)));
    // 0x20a984: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x20a984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20a988: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20A988u;
    {
        const bool branch_taken_0x20a988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a988) {
            ctx->pc = 0x20A95Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20a95c;
        }
    }
    ctx->pc = 0x20A990u;
    // 0x20a990: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x20A990u;
    {
        const bool branch_taken_0x20a990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a990) {
            ctx->pc = 0x20A9F8u;
            goto label_20a9f8;
        }
    }
    ctx->pc = 0x20A998u;
label_20a998:
    // 0x20a998: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20a998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a99c:
    // 0x20a99c: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x20a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x20a9a0: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x20a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x20a9a4: 0xc07fbd0  jal         func_1FEF40
    ctx->pc = 0x20A9A4u;
    SET_GPR_U32(ctx, 31, 0x20A9ACu);
    ctx->pc = 0x20A9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A9A4u;
            // 0x20a9a8: 0x24450408  addiu       $a1, $v0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF40u;
    if (runtime->hasFunction(0x1FEF40u)) {
        auto targetFn = runtime->lookupFunction(0x1FEF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A9ACu; }
        if (ctx->pc != 0x20A9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LevelCheck__15CInventUserDataFP17USER_PICTURE_INFO_0x1fef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A9ACu; }
        if (ctx->pc != 0x20A9ACu) { return; }
    }
    ctx->pc = 0x20A9ACu;
label_20a9ac:
    // 0x20a9ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20a9acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a9b0: 0x2a02001e  slti        $v0, $s0, 0x1E
    ctx->pc = 0x20a9b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x20a9b4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20A9B4u;
    {
        const bool branch_taken_0x20a9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A9B4u;
            // 0x20a9b8: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9b4) {
            ctx->pc = 0x20A99Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20a99c;
        }
    }
    ctx->pc = 0x20A9BCu;
    // 0x20a9bc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x20A9BCu;
    SET_GPR_U32(ctx, 31, 0x20A9C4u);
    ctx->pc = 0x20A9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A9BCu;
            // 0x20a9c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A9C4u; }
        if (ctx->pc != 0x20A9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A9C4u; }
        if (ctx->pc != 0x20A9C4u) { return; }
    }
    ctx->pc = 0x20A9C4u;
label_20a9c4:
    // 0x20a9c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20A9C4u;
    {
        const bool branch_taken_0x20a9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a9c4) {
            ctx->pc = 0x20A9F8u;
            goto label_20a9f8;
        }
    }
    ctx->pc = 0x20A9CCu;
label_20a9cc:
    // 0x20a9cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20a9ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a9d0:
    // 0x20a9d0: 0x8f829194  lw          $v0, -0x6E6C($gp)
    ctx->pc = 0x20a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939028)));
    // 0x20a9d4: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x20a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x20a9d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20a9dc: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x20a9dcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a9e0: 0xc07fc1c  jal         func_1FF070
    ctx->pc = 0x20A9E0u;
    SET_GPR_U32(ctx, 31, 0x20A9E8u);
    ctx->pc = 0x20A9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A9E0u;
            // 0x20a9e4: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF070u;
    if (runtime->hasFunction(0x1FF070u)) {
        auto targetFn = runtime->lookupFunction(0x1FF070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A9E8u; }
        if (ctx->pc != 0x20A9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCreateItemFlag__15CInventUserDataFii_0x1ff070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A9E8u; }
        if (ctx->pc != 0x20A9E8u) { return; }
    }
    ctx->pc = 0x20A9E8u;
label_20a9e8:
    // 0x20a9e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20a9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20a9ec: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x20a9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x20a9f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x20A9F0u;
    {
        const bool branch_taken_0x20a9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A9F0u;
            // 0x20a9f4: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a9f0) {
            ctx->pc = 0x20A9D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20a9d0;
        }
    }
    ctx->pc = 0x20A9F8u;
label_20a9f8:
    // 0x20a9f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20a9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a9fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20a9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20aa00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20aa04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20aa04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20aa08: 0x3e00008  jr          $ra
    ctx->pc = 0x20AA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20AA08u;
            // 0x20aa0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20AA10u;
}
