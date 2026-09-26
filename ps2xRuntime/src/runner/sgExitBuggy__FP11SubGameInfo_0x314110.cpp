#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sgExitBuggy__FP11SubGameInfo
// Address: 0x314110 - 0x3141e4
void sgExitBuggy__FP11SubGameInfo_0x314110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sgExitBuggy__FP11SubGameInfo_0x314110");
#endif

    switch (ctx->pc) {
        case 0x314138u: goto label_314138;
        case 0x314148u: goto label_314148;
        case 0x314164u: goto label_314164;
        case 0x314174u: goto label_314174;
        case 0x31418cu: goto label_31418c;
        case 0x314198u: goto label_314198;
        case 0x3141b8u: goto label_3141b8;
        case 0x3141c4u: goto label_3141c4;
        default: break;
    }

    ctx->pc = 0x314110u;

    // 0x314110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x314110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x314114: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x314114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x314118: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x314118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31411c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31411cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314120: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x314120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x314124: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x314124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
    // 0x314128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31412c: 0x2484f9a0  addiu       $a0, $a0, -0x660
    ctx->pc = 0x31412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965664));
    // 0x314130: 0xc0c121c  jal         func_304870
    ctx->pc = 0x314130u;
    SET_GPR_U32(ctx, 31, 0x314138u);
    ctx->pc = 0x314134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314130u;
            // 0x314134: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304870u;
    if (runtime->hasFunction(0x304870u)) {
        auto targetFn = runtime->lookupFunction(0x304870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314138u; }
        if (ctx->pc != 0x314138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Close__12sgCPlayVoiceFv_0x304870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314138u; }
        if (ctx->pc != 0x314138u) { return; }
    }
    ctx->pc = 0x314138u;
label_314138:
    // 0x314138: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x314138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x31413c: 0x8e052e50  lw          $a1, 0x2E50($s0)
    ctx->pc = 0x31413cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11856)));
    // 0x314140: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x314140u;
    SET_GPR_U32(ctx, 31, 0x314148u);
    ctx->pc = 0x314144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314140u;
            // 0x314144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314148u; }
        if (ctx->pc != 0x314148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314148u; }
        if (ctx->pc != 0x314148u) { return; }
    }
    ctx->pc = 0x314148u;
label_314148:
    // 0x314148: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x314148u;
    {
        const bool branch_taken_0x314148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31414Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314148u;
            // 0x31414c: 0x3c110038  lui         $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314148) {
            ctx->pc = 0x314158u;
            goto label_314158;
        }
    }
    ctx->pc = 0x314150u;
    // 0x314150: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x314150u;
    {
        const bool branch_taken_0x314150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x314150u;
            // 0x314154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314150) {
            ctx->pc = 0x3141C8u;
            goto label_3141c8;
        }
    }
    ctx->pc = 0x314158u;
label_314158:
    // 0x314158: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x314158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31415c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31415Cu;
    {
        const bool branch_taken_0x31415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31415Cu;
            // 0x314160: 0x26311ef0  addiu       $s1, $s1, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31415c) {
            ctx->pc = 0x314178u;
            goto label_314178;
        }
    }
    ctx->pc = 0x314164u;
label_314164:
    // 0x314164: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x314164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x314168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31416c: 0xc04b950  jal         func_12E540
    ctx->pc = 0x31416Cu;
    SET_GPR_U32(ctx, 31, 0x314174u);
    ctx->pc = 0x314170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31416Cu;
            // 0x314170: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314174u; }
        if (ctx->pc != 0x314174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314174u; }
        if (ctx->pc != 0x314174u) { return; }
    }
    ctx->pc = 0x314174u;
label_314174:
    // 0x314174: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x314174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_314178:
    // 0x314178: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x314178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x31417c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x31417cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x314180: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x314180u;
    {
        const bool branch_taken_0x314180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314180) {
            ctx->pc = 0x314164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_314164;
        }
    }
    ctx->pc = 0x314188u;
    // 0x314188: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x314188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31418c:
    // 0x31418c: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x31418cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x314190: 0xc0a14ec  jal         func_2853B0
    ctx->pc = 0x314190u;
    SET_GPR_U32(ctx, 31, 0x314198u);
    ctx->pc = 0x314194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x314190u;
            // 0x314194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314198u; }
        if (ctx->pc != 0x314198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x314198u; }
        if (ctx->pc != 0x314198u) { return; }
    }
    ctx->pc = 0x314198u;
label_314198:
    // 0x314198: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x314198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31419c: 0x2a220028  slti        $v0, $s1, 0x28
    ctx->pc = 0x31419cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x3141a0: 0x0  nop
    ctx->pc = 0x3141a0u;
    // NOP
    // 0x3141a4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3141A4u;
    {
        const bool branch_taken_0x3141a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3141a4) {
            ctx->pc = 0x31418Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31418c;
        }
    }
    ctx->pc = 0x3141ACu;
    // 0x3141ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3141acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3141b0: 0xc0a1144  jal         func_284510
    ctx->pc = 0x3141B0u;
    SET_GPR_U32(ctx, 31, 0x3141B8u);
    ctx->pc = 0x3141B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3141B0u;
            // 0x3141b4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284510u;
    if (runtime->hasFunction(0x284510u)) {
        auto targetFn = runtime->lookupFunction(0x284510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3141B8u; }
        if (ctx->pc != 0x3141B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect__6CSceneFi_0x284510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3141B8u; }
        if (ctx->pc != 0x3141B8u) { return; }
    }
    ctx->pc = 0x3141B8u;
label_3141b8:
    // 0x3141b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3141b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3141bc: 0xc0a98a0  jal         func_2A6280
    ctx->pc = 0x3141BCu;
    SET_GPR_U32(ctx, 31, 0x3141C4u);
    ctx->pc = 0x3141C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3141BCu;
            // 0x3141c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3141C4u; }
        if (ctx->pc != 0x3141C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3141C4u; }
        if (ctx->pc != 0x3141C4u) { return; }
    }
    ctx->pc = 0x3141C4u;
label_3141c4:
    // 0x3141c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3141c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3141c8:
    // 0x3141c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3141c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3141cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3141ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3141d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3141d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3141d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3141d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3141d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3141d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3141dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3141DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3141E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3141DCu;
            // 0x3141e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3141E4u;
}
