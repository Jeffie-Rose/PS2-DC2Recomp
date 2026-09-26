#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_BIT_CTRL__FP12RS_STACKDATAi
// Address: 0x279e20 - 0x279e8c
void ps2__GET_BIT_CTRL__FP12RS_STACKDATAi_0x279e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_BIT_CTRL__FP12RS_STACKDATAi_0x279e20");
#endif

    switch (ctx->pc) {
        case 0x279e38u: goto label_279e38;
        case 0x279e54u: goto label_279e54;
        case 0x279e60u: goto label_279e60;
        case 0x279e74u: goto label_279e74;
        default: break;
    }

    ctx->pc = 0x279e20u;

    // 0x279e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x279e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x279e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x279e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x279e2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x279e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e30: 0xc064220  jal         func_190880
    ctx->pc = 0x279E30u;
    SET_GPR_U32(ctx, 31, 0x279E38u);
    ctx->pc = 0x279E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279E30u;
            // 0x279e34: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E38u; }
        if (ctx->pc != 0x279E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E38u; }
        if (ctx->pc != 0x279E38u) { return; }
    }
    ctx->pc = 0x279E38u;
label_279e38:
    // 0x279e38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279E38u;
    {
        const bool branch_taken_0x279e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279E38u;
            // 0x279e3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e38) {
            ctx->pc = 0x279E48u;
            goto label_279e48;
        }
    }
    ctx->pc = 0x279E40u;
    // 0x279e40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x279E40u;
    {
        const bool branch_taken_0x279e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279E40u;
            // 0x279e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e40) {
            ctx->pc = 0x279E78u;
            goto label_279e78;
        }
    }
    ctx->pc = 0x279E48u;
label_279e48:
    // 0x279e48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e4c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x279E4Cu;
    SET_GPR_U32(ctx, 31, 0x279E54u);
    ctx->pc = 0x279E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279E4Cu;
            // 0x279e50: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E54u; }
        if (ctx->pc != 0x279E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E54u; }
        if (ctx->pc != 0x279E54u) { return; }
    }
    ctx->pc = 0x279E54u;
label_279e54:
    // 0x279e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e58: 0xc0bda00  jal         func_2F6800
    ctx->pc = 0x279E58u;
    SET_GPR_U32(ctx, 31, 0x279E60u);
    ctx->pc = 0x279E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279E58u;
            // 0x279e5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6800u;
    if (runtime->hasFunction(0x2F6800u)) {
        auto targetFn = runtime->lookupFunction(0x2F6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E60u; }
        if (ctx->pc != 0x279E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitCtrl__9CSaveDataFv_0x2f6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E60u; }
        if (ctx->pc != 0x279E60u) { return; }
    }
    ctx->pc = 0x279E60u;
label_279e60:
    // 0x279e60: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x279e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x279e64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x279e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x279e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e6c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x279E6Cu;
    SET_GPR_U32(ctx, 31, 0x279E74u);
    ctx->pc = 0x279E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279E6Cu;
            // 0x279e70: 0x2280a  movz        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E74u; }
        if (ctx->pc != 0x279E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279E74u; }
        if (ctx->pc != 0x279E74u) { return; }
    }
    ctx->pc = 0x279E74u;
label_279e74:
    // 0x279e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_279e78:
    // 0x279e78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x279e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279e7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x279e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279e84: 0x3e00008  jr          $ra
    ctx->pc = 0x279E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279E84u;
            // 0x279e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x279E8Cu;
}
