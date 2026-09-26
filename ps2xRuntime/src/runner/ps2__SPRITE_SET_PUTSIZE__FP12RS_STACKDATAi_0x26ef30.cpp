#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPRITE_SET_PUTSIZE__FP12RS_STACKDATAi
// Address: 0x26ef30 - 0x26efa0
void ps2__SPRITE_SET_PUTSIZE__FP12RS_STACKDATAi_0x26ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPRITE_SET_PUTSIZE__FP12RS_STACKDATAi_0x26ef30");
#endif

    switch (ctx->pc) {
        case 0x26ef48u: goto label_26ef48;
        case 0x26ef58u: goto label_26ef58;
        case 0x26ef64u: goto label_26ef64;
        case 0x26ef70u: goto label_26ef70;
        case 0x26ef88u: goto label_26ef88;
        default: break;
    }

    ctx->pc = 0x26ef30u;

    // 0x26ef30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ef30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ef34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ef38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ef38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ef3c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26ef3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26ef40: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EF40u;
    SET_GPR_U32(ctx, 31, 0x26EF48u);
    ctx->pc = 0x26EF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF40u;
            // 0x26ef44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF48u; }
        if (ctx->pc != 0x26EF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF48u; }
        if (ctx->pc != 0x26EF48u) { return; }
    }
    ctx->pc = 0x26EF48u;
label_26ef48:
    // 0x26ef48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ef48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26ef4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef50: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EF50u;
    SET_GPR_U32(ctx, 31, 0x26EF58u);
    ctx->pc = 0x26EF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF50u;
            // 0x26ef54: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF58u; }
        if (ctx->pc != 0x26EF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF58u; }
        if (ctx->pc != 0x26EF58u) { return; }
    }
    ctx->pc = 0x26EF58u;
label_26ef58:
    // 0x26ef58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ef58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef5c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26EF5Cu;
    SET_GPR_U32(ctx, 31, 0x26EF64u);
    ctx->pc = 0x26EF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF5Cu;
            // 0x26ef60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF64u; }
        if (ctx->pc != 0x26EF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF64u; }
        if (ctx->pc != 0x26EF64u) { return; }
    }
    ctx->pc = 0x26EF64u;
label_26ef64:
    // 0x26ef64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ef64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef68: 0xc09bb34  jal         func_26ECD0
    ctx->pc = 0x26EF68u;
    SET_GPR_U32(ctx, 31, 0x26EF70u);
    ctx->pc = 0x26EF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF68u;
            // 0x26ef6c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26ECD0u;
    if (runtime->hasFunction(0x26ECD0u)) {
        auto targetFn = runtime->lookupFunction(0x26ECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF70u; }
        if (ctx->pc != 0x26EF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEventSprite__Fi_0x26ecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF70u; }
        if (ctx->pc != 0x26EF70u) { return; }
    }
    ctx->pc = 0x26EF70u;
label_26ef70:
    // 0x26ef70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26EF70u;
    {
        const bool branch_taken_0x26ef70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF70u;
            // 0x26ef74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef70) {
            ctx->pc = 0x26EF80u;
            goto label_26ef80;
        }
    }
    ctx->pc = 0x26EF78u;
    // 0x26ef78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26EF78u;
    {
        const bool branch_taken_0x26ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF78u;
            // 0x26ef7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef78) {
            ctx->pc = 0x26EF8Cu;
            goto label_26ef8c;
        }
    }
    ctx->pc = 0x26EF80u;
label_26ef80:
    // 0x26ef80: 0xc0a42e8  jal         func_290BA0
    ctx->pc = 0x26EF80u;
    SET_GPR_U32(ctx, 31, 0x26EF88u);
    ctx->pc = 0x26EF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF80u;
            // 0x26ef84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290BA0u;
    if (runtime->hasFunction(0x290BA0u)) {
        auto targetFn = runtime->lookupFunction(0x290BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF88u; }
        if (ctx->pc != 0x26EF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutSize__13CEventSprite2Fii_0x290ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF88u; }
        if (ctx->pc != 0x26EF88u) { return; }
    }
    ctx->pc = 0x26EF88u;
label_26ef88:
    // 0x26ef88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ef8c:
    // 0x26ef8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26ef8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26ef90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26ef90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26ef94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26ef94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ef98: 0x3e00008  jr          $ra
    ctx->pc = 0x26EF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26EF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF98u;
            // 0x26ef9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26EFA0u;
}
