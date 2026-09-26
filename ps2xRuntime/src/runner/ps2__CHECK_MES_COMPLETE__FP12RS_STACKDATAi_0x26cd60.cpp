#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHECK_MES_COMPLETE__FP12RS_STACKDATAi
// Address: 0x26cd60 - 0x26cdb8
void ps2__CHECK_MES_COMPLETE__FP12RS_STACKDATAi_0x26cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHECK_MES_COMPLETE__FP12RS_STACKDATAi_0x26cd60");
#endif

    switch (ctx->pc) {
        case 0x26cd74u: goto label_26cd74;
        case 0x26cd7cu: goto label_26cd7c;
        case 0x26cd94u: goto label_26cd94;
        case 0x26cda4u: goto label_26cda4;
        default: break;
    }

    ctx->pc = 0x26cd60u;

    // 0x26cd60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26cd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26cd64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26cd68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26cd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26cd6c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CD6Cu;
    SET_GPR_U32(ctx, 31, 0x26CD74u);
    ctx->pc = 0x26CD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD6Cu;
            // 0x26cd70: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD74u; }
        if (ctx->pc != 0x26CD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD74u; }
        if (ctx->pc != 0x26CD74u) { return; }
    }
    ctx->pc = 0x26CD74u;
label_26cd74:
    // 0x26cd74: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26CD74u;
    SET_GPR_U32(ctx, 31, 0x26CD7Cu);
    ctx->pc = 0x26CD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD74u;
            // 0x26cd78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD7Cu; }
        if (ctx->pc != 0x26CD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD7Cu; }
        if (ctx->pc != 0x26CD7Cu) { return; }
    }
    ctx->pc = 0x26CD7Cu;
label_26cd7c:
    // 0x26cd7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CD7Cu;
    {
        const bool branch_taken_0x26cd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD7Cu;
            // 0x26cd80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd7c) {
            ctx->pc = 0x26CD8Cu;
            goto label_26cd8c;
        }
    }
    ctx->pc = 0x26CD84u;
    // 0x26cd84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26CD84u;
    {
        const bool branch_taken_0x26cd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD84u;
            // 0x26cd88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd84) {
            ctx->pc = 0x26CDA8u;
            goto label_26cda8;
        }
    }
    ctx->pc = 0x26CD8Cu;
label_26cd8c:
    // 0x26cd8c: 0xc054f84  jal         func_153E10
    ctx->pc = 0x26CD8Cu;
    SET_GPR_U32(ctx, 31, 0x26CD94u);
    ctx->pc = 0x153E10u;
    if (runtime->hasFunction(0x153E10u)) {
        auto targetFn = runtime->lookupFunction(0x153E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD94u; }
        if (ctx->pc != 0x26CD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        State__6ClsMesFv_0x153e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD94u; }
        if (ctx->pc != 0x26CD94u) { return; }
    }
    ctx->pc = 0x26CD94u;
label_26cd94:
    // 0x26cd94: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x26cd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x26cd98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26cd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd9c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26CD9Cu;
    SET_GPR_U32(ctx, 31, 0x26CDA4u);
    ctx->pc = 0x26CDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD9Cu;
            // 0x26cda0: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDA4u; }
        if (ctx->pc != 0x26CDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CDA4u; }
        if (ctx->pc != 0x26CDA4u) { return; }
    }
    ctx->pc = 0x26CDA4u;
label_26cda4:
    // 0x26cda4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cda8:
    // 0x26cda8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26cda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26cdac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26cdacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cdb0: 0x3e00008  jr          $ra
    ctx->pc = 0x26CDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CDB0u;
            // 0x26cdb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CDB8u;
}
