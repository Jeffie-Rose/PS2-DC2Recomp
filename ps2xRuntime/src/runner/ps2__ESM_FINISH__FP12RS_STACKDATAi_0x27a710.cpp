#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ESM_FINISH__FP12RS_STACKDATAi
// Address: 0x27a710 - 0x27a76c
void ps2__ESM_FINISH__FP12RS_STACKDATAi_0x27a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ESM_FINISH__FP12RS_STACKDATAi_0x27a710");
#endif

    switch (ctx->pc) {
        case 0x27a738u: goto label_27a738;
        case 0x27a744u: goto label_27a744;
        case 0x27a758u: goto label_27a758;
        default: break;
    }

    ctx->pc = 0x27a710u;

    // 0x27a710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27a710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27a714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27a718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27a71c: 0x8f8297ec  lw          $v0, -0x6814($gp)
    ctx->pc = 0x27a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a720: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A720u;
    {
        const bool branch_taken_0x27a720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A720u;
            // 0x27a724: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a720) {
            ctx->pc = 0x27A730u;
            goto label_27a730;
        }
    }
    ctx->pc = 0x27A728u;
    // 0x27a728: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27A728u;
    {
        const bool branch_taken_0x27a728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A728u;
            // 0x27a72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a728) {
            ctx->pc = 0x27A75Cu;
            goto label_27a75c;
        }
    }
    ctx->pc = 0x27A730u;
label_27a730:
    // 0x27a730: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A730u;
    SET_GPR_U32(ctx, 31, 0x27A738u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A738u; }
        if (ctx->pc != 0x27A738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A738u; }
        if (ctx->pc != 0x27A738u) { return; }
    }
    ctx->pc = 0x27A738u;
label_27a738:
    // 0x27a738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a73c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27A73Cu;
    SET_GPR_U32(ctx, 31, 0x27A744u);
    ctx->pc = 0x27A740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A73Cu;
            // 0x27a740: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A744u; }
        if (ctx->pc != 0x27A744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A744u; }
        if (ctx->pc != 0x27A744u) { return; }
    }
    ctx->pc = 0x27A744u;
label_27a744:
    // 0x27a744: 0x8f8497ec  lw          $a0, -0x6814($gp)
    ctx->pc = 0x27a744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940652)));
    // 0x27a748: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27a748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a74c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27a74cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a750: 0xc0b8854  jal         func_2E2150
    ctx->pc = 0x27A750u;
    SET_GPR_U32(ctx, 31, 0x27A758u);
    ctx->pc = 0x27A754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27A750u;
            // 0x27a754: 0x2405012c  addiu       $a1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2150u;
    if (runtime->hasFunction(0x2E2150u)) {
        auto targetFn = runtime->lookupFunction(0x2E2150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A758u; }
        if (ctx->pc != 0x27A758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptProgNo__16CEffectScriptManFiii_0x2e2150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27A758u; }
        if (ctx->pc != 0x27A758u) { return; }
    }
    ctx->pc = 0x27A758u;
label_27a758:
    // 0x27a758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a75c:
    // 0x27a75c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27a75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a764: 0x3e00008  jr          $ra
    ctx->pc = 0x27A764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27A764u;
            // 0x27a768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27A76Cu;
}
