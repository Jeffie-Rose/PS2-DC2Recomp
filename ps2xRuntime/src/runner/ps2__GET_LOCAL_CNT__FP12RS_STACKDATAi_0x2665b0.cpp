#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_LOCAL_CNT__FP12RS_STACKDATAi
// Address: 0x2665b0 - 0x2665fc
void ps2__GET_LOCAL_CNT__FP12RS_STACKDATAi_0x2665b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_LOCAL_CNT__FP12RS_STACKDATAi_0x2665b0");
#endif

    switch (ctx->pc) {
        case 0x2665c4u: goto label_2665c4;
        case 0x2665ccu: goto label_2665cc;
        case 0x2665e8u: goto label_2665e8;
        default: break;
    }

    ctx->pc = 0x2665b0u;

    // 0x2665b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2665b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2665b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2665b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2665b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2665b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2665bc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2665BCu;
    SET_GPR_U32(ctx, 31, 0x2665C4u);
    ctx->pc = 0x2665C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2665BCu;
            // 0x2665c0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2665C4u; }
        if (ctx->pc != 0x2665C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2665C4u; }
        if (ctx->pc != 0x2665C4u) { return; }
    }
    ctx->pc = 0x2665C4u;
label_2665c4:
    // 0x2665c4: 0xc098434  jal         func_2610D0
    ctx->pc = 0x2665C4u;
    SET_GPR_U32(ctx, 31, 0x2665CCu);
    ctx->pc = 0x2665C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2665C4u;
            // 0x2665c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2610D0u;
    if (runtime->hasFunction(0x2610D0u)) {
        auto targetFn = runtime->lookupFunction(0x2610D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2665CCu; }
        if (ctx->pc != 0x2665CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLocalCnt__Fi_0x2610d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2665CCu; }
        if (ctx->pc != 0x2665CCu) { return; }
    }
    ctx->pc = 0x2665CCu;
label_2665cc:
    // 0x2665cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2665ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2665d0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2665D0u;
    {
        const bool branch_taken_0x2665d0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2665D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2665D0u;
            // 0x2665d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665d0) {
            ctx->pc = 0x2665E0u;
            goto label_2665e0;
        }
    }
    ctx->pc = 0x2665D8u;
    // 0x2665d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2665D8u;
    {
        const bool branch_taken_0x2665d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2665DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2665D8u;
            // 0x2665dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2665d8) {
            ctx->pc = 0x2665ECu;
            goto label_2665ec;
        }
    }
    ctx->pc = 0x2665E0u;
label_2665e0:
    // 0x2665e0: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x2665E0u;
    SET_GPR_U32(ctx, 31, 0x2665E8u);
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2665E8u; }
        if (ctx->pc != 0x2665E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2665E8u; }
        if (ctx->pc != 0x2665E8u) { return; }
    }
    ctx->pc = 0x2665E8u;
label_2665e8:
    // 0x2665e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2665e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2665ec:
    // 0x2665ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2665ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2665f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2665f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2665f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2665F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2665F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2665F4u;
            // 0x2665f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2665FCu;
}
