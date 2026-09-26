#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_QUEST_ETC__FP12RS_STACKDATAi
// Address: 0x26acf0 - 0x26ad80
void ps2__SET_QUEST_ETC__FP12RS_STACKDATAi_0x26acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_QUEST_ETC__FP12RS_STACKDATAi_0x26acf0");
#endif

    switch (ctx->pc) {
        case 0x26ad08u: goto label_26ad08;
        case 0x26ad18u: goto label_26ad18;
        case 0x26ad24u: goto label_26ad24;
        case 0x26ad48u: goto label_26ad48;
        case 0x26ad58u: goto label_26ad58;
        default: break;
    }

    ctx->pc = 0x26acf0u;

    // 0x26acf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26acf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26acf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26acf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26acf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26acf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26acfc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26acfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26ad00: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AD00u;
    SET_GPR_U32(ctx, 31, 0x26AD08u);
    ctx->pc = 0x26AD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD00u;
            // 0x26ad04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD08u; }
        if (ctx->pc != 0x26AD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD08u; }
        if (ctx->pc != 0x26AD08u) { return; }
    }
    ctx->pc = 0x26AD08u;
label_26ad08:
    // 0x26ad08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ad0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad10: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AD10u;
    SET_GPR_U32(ctx, 31, 0x26AD18u);
    ctx->pc = 0x26AD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD10u;
            // 0x26ad14: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD18u; }
        if (ctx->pc != 0x26AD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD18u; }
        if (ctx->pc != 0x26AD18u) { return; }
    }
    ctx->pc = 0x26AD18u;
label_26ad18:
    // 0x26ad18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ad18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ad1c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AD1Cu;
    SET_GPR_U32(ctx, 31, 0x26AD24u);
    ctx->pc = 0x26AD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD1Cu;
            // 0x26ad20: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD24u; }
        if (ctx->pc != 0x26AD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD24u; }
        if (ctx->pc != 0x26AD24u) { return; }
    }
    ctx->pc = 0x26AD24u;
label_26ad24:
    // 0x26ad24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ad28: 0x12030009  beq         $s0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26AD28u;
    {
        const bool branch_taken_0x26ad28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x26AD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD28u;
            // 0x26ad2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad28) {
            ctx->pc = 0x26AD50u;
            goto label_26ad50;
        }
    }
    ctx->pc = 0x26AD30u;
    // 0x26ad30: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AD30u;
    {
        const bool branch_taken_0x26ad30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD30u;
            // 0x26ad34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad30) {
            ctx->pc = 0x26AD40u;
            goto label_26ad40;
        }
    }
    ctx->pc = 0x26AD38u;
    // 0x26ad38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26AD38u;
    {
        const bool branch_taken_0x26ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD38u;
            // 0x26ad3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad38) {
            ctx->pc = 0x26AD60u;
            goto label_26ad60;
        }
    }
    ctx->pc = 0x26AD40u;
label_26ad40:
    // 0x26ad40: 0xc0c6ab8  jal         func_31AAE0
    ctx->pc = 0x26AD40u;
    SET_GPR_U32(ctx, 31, 0x26AD48u);
    ctx->pc = 0x26AD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD40u;
            // 0x26ad44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31AAE0u;
    if (runtime->hasFunction(0x31AAE0u)) {
        auto targetFn = runtime->lookupFunction(0x31AAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD48u; }
        if (ctx->pc != 0x26AD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        QuestRequestSetFlag__Fii_0x31aae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD48u; }
        if (ctx->pc != 0x26AD48u) { return; }
    }
    ctx->pc = 0x26AD48u;
label_26ad48:
    // 0x26ad48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26AD48u;
    {
        const bool branch_taken_0x26ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD48u;
            // 0x26ad4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad48) {
            ctx->pc = 0x26AD6Cu;
            goto label_26ad6c;
        }
    }
    ctx->pc = 0x26AD50u;
label_26ad50:
    // 0x26ad50: 0xc0c6acc  jal         func_31AB30
    ctx->pc = 0x26AD50u;
    SET_GPR_U32(ctx, 31, 0x26AD58u);
    ctx->pc = 0x26AD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD50u;
            // 0x26ad54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31AB30u;
    if (runtime->hasFunction(0x31AB30u)) {
        auto targetFn = runtime->lookupFunction(0x31AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD58u; }
        if (ctx->pc != 0x26AD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        QuestRequestClear__Fii_0x31ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AD58u; }
        if (ctx->pc != 0x26AD58u) { return; }
    }
    ctx->pc = 0x26AD58u;
label_26ad58:
    // 0x26ad58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26AD58u;
    {
        const bool branch_taken_0x26ad58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ad58) {
            ctx->pc = 0x26AD68u;
            goto label_26ad68;
        }
    }
    ctx->pc = 0x26AD60u;
label_26ad60:
    // 0x26ad60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26AD60u;
    {
        const bool branch_taken_0x26ad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD60u;
            // 0x26ad64: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ad60) {
            ctx->pc = 0x26AD70u;
            goto label_26ad70;
        }
    }
    ctx->pc = 0x26AD68u;
label_26ad68:
    // 0x26ad68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ad6c:
    // 0x26ad6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26ad6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26ad70:
    // 0x26ad70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ad70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ad74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ad74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ad78: 0x3e00008  jr          $ra
    ctx->pc = 0x26AD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AD78u;
            // 0x26ad7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AD80u;
}
