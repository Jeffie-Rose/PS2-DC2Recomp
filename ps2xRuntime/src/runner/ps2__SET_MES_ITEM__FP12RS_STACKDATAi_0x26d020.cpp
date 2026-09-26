#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_ITEM__FP12RS_STACKDATAi
// Address: 0x26d020 - 0x26d0a8
void ps2__SET_MES_ITEM__FP12RS_STACKDATAi_0x26d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_ITEM__FP12RS_STACKDATAi_0x26d020");
#endif

    switch (ctx->pc) {
        case 0x26d038u: goto label_26d038;
        case 0x26d040u: goto label_26d040;
        case 0x26d05cu: goto label_26d05c;
        case 0x26d068u: goto label_26d068;
        case 0x26d074u: goto label_26d074;
        default: break;
    }

    ctx->pc = 0x26d020u;

    // 0x26d020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26d024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26d024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26d028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26d02c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26d02cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26d030: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D030u;
    SET_GPR_U32(ctx, 31, 0x26D038u);
    ctx->pc = 0x26D034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D030u;
            // 0x26d034: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D038u; }
        if (ctx->pc != 0x26D038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D038u; }
        if (ctx->pc != 0x26D038u) { return; }
    }
    ctx->pc = 0x26D038u;
label_26d038:
    // 0x26d038: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26D038u;
    SET_GPR_U32(ctx, 31, 0x26D040u);
    ctx->pc = 0x26D03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D038u;
            // 0x26d03c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D040u; }
        if (ctx->pc != 0x26D040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D040u; }
        if (ctx->pc != 0x26D040u) { return; }
    }
    ctx->pc = 0x26D040u;
label_26d040:
    // 0x26d040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d044: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D044u;
    {
        const bool branch_taken_0x26d044 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D044u;
            // 0x26d048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d044) {
            ctx->pc = 0x26D054u;
            goto label_26d054;
        }
    }
    ctx->pc = 0x26D04Cu;
    // 0x26d04c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26D04Cu;
    {
        const bool branch_taken_0x26d04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D04Cu;
            // 0x26d050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d04c) {
            ctx->pc = 0x26D094u;
            goto label_26d094;
        }
    }
    ctx->pc = 0x26D054u;
label_26d054:
    // 0x26d054: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D054u;
    SET_GPR_U32(ctx, 31, 0x26D05Cu);
    ctx->pc = 0x26D058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D054u;
            // 0x26d058: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D05Cu; }
        if (ctx->pc != 0x26D05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D05Cu; }
        if (ctx->pc != 0x26D05Cu) { return; }
    }
    ctx->pc = 0x26D05Cu;
label_26d05c:
    // 0x26d05c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d060: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26D060u;
    SET_GPR_U32(ctx, 31, 0x26D068u);
    ctx->pc = 0x26D064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D060u;
            // 0x26d064: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D068u; }
        if (ctx->pc != 0x26D068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D068u; }
        if (ctx->pc != 0x26D068u) { return; }
    }
    ctx->pc = 0x26D068u;
label_26d068:
    // 0x26d068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26d068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d06c: 0xc0657f8  jal         func_195FE0
    ctx->pc = 0x26D06Cu;
    SET_GPR_U32(ctx, 31, 0x26D074u);
    ctx->pc = 0x26D070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26D06Cu;
            // 0x26d070: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195FE0u;
    if (runtime->hasFunction(0x195FE0u)) {
        auto targetFn = runtime->lookupFunction(0x195FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D074u; }
        if (ctx->pc != 0x26D074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessageNo__Fii_0x195fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26D074u; }
        if (ctx->pc != 0x26D074u) { return; }
    }
    ctx->pc = 0x26D074u;
label_26d074:
    // 0x26d074: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x26d074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x26d078: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26D078u;
    {
        const bool branch_taken_0x26d078 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x26D07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D078u;
            // 0x26d07c: 0x28610010  slti        $at, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d078) {
            ctx->pc = 0x26D090u;
            goto label_26d090;
        }
    }
    ctx->pc = 0x26D080u;
    // 0x26d080: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D080u;
    {
        const bool branch_taken_0x26d080 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D080u;
            // 0x26d084: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d080) {
            ctx->pc = 0x26D090u;
            goto label_26d090;
        }
    }
    ctx->pc = 0x26D088u;
    // 0x26d088: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x26d088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x26d08c: 0xac621a00  sw          $v0, 0x1A00($v1)
    ctx->pc = 0x26d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6656), GPR_U32(ctx, 2));
label_26d090:
    // 0x26d090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d094:
    // 0x26d094: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26d094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26d098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26d098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26d09c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26d09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26d0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x26D0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D0A0u;
            // 0x26d0a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26D0A8u;
}
