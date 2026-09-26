#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPRITE_SET_TEXTURE__FP12RS_STACKDATAi
// Address: 0x26ee10 - 0x26ee80
void ps2__SPRITE_SET_TEXTURE__FP12RS_STACKDATAi_0x26ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPRITE_SET_TEXTURE__FP12RS_STACKDATAi_0x26ee10");
#endif

    switch (ctx->pc) {
        case 0x26ee28u: goto label_26ee28;
        case 0x26ee38u: goto label_26ee38;
        case 0x26ee44u: goto label_26ee44;
        case 0x26ee50u: goto label_26ee50;
        case 0x26ee68u: goto label_26ee68;
        default: break;
    }

    ctx->pc = 0x26ee10u;

    // 0x26ee10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ee14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ee18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ee18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ee1c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26ee1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26ee20: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EE20u;
    SET_GPR_U32(ctx, 31, 0x26EE28u);
    ctx->pc = 0x26EE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE20u;
            // 0x26ee24: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE28u; }
        if (ctx->pc != 0x26EE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE28u; }
        if (ctx->pc != 0x26EE28u) { return; }
    }
    ctx->pc = 0x26EE28u;
label_26ee28:
    // 0x26ee28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ee28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ee2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee30: 0xc097e48  jal         func_25F920
    ctx->pc = 0x26EE30u;
    SET_GPR_U32(ctx, 31, 0x26EE38u);
    ctx->pc = 0x26EE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE30u;
            // 0x26ee34: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE38u; }
        if (ctx->pc != 0x26EE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE38u; }
        if (ctx->pc != 0x26EE38u) { return; }
    }
    ctx->pc = 0x26EE38u;
label_26ee38:
    // 0x26ee38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ee38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee3c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EE3Cu;
    SET_GPR_U32(ctx, 31, 0x26EE44u);
    ctx->pc = 0x26EE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE3Cu;
            // 0x26ee40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE44u; }
        if (ctx->pc != 0x26EE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE44u; }
        if (ctx->pc != 0x26EE44u) { return; }
    }
    ctx->pc = 0x26EE44u;
label_26ee44:
    // 0x26ee44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ee44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee48: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x26EE48u;
    SET_GPR_U32(ctx, 31, 0x26EE50u);
    ctx->pc = 0x26EE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE48u;
            // 0x26ee4c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (runtime->hasFunction(0x26ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x26ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE50u; }
        if (ctx->pc != 0x26EE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventSprite__Fi_0x26ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE50u; }
        if (ctx->pc != 0x26EE50u) { return; }
    }
    ctx->pc = 0x26EE50u;
label_26ee50:
    // 0x26ee50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EE50u;
    {
        const bool branch_taken_0x26ee50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE50u;
            // 0x26ee54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee50) {
            ctx->pc = 0x26EE60u;
            goto label_26ee60;
        }
    }
    ctx->pc = 0x26EE58u;
    // 0x26ee58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26EE58u;
    {
        const bool branch_taken_0x26ee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE58u;
            // 0x26ee5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee58) {
            ctx->pc = 0x26EE6Cu;
            goto label_26ee6c;
        }
    }
    ctx->pc = 0x26EE60u;
label_26ee60:
    // 0x26ee60: 0xc0a42c8  jal         func_290B20
    ctx->pc = 0x26EE60u;
    SET_GPR_U32(ctx, 31, 0x26EE68u);
    ctx->pc = 0x26EE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE60u;
            // 0x26ee64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290B20u;
    if (runtime->hasFunction(0x290B20u)) {
        auto targetFn = runtime->lookupFunction(0x290B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE68u; }
        if (ctx->pc != 0x26EE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexture__13CEventSprite2FPci_0x290b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EE68u; }
        if (ctx->pc != 0x26EE68u) { return; }
    }
    ctx->pc = 0x26EE68u;
label_26ee68:
    // 0x26ee68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ee6c:
    // 0x26ee6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26ee6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ee70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ee70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ee74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ee74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ee78: 0x3e00008  jr          $ra
    ctx->pc = 0x26EE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EE78u;
            // 0x26ee7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EE80u;
}
