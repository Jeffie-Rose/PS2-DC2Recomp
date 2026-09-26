#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ChangeManMessage__8CAquaMesFP9CAquaFish
// Address: 0x211790 - 0x211850
void ChangeManMessage__8CAquaMesFP9CAquaFish_0x211790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChangeManMessage__8CAquaMesFP9CAquaFish_0x211790");
#endif

    switch (ctx->pc) {
        case 0x2117bcu: goto label_2117bc;
        case 0x2117d8u: goto label_2117d8;
        case 0x2117fcu: goto label_2117fc;
        case 0x211818u: goto label_211818;
        case 0x21182cu: goto label_21182c;
        case 0x211838u: goto label_211838;
        default: break;
    }

    ctx->pc = 0x211790u;

    // 0x211790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x211790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x211794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x211794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x211798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x211798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21179c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2117a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2117a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2117a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2117a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2117a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2117a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2117ac: 0x8cb00938  lw          $s0, 0x938($a1)
    ctx->pc = 0x2117acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2360)));
    // 0x2117b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2117b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2117b4: 0xc065dc0  jal         func_197700
    ctx->pc = 0x2117B4u;
    SET_GPR_U32(ctx, 31, 0x2117BCu);
    ctx->pc = 0x2117B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2117B4u;
            // 0x2117b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117BCu; }
        if (ctx->pc != 0x2117BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117BCu; }
        if (ctx->pc != 0x2117BCu) { return; }
    }
    ctx->pc = 0x2117BCu;
label_2117bc:
    // 0x2117bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2117BCu;
    {
        const bool branch_taken_0x2117bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2117bc) {
            ctx->pc = 0x2117D8u;
            goto label_2117d8;
        }
    }
    ctx->pc = 0x2117C4u;
    // 0x2117c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2117C4u;
    {
        const bool branch_taken_0x2117c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2117C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2117C4u;
            // 0x2117c8: 0x8e430054  lw          $v1, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2117c4) {
            ctx->pc = 0x2117D8u;
            goto label_2117d8;
        }
    }
    ctx->pc = 0x2117CCu;
    // 0x2117cc: 0x24641801  addiu       $a0, $v1, 0x1801
    ctx->pc = 0x2117ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6145));
    // 0x2117d0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2117D0u;
    SET_GPR_U32(ctx, 31, 0x2117D8u);
    ctx->pc = 0x2117D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2117D0u;
            // 0x2117d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117D8u; }
        if (ctx->pc != 0x2117D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117D8u; }
        if (ctx->pc != 0x2117D8u) { return; }
    }
    ctx->pc = 0x2117D8u;
label_2117d8:
    // 0x2117d8: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x2117d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2117dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2117dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2117e0: 0xac4317e4  sw          $v1, 0x17E4($v0)
    ctx->pc = 0x2117e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6116), GPR_U32(ctx, 3));
    // 0x2117e4: 0x82020025  lb          $v0, 0x25($s0)
    ctx->pc = 0x2117e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x2117e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2117E8u;
    {
        const bool branch_taken_0x2117e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2117e8) {
            ctx->pc = 0x2117FCu;
            goto label_2117fc;
        }
    }
    ctx->pc = 0x2117F0u;
    // 0x2117f0: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x2117f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2117f4: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x2117F4u;
    SET_GPR_U32(ctx, 31, 0x2117FCu);
    ctx->pc = 0x2117F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2117F4u;
            // 0x2117f8: 0x24050138  addiu       $a1, $zero, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117FCu; }
        if (ctx->pc != 0x2117FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2117FCu; }
        if (ctx->pc != 0x2117FCu) { return; }
    }
    ctx->pc = 0x2117FCu;
label_2117fc:
    // 0x2117fc: 0x82030025  lb          $v1, 0x25($s0)
    ctx->pc = 0x2117fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x211800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x211800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x211804: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x211804u;
    {
        const bool branch_taken_0x211804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x211808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211804u;
            // 0x211808: 0x2402012c  addiu       $v0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211804) {
            ctx->pc = 0x21181Cu;
            goto label_21181c;
        }
    }
    ctx->pc = 0x21180Cu;
    // 0x21180c: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x21180cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x211810: 0xc0562c8  jal         func_158B20
    ctx->pc = 0x211810u;
    SET_GPR_U32(ctx, 31, 0x211818u);
    ctx->pc = 0x211814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211810u;
            // 0x211814: 0x24050137  addiu       $a1, $zero, 0x137 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B20u;
    if (runtime->hasFunction(0x158B20u)) {
        auto targetFn = runtime->lookupFunction(0x158B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211818u; }
        if (ctx->pc != 0x211818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFi_0x158b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211818u; }
        if (ctx->pc != 0x211818u) { return; }
    }
    ctx->pc = 0x211818u;
label_211818:
    // 0x211818: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x211818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_21181c:
    // 0x21181c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21181cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211820: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x211820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x211824: 0xc083594  jal         func_20D650
    ctx->pc = 0x211824u;
    SET_GPR_U32(ctx, 31, 0x21182Cu);
    ctx->pc = 0x211828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211824u;
            // 0x211828: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D650u;
    if (runtime->hasFunction(0x20D650u)) {
        auto targetFn = runtime->lookupFunction(0x20D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21182Cu; }
        if (ctx->pc != 0x21182Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosition2D__9CAquaFishFPi_0x20d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21182Cu; }
        if (ctx->pc != 0x21182Cu) { return; }
    }
    ctx->pc = 0x21182Cu;
label_21182c:
    // 0x21182c: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x21182cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x211830: 0xc083e8c  jal         func_20FA30
    ctx->pc = 0x211830u;
    SET_GPR_U32(ctx, 31, 0x211838u);
    ctx->pc = 0x211834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211830u;
            // 0x211834: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FA30u;
    if (runtime->hasFunction(0x20FA30u)) {
        auto targetFn = runtime->lookupFunction(0x20FA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211838u; }
        if (ctx->pc != 0x211838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AquaMesDispAdjustPos__FP6ClsMesPi_0x20fa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211838u; }
        if (ctx->pc != 0x211838u) { return; }
    }
    ctx->pc = 0x211838u;
label_211838:
    // 0x211838: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x211838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21183c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21183cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211840: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x211840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211844: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x211844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211848: 0x3e00008  jr          $ra
    ctx->pc = 0x211848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21184Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211848u;
            // 0x21184c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x211850u;
}
