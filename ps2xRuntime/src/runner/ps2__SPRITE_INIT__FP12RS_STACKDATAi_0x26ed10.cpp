#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPRITE_INIT__FP12RS_STACKDATAi
// Address: 0x26ed10 - 0x26ed50
void ps2__SPRITE_INIT__FP12RS_STACKDATAi_0x26ed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPRITE_INIT__FP12RS_STACKDATAi_0x26ed10");
#endif

    switch (ctx->pc) {
        case 0x26ed20u: goto label_26ed20;
        case 0x26ed28u: goto label_26ed28;
        case 0x26ed40u: goto label_26ed40;
        default: break;
    }

    ctx->pc = 0x26ed10u;

    // 0x26ed10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26ed10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26ed14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26ed14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26ed18: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26ED18u;
    SET_GPR_U32(ctx, 31, 0x26ED20u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED20u; }
        if (ctx->pc != 0x26ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED20u; }
        if (ctx->pc != 0x26ED20u) { return; }
    }
    ctx->pc = 0x26ED20u;
label_26ed20:
    // 0x26ed20: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x26ED20u;
    SET_GPR_U32(ctx, 31, 0x26ED28u);
    ctx->pc = 0x26ED24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26ED20u;
            // 0x26ed24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (runtime->hasFunction(0x26ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x26ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED28u; }
        if (ctx->pc != 0x26ED28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventSprite__Fi_0x26ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED28u; }
        if (ctx->pc != 0x26ED28u) { return; }
    }
    ctx->pc = 0x26ED28u;
label_26ed28:
    // 0x26ed28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26ED28u;
    {
        const bool branch_taken_0x26ed28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ED2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ED28u;
            // 0x26ed2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed28) {
            ctx->pc = 0x26ED38u;
            goto label_26ed38;
        }
    }
    ctx->pc = 0x26ED30u;
    // 0x26ed30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26ED30u;
    {
        const bool branch_taken_0x26ed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ED30u;
            // 0x26ed34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed30) {
            ctx->pc = 0x26ED44u;
            goto label_26ed44;
        }
    }
    ctx->pc = 0x26ED38u;
label_26ed38:
    // 0x26ed38: 0xc0a42a4  jal         func_290A90
    ctx->pc = 0x26ED38u;
    SET_GPR_U32(ctx, 31, 0x26ED40u);
    ctx->pc = 0x290A90u;
    if (runtime->hasFunction(0x290A90u)) {
        auto targetFn = runtime->lookupFunction(0x290A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED40u; }
        if (ctx->pc != 0x26ED40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CEventSprite2Fv_0x290a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26ED40u; }
        if (ctx->pc != 0x26ED40u) { return; }
    }
    ctx->pc = 0x26ED40u;
label_26ed40:
    // 0x26ed40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ed44:
    // 0x26ed44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26ed44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ed48: 0x3e00008  jr          $ra
    ctx->pc = 0x26ED48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26ED4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26ED48u;
            // 0x26ed4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26ED50u;
}
