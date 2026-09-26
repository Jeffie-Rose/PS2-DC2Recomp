#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MES_NEXTPAGE__FP12RS_STACKDATAi
// Address: 0x26c920 - 0x26c988
void ps2__MES_NEXTPAGE__FP12RS_STACKDATAi_0x26c920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MES_NEXTPAGE__FP12RS_STACKDATAi_0x26c920");
#endif

    switch (ctx->pc) {
        case 0x26c930u: goto label_26c930;
        case 0x26c938u: goto label_26c938;
        case 0x26c978u: goto label_26c978;
        default: break;
    }

    ctx->pc = 0x26c920u;

    // 0x26c920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26c920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26c924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26c924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26c928: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26C928u;
    SET_GPR_U32(ctx, 31, 0x26C930u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C930u; }
        if (ctx->pc != 0x26C930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C930u; }
        if (ctx->pc != 0x26C930u) { return; }
    }
    ctx->pc = 0x26C930u;
label_26c930:
    // 0x26c930: 0xc09b1b4  jal         func_26C6D0
    ctx->pc = 0x26C930u;
    SET_GPR_U32(ctx, 31, 0x26C938u);
    ctx->pc = 0x26C934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C930u;
            // 0x26c934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C6D0u;
    if (runtime->hasFunction(0x26C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x26C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C938u; }
        if (ctx->pc != 0x26C938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMes__Fi_0x26c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C938u; }
        if (ctx->pc != 0x26C938u) { return; }
    }
    ctx->pc = 0x26C938u;
label_26c938:
    // 0x26c938: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C938u;
    {
        const bool branch_taken_0x26c938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c938) {
            ctx->pc = 0x26C948u;
            goto label_26c948;
        }
    }
    ctx->pc = 0x26C940u;
    // 0x26c940: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26C940u;
    {
        const bool branch_taken_0x26c940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C940u;
            // 0x26c944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c940) {
            ctx->pc = 0x26C97Cu;
            goto label_26c97c;
        }
    }
    ctx->pc = 0x26C948u;
label_26c948:
    // 0x26c948: 0x8c4301cc  lw          $v1, 0x1CC($v0)
    ctx->pc = 0x26c948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
    // 0x26c94c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C94Cu;
    {
        const bool branch_taken_0x26c94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c94c) {
            ctx->pc = 0x26C95Cu;
            goto label_26c95c;
        }
    }
    ctx->pc = 0x26C954u;
    // 0x26c954: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26C954u;
    {
        const bool branch_taken_0x26c954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C954u;
            // 0x26c958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c954) {
            ctx->pc = 0x26C97Cu;
            goto label_26c97c;
        }
    }
    ctx->pc = 0x26C95Cu;
label_26c95c:
    // 0x26c95c: 0x8c4301c0  lw          $v1, 0x1C0($v0)
    ctx->pc = 0x26c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x26c960: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C960u;
    {
        const bool branch_taken_0x26c960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C960u;
            // 0x26c964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c960) {
            ctx->pc = 0x26C970u;
            goto label_26c970;
        }
    }
    ctx->pc = 0x26C968u;
    // 0x26c968: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26C968u;
    {
        const bool branch_taken_0x26c968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C968u;
            // 0x26c96c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c968) {
            ctx->pc = 0x26C97Cu;
            goto label_26c97c;
        }
    }
    ctx->pc = 0x26C970u;
label_26c970:
    // 0x26c970: 0xc054fb0  jal         func_153EC0
    ctx->pc = 0x26C970u;
    SET_GPR_U32(ctx, 31, 0x26C978u);
    ctx->pc = 0x153EC0u;
    if (runtime->hasFunction(0x153EC0u)) {
        auto targetFn = runtime->lookupFunction(0x153EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C978u; }
        if (ctx->pc != 0x26C978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GoNextPage__6ClsMesFv_0x153ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C978u; }
        if (ctx->pc != 0x26C978u) { return; }
    }
    ctx->pc = 0x26C978u;
label_26c978:
    // 0x26c978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26c978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c97c:
    // 0x26c97c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c980: 0x3e00008  jr          $ra
    ctx->pc = 0x26C980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C980u;
            // 0x26c984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26C988u;
}
