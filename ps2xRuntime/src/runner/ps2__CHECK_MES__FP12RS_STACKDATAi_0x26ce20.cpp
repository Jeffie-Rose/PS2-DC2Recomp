#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_MES__FP12RS_STACKDATAi
// Address: 0x26ce20 - 0x26ce78
void ps2__CHECK_MES__FP12RS_STACKDATAi_0x26ce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_MES__FP12RS_STACKDATAi_0x26ce20");
#endif

    switch (ctx->pc) {
        case 0x26ce34u: goto label_26ce34;
        case 0x26ce3cu: goto label_26ce3c;
        case 0x26ce54u: goto label_26ce54;
        case 0x26ce64u: goto label_26ce64;
        default: break;
    }

    ctx->pc = 0x26ce20u;

    // 0x26ce20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ce20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ce24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26ce24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26ce28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26ce28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26ce2c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CE2Cu;
    SET_GPR_U32(ctx, 31, 0x26CE34u);
    ctx->pc = 0x26CE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE2Cu;
            // 0x26ce30: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE34u; }
        if (ctx->pc != 0x26CE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE34u; }
        if (ctx->pc != 0x26CE34u) { return; }
    }
    ctx->pc = 0x26CE34u;
label_26ce34:
    // 0x26ce34: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26CE34u;
    SET_GPR_U32(ctx, 31, 0x26CE3Cu);
    ctx->pc = 0x26CE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE34u;
            // 0x26ce38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE3Cu; }
        if (ctx->pc != 0x26CE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE3Cu; }
        if (ctx->pc != 0x26CE3Cu) { return; }
    }
    ctx->pc = 0x26CE3Cu;
label_26ce3c:
    // 0x26ce3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CE3Cu;
    {
        const bool branch_taken_0x26ce3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE3Cu;
            // 0x26ce40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce3c) {
            ctx->pc = 0x26CE4Cu;
            goto label_26ce4c;
        }
    }
    ctx->pc = 0x26CE44u;
    // 0x26ce44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26CE44u;
    {
        const bool branch_taken_0x26ce44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE44u;
            // 0x26ce48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce44) {
            ctx->pc = 0x26CE68u;
            goto label_26ce68;
        }
    }
    ctx->pc = 0x26CE4Cu;
label_26ce4c:
    // 0x26ce4c: 0xc054f84  jal         func_153E10
    ctx->pc = 0x26CE4Cu;
    SET_GPR_U32(ctx, 31, 0x26CE54u);
    ctx->pc = 0x153E10u;
    if (runtime->hasFunction(0x153E10u)) {
        auto targetFn = runtime->lookupFunction(0x153E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE54u; }
        if (ctx->pc != 0x26CE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        State__6ClsMesFv_0x153e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE54u; }
        if (ctx->pc != 0x26CE54u) { return; }
    }
    ctx->pc = 0x26CE54u;
label_26ce54:
    // 0x26ce54: 0x402826  xor         $a1, $v0, $zero
    ctx->pc = 0x26ce54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x26ce58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ce58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ce5c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26CE5Cu;
    SET_GPR_U32(ctx, 31, 0x26CE64u);
    ctx->pc = 0x26CE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE5Cu;
            // 0x26ce60: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE64u; }
        if (ctx->pc != 0x26CE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CE64u; }
        if (ctx->pc != 0x26CE64u) { return; }
    }
    ctx->pc = 0x26CE64u;
label_26ce64:
    // 0x26ce64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ce68:
    // 0x26ce68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26ce68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ce6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ce6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ce70: 0x3e00008  jr          $ra
    ctx->pc = 0x26CE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CE70u;
            // 0x26ce74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CE78u;
}
