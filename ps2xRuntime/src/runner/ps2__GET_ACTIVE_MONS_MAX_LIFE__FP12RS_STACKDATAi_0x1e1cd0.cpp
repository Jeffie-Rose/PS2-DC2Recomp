#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_ACTIVE_MONS_MAX_LIFE__FP12RS_STACKDATAi
// Address: 0x1e1cd0 - 0x1e1d4c
void ps2__GET_ACTIVE_MONS_MAX_LIFE__FP12RS_STACKDATAi_0x1e1cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_ACTIVE_MONS_MAX_LIFE__FP12RS_STACKDATAi_0x1e1cd0");
#endif

    switch (ctx->pc) {
        case 0x1e1cf4u: goto label_1e1cf4;
        case 0x1e1d38u: goto label_1e1d38;
        default: break;
    }

    ctx->pc = 0x1e1cd0u;

    // 0x1e1cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e1cd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1cdc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1CDCu;
    {
        const bool branch_taken_0x1e1cdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E1CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CDCu;
            // 0x1e1ce0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1cdc) {
            ctx->pc = 0x1E1CECu;
            goto label_1e1cec;
        }
    }
    ctx->pc = 0x1E1CE4u;
    // 0x1e1ce4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E1CE4u;
    {
        const bool branch_taken_0x1e1ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CE4u;
            // 0x1e1ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ce4) {
            ctx->pc = 0x1E1D3Cu;
            goto label_1e1d3c;
        }
    }
    ctx->pc = 0x1E1CECu;
label_1e1cec:
    // 0x1e1cec: 0xc07819c  jal         func_1E0670
    ctx->pc = 0x1E1CECu;
    SET_GPR_U32(ctx, 31, 0x1E1CF4u);
    ctx->pc = 0x1E1CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CECu;
            // 0x1e1cf0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CF4u; }
        if (ctx->pc != 0x1E1CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CF4u; }
        if (ctx->pc != 0x1E1CF4u) { return; }
    }
    ctx->pc = 0x1E1CF4u;
label_1e1cf4:
    // 0x1e1cf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e1cf8: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E1CF8u;
    {
        const bool branch_taken_0x1e1cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1cf8) {
            ctx->pc = 0x1E1D24u;
            goto label_1e1d24;
        }
    }
    ctx->pc = 0x1E1D00u;
    // 0x1e1d00: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x1e1d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e1d04: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1e1d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x1e1d08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1d0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e1d10: 0x8c420484  lw          $v0, 0x484($v0)
    ctx->pc = 0x1e1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1156)));
    // 0x1e1d14: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1D14u;
    {
        const bool branch_taken_0x1e1d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1d14) {
            ctx->pc = 0x1E1D2Cu;
            goto label_1e1d2c;
        }
    }
    ctx->pc = 0x1E1D1Cu;
    // 0x1e1d1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E1D1Cu;
    {
        const bool branch_taken_0x1e1d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D1Cu;
            // 0x1e1d20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d1c) {
            ctx->pc = 0x1E1D3Cu;
            goto label_1e1d3c;
        }
    }
    ctx->pc = 0x1E1D24u;
label_1e1d24:
    // 0x1e1d24: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e1d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e1d28: 0x0  nop
    ctx->pc = 0x1e1d28u;
    // NOP
label_1e1d2c:
    // 0x1e1d2c: 0x8c451310  lw          $a1, 0x1310($v0)
    ctx->pc = 0x1e1d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x1e1d30: 0xc0781bc  jal         func_1E06F0
    ctx->pc = 0x1E1D30u;
    SET_GPR_U32(ctx, 31, 0x1E1D38u);
    ctx->pc = 0x1E1D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D30u;
            // 0x1e1d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06F0u;
    if (runtime->hasFunction(0x1E06F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D38u; }
        if (ctx->pc != 0x1E1D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x1e06f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D38u; }
        if (ctx->pc != 0x1E1D38u) { return; }
    }
    ctx->pc = 0x1E1D38u;
label_1e1d38:
    // 0x1e1d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1d3c:
    // 0x1e1d3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1d44: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D44u;
            // 0x1e1d48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E1D4Cu;
}
