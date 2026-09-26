#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_POS__FP12RS_STACKDATAi
// Address: 0x26cb50 - 0x26cba8
void ps2__SET_MES_POS__FP12RS_STACKDATAi_0x26cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_POS__FP12RS_STACKDATAi_0x26cb50");
#endif

    switch (ctx->pc) {
        case 0x26cb68u: goto label_26cb68;
        case 0x26cb70u: goto label_26cb70;
        case 0x26cb8cu: goto label_26cb8c;
        default: break;
    }

    ctx->pc = 0x26cb50u;

    // 0x26cb50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26cb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26cb54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26cb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26cb58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26cb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26cb5c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26cb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26cb60: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CB60u;
    SET_GPR_U32(ctx, 31, 0x26CB68u);
    ctx->pc = 0x26CB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB60u;
            // 0x26cb64: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB68u; }
        if (ctx->pc != 0x26CB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB68u; }
        if (ctx->pc != 0x26CB68u) { return; }
    }
    ctx->pc = 0x26CB68u;
label_26cb68:
    // 0x26cb68: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26CB68u;
    SET_GPR_U32(ctx, 31, 0x26CB70u);
    ctx->pc = 0x26CB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB68u;
            // 0x26cb6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB70u; }
        if (ctx->pc != 0x26CB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB70u; }
        if (ctx->pc != 0x26CB70u) { return; }
    }
    ctx->pc = 0x26CB70u;
label_26cb70:
    // 0x26cb70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cb74: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CB74u;
    {
        const bool branch_taken_0x26cb74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB74u;
            // 0x26cb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb74) {
            ctx->pc = 0x26CB84u;
            goto label_26cb84;
        }
    }
    ctx->pc = 0x26CB7Cu;
    // 0x26cb7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26CB7Cu;
    {
        const bool branch_taken_0x26cb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB7Cu;
            // 0x26cb80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb7c) {
            ctx->pc = 0x26CB94u;
            goto label_26cb94;
        }
    }
    ctx->pc = 0x26CB84u;
label_26cb84:
    // 0x26cb84: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CB84u;
    SET_GPR_U32(ctx, 31, 0x26CB8Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB8Cu; }
        if (ctx->pc != 0x26CB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CB8Cu; }
        if (ctx->pc != 0x26CB8Cu) { return; }
    }
    ctx->pc = 0x26CB8Cu;
label_26cb8c:
    // 0x26cb8c: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x26cb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x26cb90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cb94:
    // 0x26cb94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26cb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26cb98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26cb98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26cb9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26cb9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cba0: 0x3e00008  jr          $ra
    ctx->pc = 0x26CBA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CBA0u;
            // 0x26cba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CBA8u;
}
