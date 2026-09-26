#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _PLACE_PARTS_NAME_STRCMP__FP12RS_STACKDATAi
// Address: 0x27ce30 - 0x27cee0
void ps2__PLACE_PARTS_NAME_STRCMP__FP12RS_STACKDATAi_0x27ce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__PLACE_PARTS_NAME_STRCMP__FP12RS_STACKDATAi_0x27ce30");
#endif

    switch (ctx->pc) {
        case 0x27ce5cu: goto label_27ce5c;
        case 0x27ce6cu: goto label_27ce6c;
        case 0x27ce7cu: goto label_27ce7c;
        case 0x27ce90u: goto label_27ce90;
        case 0x27cea4u: goto label_27cea4;
        case 0x27ceb0u: goto label_27ceb0;
        case 0x27cec4u: goto label_27cec4;
        default: break;
    }

    ctx->pc = 0x27ce30u;

    // 0x27ce30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27ce30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27ce34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27ce38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27ce38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27ce3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27ce3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27ce40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27ce40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27ce44: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27CE44u;
    {
        const bool branch_taken_0x27ce44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE44u;
            // 0x27ce48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce44) {
            ctx->pc = 0x27CE54u;
            goto label_27ce54;
        }
    }
    ctx->pc = 0x27CE4Cu;
    // 0x27ce4c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x27CE4Cu;
    {
        const bool branch_taken_0x27ce4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE4Cu;
            // 0x27ce50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce4c) {
            ctx->pc = 0x27CEC8u;
            goto label_27cec8;
        }
    }
    ctx->pc = 0x27CE54u;
label_27ce54:
    // 0x27ce54: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27CE54u;
    SET_GPR_U32(ctx, 31, 0x27CE5Cu);
    ctx->pc = 0x27CE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE54u;
            // 0x27ce58: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE5Cu; }
        if (ctx->pc != 0x27CE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE5Cu; }
        if (ctx->pc != 0x27CE5Cu) { return; }
    }
    ctx->pc = 0x27CE5Cu;
label_27ce5c:
    // 0x27ce5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27ce5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27ce60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce64: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27CE64u;
    SET_GPR_U32(ctx, 31, 0x27CE6Cu);
    ctx->pc = 0x27CE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE64u;
            // 0x27ce68: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE6Cu; }
        if (ctx->pc != 0x27CE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE6Cu; }
        if (ctx->pc != 0x27CE6Cu) { return; }
    }
    ctx->pc = 0x27CE6Cu;
label_27ce6c:
    // 0x27ce6c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27ce70: 0x8c852e5c  lw          $a1, 0x2E5C($a0)
    ctx->pc = 0x27ce70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
    // 0x27ce74: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x27CE74u;
    SET_GPR_U32(ctx, 31, 0x27CE7Cu);
    ctx->pc = 0x27CE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE74u;
            // 0x27ce78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE7Cu; }
        if (ctx->pc != 0x27CE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE7Cu; }
        if (ctx->pc != 0x27CE7Cu) { return; }
    }
    ctx->pc = 0x27CE7Cu;
label_27ce7c:
    // 0x27ce7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27ce7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce80: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x27CE80u;
    {
        const bool branch_taken_0x27ce80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE80u;
            // 0x27ce84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce80) {
            ctx->pc = 0x27CEB8u;
            goto label_27ceb8;
        }
    }
    ctx->pc = 0x27CE88u;
    // 0x27ce88: 0xc057530  jal         func_15D4C0
    ctx->pc = 0x27CE88u;
    SET_GPR_U32(ctx, 31, 0x27CE90u);
    ctx->pc = 0x15D4C0u;
    if (runtime->hasFunction(0x15D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE90u; }
        if (ctx->pc != 0x27CE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFi_0x15d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE90u; }
        if (ctx->pc != 0x27CE90u) { return; }
    }
    ctx->pc = 0x27CE90u;
label_27ce90:
    // 0x27ce90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27CE90u;
    {
        const bool branch_taken_0x27ce90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE90u;
            // 0x27ce94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce90) {
            ctx->pc = 0x27CEBCu;
            goto label_27cebc;
        }
    }
    ctx->pc = 0x27CE98u;
    // 0x27ce98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27ce98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce9c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x27CE9Cu;
    SET_GPR_U32(ctx, 31, 0x27CEA4u);
    ctx->pc = 0x27CEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE9Cu;
            // 0x27cea0: 0x24440070  addiu       $a0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CEA4u; }
        if (ctx->pc != 0x27CEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CEA4u; }
        if (ctx->pc != 0x27CEA4u) { return; }
    }
    ctx->pc = 0x27CEA4u;
label_27cea4:
    // 0x27cea4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27cea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cea8: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27CEA8u;
    SET_GPR_U32(ctx, 31, 0x27CEB0u);
    ctx->pc = 0x27CEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CEA8u;
            // 0x27ceac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CEB0u; }
        if (ctx->pc != 0x27CEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CEB0u; }
        if (ctx->pc != 0x27CEB0u) { return; }
    }
    ctx->pc = 0x27CEB0u;
label_27ceb0:
    // 0x27ceb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27CEB0u;
    {
        const bool branch_taken_0x27ceb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CEB0u;
            // 0x27ceb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ceb0) {
            ctx->pc = 0x27CEC8u;
            goto label_27cec8;
        }
    }
    ctx->pc = 0x27CEB8u;
label_27ceb8:
    // 0x27ceb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27ceb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27cebc:
    // 0x27cebc: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x27CEBCu;
    SET_GPR_U32(ctx, 31, 0x27CEC4u);
    ctx->pc = 0x27CEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CEBCu;
            // 0x27cec0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CEC4u; }
        if (ctx->pc != 0x27CEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CEC4u; }
        if (ctx->pc != 0x27CEC4u) { return; }
    }
    ctx->pc = 0x27CEC4u;
label_27cec4:
    // 0x27cec4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27cec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cec8:
    // 0x27cec8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27cec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27cecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27ceccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ced0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ced0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ced4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ced4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ced8: 0x3e00008  jr          $ra
    ctx->pc = 0x27CED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CED8u;
            // 0x27cedc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27CEE0u;
}
