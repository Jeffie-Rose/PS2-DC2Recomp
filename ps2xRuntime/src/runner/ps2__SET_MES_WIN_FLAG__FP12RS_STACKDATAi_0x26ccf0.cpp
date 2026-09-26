#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MES_WIN_FLAG__FP12RS_STACKDATAi
// Address: 0x26ccf0 - 0x26cd58
void ps2__SET_MES_WIN_FLAG__FP12RS_STACKDATAi_0x26ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MES_WIN_FLAG__FP12RS_STACKDATAi_0x26ccf0");
#endif

    switch (ctx->pc) {
        case 0x26cd08u: goto label_26cd08;
        case 0x26cd10u: goto label_26cd10;
        case 0x26cd2cu: goto label_26cd2c;
        default: break;
    }

    ctx->pc = 0x26ccf0u;

    // 0x26ccf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ccf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26ccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26ccf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26ccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26ccfc: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x26ccfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26cd00: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CD00u;
    SET_GPR_U32(ctx, 31, 0x26CD08u);
    ctx->pc = 0x26CD04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD00u;
            // 0x26cd04: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD08u; }
        if (ctx->pc != 0x26CD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD08u; }
        if (ctx->pc != 0x26CD08u) { return; }
    }
    ctx->pc = 0x26CD08u;
label_26cd08:
    // 0x26cd08: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26CD08u;
    SET_GPR_U32(ctx, 31, 0x26CD10u);
    ctx->pc = 0x26CD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD08u;
            // 0x26cd0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD10u; }
        if (ctx->pc != 0x26CD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD10u; }
        if (ctx->pc != 0x26CD10u) { return; }
    }
    ctx->pc = 0x26CD10u;
label_26cd10:
    // 0x26cd10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26cd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cd14: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CD14u;
    {
        const bool branch_taken_0x26cd14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26CD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD14u;
            // 0x26cd18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd14) {
            ctx->pc = 0x26CD24u;
            goto label_26cd24;
        }
    }
    ctx->pc = 0x26CD1Cu;
    // 0x26cd1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26CD1Cu;
    {
        const bool branch_taken_0x26cd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD1Cu;
            // 0x26cd20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd1c) {
            ctx->pc = 0x26CD44u;
            goto label_26cd44;
        }
    }
    ctx->pc = 0x26CD24u;
label_26cd24:
    // 0x26cd24: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26CD24u;
    SET_GPR_U32(ctx, 31, 0x26CD2Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD2Cu; }
        if (ctx->pc != 0x26CD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CD2Cu; }
        if (ctx->pc != 0x26CD2Cu) { return; }
    }
    ctx->pc = 0x26CD2Cu;
label_26cd2c:
    // 0x26cd2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26CD2Cu;
    {
        const bool branch_taken_0x26cd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD2Cu;
            // 0x26cd30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd2c) {
            ctx->pc = 0x26CD3Cu;
            goto label_26cd3c;
        }
    }
    ctx->pc = 0x26CD34u;
    // 0x26cd34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26CD34u;
    {
        const bool branch_taken_0x26cd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD34u;
            // 0x26cd38: 0xae020130  sw          $v0, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cd34) {
            ctx->pc = 0x26CD40u;
            goto label_26cd40;
        }
    }
    ctx->pc = 0x26CD3Cu;
label_26cd3c:
    // 0x26cd3c: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x26cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_26cd40:
    // 0x26cd40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26cd44:
    // 0x26cd44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26cd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26cd48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26cd48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26cd4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26cd4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26cd50: 0x3e00008  jr          $ra
    ctx->pc = 0x26CD50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CD50u;
            // 0x26cd54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CD58u;
}
