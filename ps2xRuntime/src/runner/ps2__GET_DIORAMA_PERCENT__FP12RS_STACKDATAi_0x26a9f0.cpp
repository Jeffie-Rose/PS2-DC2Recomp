#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_DIORAMA_PERCENT__FP12RS_STACKDATAi
// Address: 0x26a9f0 - 0x26aa64
void ps2__GET_DIORAMA_PERCENT__FP12RS_STACKDATAi_0x26a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_DIORAMA_PERCENT__FP12RS_STACKDATAi_0x26a9f0");
#endif

    switch (ctx->pc) {
        case 0x26aa08u: goto label_26aa08;
        case 0x26aa10u: goto label_26aa10;
        case 0x26aa28u: goto label_26aa28;
        case 0x26aa40u: goto label_26aa40;
        case 0x26aa4cu: goto label_26aa4c;
        default: break;
    }

    ctx->pc = 0x26a9f0u;

    // 0x26a9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26a9f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26a9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26a9f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a9fc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26a9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26aa00: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26AA00u;
    SET_GPR_U32(ctx, 31, 0x26AA08u);
    ctx->pc = 0x26AA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA00u;
            // 0x26aa04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA08u; }
        if (ctx->pc != 0x26AA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA08u; }
        if (ctx->pc != 0x26AA08u) { return; }
    }
    ctx->pc = 0x26AA08u;
label_26aa08:
    // 0x26aa08: 0xc064220  jal         func_190880
    ctx->pc = 0x26AA08u;
    SET_GPR_U32(ctx, 31, 0x26AA10u);
    ctx->pc = 0x26AA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA08u;
            // 0x26aa0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA10u; }
        if (ctx->pc != 0x26AA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA10u; }
        if (ctx->pc != 0x26AA10u) { return; }
    }
    ctx->pc = 0x26AA10u;
label_26aa10:
    // 0x26aa10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AA10u;
    {
        const bool branch_taken_0x26aa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA10u;
            // 0x26aa14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa10) {
            ctx->pc = 0x26AA20u;
            goto label_26aa20;
        }
    }
    ctx->pc = 0x26AA18u;
    // 0x26aa18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26AA18u;
    {
        const bool branch_taken_0x26aa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA18u;
            // 0x26aa1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa18) {
            ctx->pc = 0x26AA50u;
            goto label_26aa50;
        }
    }
    ctx->pc = 0x26AA20u;
label_26aa20:
    // 0x26aa20: 0xc0bd9a4  jal         func_2F6690
    ctx->pc = 0x26AA20u;
    SET_GPR_U32(ctx, 31, 0x26AA28u);
    ctx->pc = 0x26AA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA20u;
            // 0x26aa24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6690u;
    if (runtime->hasFunction(0x2F6690u)) {
        auto targetFn = runtime->lookupFunction(0x2F6690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA28u; }
        if (ctx->pc != 0x26AA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEditData__9CSaveDataFi_0x2f6690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA28u; }
        if (ctx->pc != 0x26AA28u) { return; }
    }
    ctx->pc = 0x26AA28u;
label_26aa28:
    // 0x26aa28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26AA28u;
    {
        const bool branch_taken_0x26aa28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26AA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA28u;
            // 0x26aa2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa28) {
            ctx->pc = 0x26AA38u;
            goto label_26aa38;
        }
    }
    ctx->pc = 0x26AA30u;
    // 0x26aa30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26AA30u;
    {
        const bool branch_taken_0x26aa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26AA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA30u;
            // 0x26aa34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26aa30) {
            ctx->pc = 0x26AA50u;
            goto label_26aa50;
        }
    }
    ctx->pc = 0x26AA38u;
label_26aa38:
    // 0x26aa38: 0xc0aa840  jal         func_2AA100
    ctx->pc = 0x26AA38u;
    SET_GPR_U32(ctx, 31, 0x26AA40u);
    ctx->pc = 0x26AA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA38u;
            // 0x26aa3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA100u;
    if (runtime->hasFunction(0x2AA100u)) {
        auto targetFn = runtime->lookupFunction(0x2AA100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA40u; }
        if (ctx->pc != 0x26AA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAnalyzePercent__9CEditDataFi_0x2aa100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA40u; }
        if (ctx->pc != 0x26AA40u) { return; }
    }
    ctx->pc = 0x26AA40u;
label_26aa40:
    // 0x26aa40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26aa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26aa44: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26AA44u;
    SET_GPR_U32(ctx, 31, 0x26AA4Cu);
    ctx->pc = 0x26AA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA44u;
            // 0x26aa48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA4Cu; }
        if (ctx->pc != 0x26AA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26AA4Cu; }
        if (ctx->pc != 0x26AA4Cu) { return; }
    }
    ctx->pc = 0x26AA4Cu;
label_26aa4c:
    // 0x26aa4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26aa50:
    // 0x26aa50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26aa50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26aa54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26aa54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26aa58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26aa58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26aa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x26AA5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26AA5Cu;
            // 0x26aa60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26AA64u;
}
