#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_MES_OKURI__FP12RS_STACKDATAi
// Address: 0x26db60 - 0x26dbbc
void ps2__GET_MES_OKURI__FP12RS_STACKDATAi_0x26db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_MES_OKURI__FP12RS_STACKDATAi_0x26db60");
#endif

    switch (ctx->pc) {
        case 0x26db84u: goto label_26db84;
        case 0x26db8cu: goto label_26db8c;
        case 0x26dba8u: goto label_26dba8;
        default: break;
    }

    ctx->pc = 0x26db60u;

    // 0x26db60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26db60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26db64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26db64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26db68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26db68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26db6c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DB6Cu;
    {
        const bool branch_taken_0x26db6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB6Cu;
            // 0x26db70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db6c) {
            ctx->pc = 0x26DB7Cu;
            goto label_26db7c;
        }
    }
    ctx->pc = 0x26DB74u;
    // 0x26db74: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26DB74u;
    {
        const bool branch_taken_0x26db74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB74u;
            // 0x26db78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db74) {
            ctx->pc = 0x26DBACu;
            goto label_26dbac;
        }
    }
    ctx->pc = 0x26DB7Cu;
label_26db7c:
    // 0x26db7c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26DB7Cu;
    SET_GPR_U32(ctx, 31, 0x26DB84u);
    ctx->pc = 0x26DB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB7Cu;
            // 0x26db80: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB84u; }
        if (ctx->pc != 0x26DB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB84u; }
        if (ctx->pc != 0x26DB84u) { return; }
    }
    ctx->pc = 0x26DB84u;
label_26db84:
    // 0x26db84: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26DB84u;
    SET_GPR_U32(ctx, 31, 0x26DB8Cu);
    ctx->pc = 0x26DB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB84u;
            // 0x26db88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB8Cu; }
        if (ctx->pc != 0x26DB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DB8Cu; }
        if (ctx->pc != 0x26DB8Cu) { return; }
    }
    ctx->pc = 0x26DB8Cu;
label_26db8c:
    // 0x26db8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DB8Cu;
    {
        const bool branch_taken_0x26db8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26db8c) {
            ctx->pc = 0x26DB9Cu;
            goto label_26db9c;
        }
    }
    ctx->pc = 0x26DB94u;
    // 0x26db94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26DB94u;
    {
        const bool branch_taken_0x26db94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DB94u;
            // 0x26db98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db94) {
            ctx->pc = 0x26DBACu;
            goto label_26dbac;
        }
    }
    ctx->pc = 0x26DB9Cu;
label_26db9c:
    // 0x26db9c: 0x8c4517f4  lw          $a1, 0x17F4($v0)
    ctx->pc = 0x26db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6132)));
    // 0x26dba0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26DBA0u;
    SET_GPR_U32(ctx, 31, 0x26DBA8u);
    ctx->pc = 0x26DBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26DBA0u;
            // 0x26dba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DBA8u; }
        if (ctx->pc != 0x26DBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26DBA8u; }
        if (ctx->pc != 0x26DBA8u) { return; }
    }
    ctx->pc = 0x26DBA8u;
label_26dba8:
    // 0x26dba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26dbac:
    // 0x26dbac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26dbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26dbb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26dbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26dbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x26DBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DBB4u;
            // 0x26dbb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26DBBCu;
}
