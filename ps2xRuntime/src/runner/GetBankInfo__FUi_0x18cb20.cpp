#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetBankInfo__FUi
// Address: 0x18cb20 - 0x18cb90
void GetBankInfo__FUi_0x18cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetBankInfo__FUi_0x18cb20");
#endif

    switch (ctx->pc) {
        case 0x18cb30u: goto label_18cb30;
        case 0x18cb38u: goto label_18cb38;
        case 0x18cb44u: goto label_18cb44;
        default: break;
    }

    ctx->pc = 0x18cb20u;

    // 0x18cb20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18cb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18cb24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18cb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18cb28: 0xc0632c0  jal         func_18CB00
    ctx->pc = 0x18CB28u;
    SET_GPR_U32(ctx, 31, 0x18CB30u);
    ctx->pc = 0x18CB00u;
    if (runtime->hasFunction(0x18CB00u)) {
        auto targetFn = runtime->lookupFunction(0x18CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB30u; }
        if (ctx->pc != 0x18CB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortNo__FUi_0x18cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB30u; }
        if (ctx->pc != 0x18CB30u) { return; }
    }
    ctx->pc = 0x18CB30u;
label_18cb30:
    // 0x18cb30: 0xc0632c4  jal         func_18CB10
    ctx->pc = 0x18CB30u;
    SET_GPR_U32(ctx, 31, 0x18CB38u);
    ctx->pc = 0x18CB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB30u;
            // 0x18cb34: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CB10u;
    if (runtime->hasFunction(0x18CB10u)) {
        auto targetFn = runtime->lookupFunction(0x18CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB38u; }
        if (ctx->pc != 0x18CB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBankNo__FUi_0x18cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB38u; }
        if (ctx->pc != 0x18CB38u) { return; }
    }
    ctx->pc = 0x18CB38u;
label_18cb38:
    // 0x18cb38: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x18cb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb3c: 0xc063288  jal         func_18CA20
    ctx->pc = 0x18CB3Cu;
    SET_GPR_U32(ctx, 31, 0x18CB44u);
    ctx->pc = 0x18CB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB3Cu;
            // 0x18cb40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CA20u;
    if (runtime->hasFunction(0x18CA20u)) {
        auto targetFn = runtime->lookupFunction(0x18CA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB44u; }
        if (ctx->pc != 0x18CB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPortInfo__Fi_0x18ca20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CB44u; }
        if (ctx->pc != 0x18CB44u) { return; }
    }
    ctx->pc = 0x18CB44u;
label_18cb44:
    // 0x18cb44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CB44u;
    {
        const bool branch_taken_0x18cb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cb44) {
            ctx->pc = 0x18CB54u;
            goto label_18cb54;
        }
    }
    ctx->pc = 0x18CB4Cu;
    // 0x18cb4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18CB4Cu;
    {
        const bool branch_taken_0x18cb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB4Cu;
            // 0x18cb50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb4c) {
            ctx->pc = 0x18CB84u;
            goto label_18cb84;
        }
    }
    ctx->pc = 0x18CB54u;
label_18cb54:
    // 0x18cb54: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CB54u;
    {
        const bool branch_taken_0x18cb54 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x18cb54) {
            ctx->pc = 0x18CB6Cu;
            goto label_18cb6c;
        }
    }
    ctx->pc = 0x18CB5Cu;
    // 0x18cb5c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x18cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18cb60: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x18cb60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18cb64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CB64u;
    {
        const bool branch_taken_0x18cb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB64u;
            // 0x18cb68: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb64) {
            ctx->pc = 0x18CB74u;
            goto label_18cb74;
        }
    }
    ctx->pc = 0x18CB6Cu;
label_18cb6c:
    // 0x18cb6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x18CB6Cu;
    {
        const bool branch_taken_0x18cb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB6Cu;
            // 0x18cb70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb6c) {
            ctx->pc = 0x18CB84u;
            goto label_18cb84;
        }
    }
    ctx->pc = 0x18CB74u;
label_18cb74:
    // 0x18cb74: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x18cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18cb78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18cb7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cb80: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x18cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_18cb84:
    // 0x18cb84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18cb84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18cb88: 0x3e00008  jr          $ra
    ctx->pc = 0x18CB88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CB88u;
            // 0x18cb8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18CB90u;
}
