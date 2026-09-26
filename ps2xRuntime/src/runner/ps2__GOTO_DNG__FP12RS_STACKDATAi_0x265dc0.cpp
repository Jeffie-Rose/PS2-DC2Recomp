#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GOTO_DNG__FP12RS_STACKDATAi
// Address: 0x265dc0 - 0x265e8c
void ps2__GOTO_DNG__FP12RS_STACKDATAi_0x265dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GOTO_DNG__FP12RS_STACKDATAi_0x265dc0");
#endif

    switch (ctx->pc) {
        case 0x265de4u: goto label_265de4;
        case 0x265e00u: goto label_265e00;
        case 0x265e0cu: goto label_265e0c;
        case 0x265e38u: goto label_265e38;
        case 0x265e50u: goto label_265e50;
        case 0x265e60u: goto label_265e60;
        default: break;
    }

    ctx->pc = 0x265dc0u;

    // 0x265dc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x265dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x265dc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x265dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x265dc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x265dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x265dcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x265dd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x265dd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265dd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x265dd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x265dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265ddc: 0xc098828  jal         func_2620A0
    ctx->pc = 0x265DDCu;
    SET_GPR_U32(ctx, 31, 0x265DE4u);
    ctx->pc = 0x265DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265DDCu;
            // 0x265de0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2620A0u;
    if (runtime->hasFunction(0x2620A0u)) {
        auto targetFn = runtime->lookupFunction(0x2620A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265DE4u; }
        if (ctx->pc != 0x265DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventFinish__Fv_0x2620a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265DE4u; }
        if (ctx->pc != 0x265DE4u) { return; }
    }
    ctx->pc = 0x265DE4u;
label_265de4:
    // 0x265de4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x265DE4u;
    {
        const bool branch_taken_0x265de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x265DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265DE4u;
            // 0x265de8: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265de4) {
            ctx->pc = 0x265DF4u;
            goto label_265df4;
        }
    }
    ctx->pc = 0x265DECu;
    // 0x265dec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x265DECu;
    {
        const bool branch_taken_0x265dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x265DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265DECu;
            // 0x265df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265dec) {
            ctx->pc = 0x265E70u;
            goto label_265e70;
        }
    }
    ctx->pc = 0x265DF4u;
label_265df4:
    // 0x265df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x265df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265df8: 0xc049c86  jal         func_127218
    ctx->pc = 0x265DF8u;
    SET_GPR_U32(ctx, 31, 0x265E00u);
    ctx->pc = 0x265DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265DF8u;
            // 0x265dfc: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E00u; }
        if (ctx->pc != 0x265E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E00u; }
        if (ctx->pc != 0x265E00u) { return; }
    }
    ctx->pc = 0x265E00u;
label_265e00:
    // 0x265e00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x265e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e04: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265E04u;
    SET_GPR_U32(ctx, 31, 0x265E0Cu);
    ctx->pc = 0x265E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265E04u;
            // 0x265e08: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E0Cu; }
        if (ctx->pc != 0x265E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E0Cu; }
        if (ctx->pc != 0x265E0Cu) { return; }
    }
    ctx->pc = 0x265E0Cu;
label_265e0c:
    // 0x265e0c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x265e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x265e10: 0x27b00094  addiu       $s0, $sp, 0x94
    ctx->pc = 0x265e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x265e14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x265e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265e18: 0x27b10098  addiu       $s1, $sp, 0x98
    ctx->pc = 0x265e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x265e1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x265e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x265e20: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x265e20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x265e24: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x265E24u;
    {
        const bool branch_taken_0x265e24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265E24u;
            // 0x265e28: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e24) {
            ctx->pc = 0x265E3Cu;
            goto label_265e3c;
        }
    }
    ctx->pc = 0x265E2Cu;
    // 0x265e2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x265e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265e30: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265E30u;
    SET_GPR_U32(ctx, 31, 0x265E38u);
    ctx->pc = 0x265E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265E30u;
            // 0x265e34: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E38u; }
        if (ctx->pc != 0x265E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E38u; }
        if (ctx->pc != 0x265E38u) { return; }
    }
    ctx->pc = 0x265E38u;
label_265e38:
    // 0x265e38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x265e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_265e3c:
    // 0x265e3c: 0x2a410003  slti        $at, $s2, 0x3
    ctx->pc = 0x265e3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x265e40: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x265E40u;
    {
        const bool branch_taken_0x265e40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x265E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265E40u;
            // 0x265e44: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265e40) {
            ctx->pc = 0x265E58u;
            goto label_265e58;
        }
    }
    ctx->pc = 0x265E48u;
    // 0x265e48: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265E48u;
    SET_GPR_U32(ctx, 31, 0x265E50u);
    ctx->pc = 0x265E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265E48u;
            // 0x265e4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E50u; }
        if (ctx->pc != 0x265E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E50u; }
        if (ctx->pc != 0x265E50u) { return; }
    }
    ctx->pc = 0x265E50u;
label_265e50:
    // 0x265e50: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x265e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x265e54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x265e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_265e58:
    // 0x265e58: 0xc064240  jal         func_190900
    ctx->pc = 0x265E58u;
    SET_GPR_U32(ctx, 31, 0x265E60u);
    ctx->pc = 0x265E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265E58u;
            // 0x265e5c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190900u;
    if (runtime->hasFunction(0x190900u)) {
        auto targetFn = runtime->lookupFunction(0x190900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E60u; }
        if (ctx->pc != 0x265E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextLoop__Fi13INIT_LOOP_ARG_0x190900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265E60u; }
        if (ctx->pc != 0x265E60u) { return; }
    }
    ctx->pc = 0x265E60u;
label_265e60:
    // 0x265e60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x265e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x265e64: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x265e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x265e68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x265e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x265e6c: 0xac23e4fc  sw          $v1, -0x1B04($at)
    ctx->pc = 0x265e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 3));
label_265e70:
    // 0x265e70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x265e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x265e74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x265e74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265e78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x265e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265e7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265e84: 0x3e00008  jr          $ra
    ctx->pc = 0x265E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x265E84u;
            // 0x265e88: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x265E8Cu;
}
