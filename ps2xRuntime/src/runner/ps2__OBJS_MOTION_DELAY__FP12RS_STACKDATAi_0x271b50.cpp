#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_MOTION_DELAY__FP12RS_STACKDATAi
// Address: 0x271b50 - 0x271ba8
void ps2__OBJS_MOTION_DELAY__FP12RS_STACKDATAi_0x271b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_MOTION_DELAY__FP12RS_STACKDATAi_0x271b50");
#endif

    switch (ctx->pc) {
        case 0x271b64u: goto label_271b64;
        case 0x271b70u: goto label_271b70;
        case 0x271b7cu: goto label_271b7c;
        case 0x271b94u: goto label_271b94;
        default: break;
    }

    ctx->pc = 0x271b50u;

    // 0x271b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x271b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x271b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x271b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271b5c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271B5Cu;
    SET_GPR_U32(ctx, 31, 0x271B64u);
    ctx->pc = 0x271B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271B5Cu;
            // 0x271b60: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B64u; }
        if (ctx->pc != 0x271B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B64u; }
        if (ctx->pc != 0x271B64u) { return; }
    }
    ctx->pc = 0x271B64u;
label_271b64:
    // 0x271b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b68: 0xc097e18  jal         func_25F860
    ctx->pc = 0x271B68u;
    SET_GPR_U32(ctx, 31, 0x271B70u);
    ctx->pc = 0x271B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271B68u;
            // 0x271b6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B70u; }
        if (ctx->pc != 0x271B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B70u; }
        if (ctx->pc != 0x271B70u) { return; }
    }
    ctx->pc = 0x271B70u;
label_271b70:
    // 0x271b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b74: 0xc098a44  jal         func_262910
    ctx->pc = 0x271B74u;
    SET_GPR_U32(ctx, 31, 0x271B7Cu);
    ctx->pc = 0x271B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271B74u;
            // 0x271b78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B7Cu; }
        if (ctx->pc != 0x271B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B7Cu; }
        if (ctx->pc != 0x271B7Cu) { return; }
    }
    ctx->pc = 0x271B7Cu;
label_271b7c:
    // 0x271b7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271B7Cu;
    {
        const bool branch_taken_0x271b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B7Cu;
            // 0x271b80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b7c) {
            ctx->pc = 0x271B8Cu;
            goto label_271b8c;
        }
    }
    ctx->pc = 0x271B84u;
    // 0x271b84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271B84u;
    {
        const bool branch_taken_0x271b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B84u;
            // 0x271b88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b84) {
            ctx->pc = 0x271B98u;
            goto label_271b98;
        }
    }
    ctx->pc = 0x271B8Cu;
label_271b8c:
    // 0x271b8c: 0xc0973b8  jal         func_25CEE0
    ctx->pc = 0x271B8Cu;
    SET_GPR_U32(ctx, 31, 0x271B94u);
    ctx->pc = 0x25CEE0u;
    if (runtime->hasFunction(0x25CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x25CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B94u; }
        if (ctx->pc != 0x271B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MotionDelay__12CSceneObjSeqFi_0x25cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271B94u; }
        if (ctx->pc != 0x271B94u) { return; }
    }
    ctx->pc = 0x271B94u;
label_271b94:
    // 0x271b94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271b98:
    // 0x271b98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x271b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271b9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x271BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271BA0u;
            // 0x271ba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271BA8u;
}
