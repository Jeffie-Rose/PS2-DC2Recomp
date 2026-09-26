#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SCALE_DELAY__FP12RS_STACKDATAi
// Address: 0x272500 - 0x272558
void ps2__OBJS_SCALE_DELAY__FP12RS_STACKDATAi_0x272500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SCALE_DELAY__FP12RS_STACKDATAi_0x272500");
#endif

    switch (ctx->pc) {
        case 0x272514u: goto label_272514;
        case 0x272520u: goto label_272520;
        case 0x27252cu: goto label_27252c;
        case 0x272544u: goto label_272544;
        default: break;
    }

    ctx->pc = 0x272500u;

    // 0x272500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x272504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x272508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x272508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27250c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27250Cu;
    SET_GPR_U32(ctx, 31, 0x272514u);
    ctx->pc = 0x272510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27250Cu;
            // 0x272510: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272514u; }
        if (ctx->pc != 0x272514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272514u; }
        if (ctx->pc != 0x272514u) { return; }
    }
    ctx->pc = 0x272514u;
label_272514:
    // 0x272514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272518: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272518u;
    SET_GPR_U32(ctx, 31, 0x272520u);
    ctx->pc = 0x27251Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272518u;
            // 0x27251c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272520u; }
        if (ctx->pc != 0x272520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272520u; }
        if (ctx->pc != 0x272520u) { return; }
    }
    ctx->pc = 0x272520u;
label_272520:
    // 0x272520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272524: 0xc098a44  jal         func_262910
    ctx->pc = 0x272524u;
    SET_GPR_U32(ctx, 31, 0x27252Cu);
    ctx->pc = 0x272528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272524u;
            // 0x272528: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27252Cu; }
        if (ctx->pc != 0x27252Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27252Cu; }
        if (ctx->pc != 0x27252Cu) { return; }
    }
    ctx->pc = 0x27252Cu;
label_27252c:
    // 0x27252c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27252Cu;
    {
        const bool branch_taken_0x27252c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27252Cu;
            // 0x272530: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27252c) {
            ctx->pc = 0x27253Cu;
            goto label_27253c;
        }
    }
    ctx->pc = 0x272534u;
    // 0x272534: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x272534u;
    {
        const bool branch_taken_0x272534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272534u;
            // 0x272538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272534) {
            ctx->pc = 0x272548u;
            goto label_272548;
        }
    }
    ctx->pc = 0x27253Cu;
label_27253c:
    // 0x27253c: 0xc0974d4  jal         func_25D350
    ctx->pc = 0x27253Cu;
    SET_GPR_U32(ctx, 31, 0x272544u);
    ctx->pc = 0x25D350u;
    if (runtime->hasFunction(0x25D350u)) {
        auto targetFn = runtime->lookupFunction(0x25D350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272544u; }
        if (ctx->pc != 0x272544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ScaleDelay__12CSceneObjSeqFi_0x25d350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272544u; }
        if (ctx->pc != 0x272544u) { return; }
    }
    ctx->pc = 0x272544u;
label_272544:
    // 0x272544: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x272544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272548:
    // 0x272548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x272548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27254c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27254cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272550: 0x3e00008  jr          $ra
    ctx->pc = 0x272550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272550u;
            // 0x272554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x272558u;
}
