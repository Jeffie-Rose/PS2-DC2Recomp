#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFishRecord__14CFishingRecordFi
// Address: 0x19ae40 - 0x19ae7c
void GetFishRecord__14CFishingRecordFi_0x19ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFishRecord__14CFishingRecordFi_0x19ae40");
#endif

    switch (ctx->pc) {
        case 0x19ae54u: goto label_19ae54;
        default: break;
    }

    ctx->pc = 0x19ae40u;

    // 0x19ae40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ae44: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x19ae44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ae48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ae48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ae4c: 0xc066b70  jal         func_19ADC0
    ctx->pc = 0x19AE4Cu;
    SET_GPR_U32(ctx, 31, 0x19AE54u);
    ctx->pc = 0x19AE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE4Cu;
            // 0x19ae50: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ADC0u;
    if (runtime->hasFunction(0x19ADC0u)) {
        auto targetFn = runtime->lookupFunction(0x19ADC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE54u; }
        if (ctx->pc != 0x19AE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetConvertIndexFromFishNo__Fi_0x19adc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AE54u; }
        if (ctx->pc != 0x19AE54u) { return; }
    }
    ctx->pc = 0x19AE54u;
label_19ae54:
    // 0x19ae54: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19AE54u;
    {
        const bool branch_taken_0x19ae54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19ae54) {
            ctx->pc = 0x19AE64u;
            goto label_19ae64;
        }
    }
    ctx->pc = 0x19AE5Cu;
    // 0x19ae5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19AE5Cu;
    {
        const bool branch_taken_0x19ae5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE5Cu;
            // 0x19ae60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae5c) {
            ctx->pc = 0x19AE70u;
            goto label_19ae70;
        }
    }
    ctx->pc = 0x19AE64u;
label_19ae64:
    // 0x19ae64: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x19ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x19ae68: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x19ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x19ae6c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x19ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_19ae70:
    // 0x19ae70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ae70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ae74: 0x3e00008  jr          $ra
    ctx->pc = 0x19AE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AE74u;
            // 0x19ae78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AE7Cu;
}
