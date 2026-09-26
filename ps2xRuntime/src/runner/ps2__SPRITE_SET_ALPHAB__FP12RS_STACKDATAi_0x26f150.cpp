#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPRITE_SET_ALPHAB__FP12RS_STACKDATAi
// Address: 0x26f150 - 0x26f1a8
void ps2__SPRITE_SET_ALPHAB__FP12RS_STACKDATAi_0x26f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPRITE_SET_ALPHAB__FP12RS_STACKDATAi_0x26f150");
#endif

    switch (ctx->pc) {
        case 0x26f164u: goto label_26f164;
        case 0x26f170u: goto label_26f170;
        case 0x26f17cu: goto label_26f17c;
        case 0x26f194u: goto label_26f194;
        default: break;
    }

    ctx->pc = 0x26f150u;

    // 0x26f150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26f154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f158: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f15c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F15Cu;
    SET_GPR_U32(ctx, 31, 0x26F164u);
    ctx->pc = 0x26F160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F15Cu;
            // 0x26f160: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F164u; }
        if (ctx->pc != 0x26F164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F164u; }
        if (ctx->pc != 0x26F164u) { return; }
    }
    ctx->pc = 0x26F164u;
label_26f164:
    // 0x26f164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f168: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F168u;
    SET_GPR_U32(ctx, 31, 0x26F170u);
    ctx->pc = 0x26F16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F168u;
            // 0x26f16c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F170u; }
        if (ctx->pc != 0x26F170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F170u; }
        if (ctx->pc != 0x26F170u) { return; }
    }
    ctx->pc = 0x26F170u;
label_26f170:
    // 0x26f170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f174: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x26F174u;
    SET_GPR_U32(ctx, 31, 0x26F17Cu);
    ctx->pc = 0x26F178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F174u;
            // 0x26f178: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (runtime->hasFunction(0x26ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x26ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F17Cu; }
        if (ctx->pc != 0x26F17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventSprite__Fi_0x26ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F17Cu; }
        if (ctx->pc != 0x26F17Cu) { return; }
    }
    ctx->pc = 0x26F17Cu;
label_26f17c:
    // 0x26f17c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F17Cu;
    {
        const bool branch_taken_0x26f17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F17Cu;
            // 0x26f180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f17c) {
            ctx->pc = 0x26F18Cu;
            goto label_26f18c;
        }
    }
    ctx->pc = 0x26F184u;
    // 0x26f184: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26F184u;
    {
        const bool branch_taken_0x26f184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F184u;
            // 0x26f188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f184) {
            ctx->pc = 0x26F198u;
            goto label_26f198;
        }
    }
    ctx->pc = 0x26F18Cu;
label_26f18c:
    // 0x26f18c: 0xc0a430c  jal         func_290C30
    ctx->pc = 0x26F18Cu;
    SET_GPR_U32(ctx, 31, 0x26F194u);
    ctx->pc = 0x290C30u;
    if (runtime->hasFunction(0x290C30u)) {
        auto targetFn = runtime->lookupFunction(0x290C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F194u; }
        if (ctx->pc != 0x26F194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlphaBlend__13CEventSprite2Fi_0x290c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F194u; }
        if (ctx->pc != 0x26F194u) { return; }
    }
    ctx->pc = 0x26F194u;
label_26f194:
    // 0x26f194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f198:
    // 0x26f198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x26F1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F1A0u;
            // 0x26f1a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F1A8u;
}
