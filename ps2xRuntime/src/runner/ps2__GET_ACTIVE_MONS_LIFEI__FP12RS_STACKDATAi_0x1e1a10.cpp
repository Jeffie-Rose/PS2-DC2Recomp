#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ACTIVE_MONS_LIFEI__FP12RS_STACKDATAi
// Address: 0x1e1a10 - 0x1e1a8c
void ps2__GET_ACTIVE_MONS_LIFEI__FP12RS_STACKDATAi_0x1e1a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ACTIVE_MONS_LIFEI__FP12RS_STACKDATAi_0x1e1a10");
#endif

    switch (ctx->pc) {
        case 0x1e1a34u: goto label_1e1a34;
        case 0x1e1a78u: goto label_1e1a78;
        default: break;
    }

    ctx->pc = 0x1e1a10u;

    // 0x1e1a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1a14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1a18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1a1c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1A1Cu;
    {
        const bool branch_taken_0x1e1a1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A1Cu;
            // 0x1e1a20: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a1c) {
            ctx->pc = 0x1E1A2Cu;
            goto label_1e1a2c;
        }
    }
    ctx->pc = 0x1E1A24u;
    // 0x1e1a24: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E1A24u;
    {
        const bool branch_taken_0x1e1a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A24u;
            // 0x1e1a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a24) {
            ctx->pc = 0x1E1A7Cu;
            goto label_1e1a7c;
        }
    }
    ctx->pc = 0x1E1A2Cu;
label_1e1a2c:
    // 0x1e1a2c: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E1A2Cu;
    SET_GPR_U32(ctx, 31, 0x1E1A34u);
    ctx->pc = 0x1E1A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A2Cu;
            // 0x1e1a30: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A34u; }
        if (ctx->pc != 0x1E1A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A34u; }
        if (ctx->pc != 0x1E1A34u) { return; }
    }
    ctx->pc = 0x1E1A34u;
label_1e1a34:
    // 0x1e1a34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e1a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1a38: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1A38u;
    {
        const bool branch_taken_0x1e1a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1a38) {
            ctx->pc = 0x1E1A64u;
            goto label_1e1a64;
        }
    }
    ctx->pc = 0x1E1A40u;
    // 0x1e1a40: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e1a44: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1e1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1e1a48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1a4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e1a50: 0x8c420484  lw          $v0, 0x484($v0)
    ctx->pc = 0x1e1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
    // 0x1e1a54: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1A54u;
    {
        const bool branch_taken_0x1e1a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1a54) {
            ctx->pc = 0x1E1A6Cu;
            goto label_1e1a6c;
        }
    }
    ctx->pc = 0x1E1A5Cu;
    // 0x1e1a5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1A5Cu;
    {
        const bool branch_taken_0x1e1a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A5Cu;
            // 0x1e1a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a5c) {
            ctx->pc = 0x1E1A7Cu;
            goto label_1e1a7c;
        }
    }
    ctx->pc = 0x1E1A64u;
label_1e1a64:
    // 0x1e1a64: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e1a68: 0x0  nop
    ctx->pc = 0x1e1a68u;
    // NOP
label_1e1a6c:
    // 0x1e1a6c: 0x8c451314  lw          $a1, 0x1314($v0)
    ctx->pc = 0x1e1a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4884)));
    // 0x1e1a70: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E1A70u;
    SET_GPR_U32(ctx, 31, 0x1E1A78u);
    ctx->pc = 0x1E1A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A70u;
            // 0x1e1a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A78u; }
        if (ctx->pc != 0x1E1A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A78u; }
        if (ctx->pc != 0x1E1A78u) { return; }
    }
    ctx->pc = 0x1E1A78u;
label_1e1a78:
    // 0x1e1a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1a7c:
    // 0x1e1a7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1a80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1a84: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A84u;
            // 0x1e1a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1A8Cu;
}
