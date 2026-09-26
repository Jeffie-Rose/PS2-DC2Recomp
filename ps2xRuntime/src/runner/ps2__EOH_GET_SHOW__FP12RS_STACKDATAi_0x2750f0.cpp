#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_GET_SHOW__FP12RS_STACKDATAi
// Address: 0x2750f0 - 0x27513c
void ps2__EOH_GET_SHOW__FP12RS_STACKDATAi_0x2750f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_GET_SHOW__FP12RS_STACKDATAi_0x2750f0");
#endif

    switch (ctx->pc) {
        case 0x275104u: goto label_275104;
        case 0x275118u: goto label_275118;
        case 0x27512cu: goto label_27512c;
        default: break;
    }

    ctx->pc = 0x2750f0u;

    // 0x2750f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2750f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2750f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2750f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2750f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2750f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2750fc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2750FCu;
    SET_GPR_U32(ctx, 31, 0x275104u);
    ctx->pc = 0x275100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2750FCu;
            // 0x275100: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275104u; }
        if (ctx->pc != 0x275104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275104u; }
        if (ctx->pc != 0x275104u) { return; }
    }
    ctx->pc = 0x275104u;
label_275104:
    // 0x275104: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x275104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x275108: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x275108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27510c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x27510cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x275110: 0xc097ad8  jal         func_25EB60
    ctx->pc = 0x275110u;
    SET_GPR_U32(ctx, 31, 0x275118u);
    ctx->pc = 0x275114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275110u;
            // 0x275114: 0x27a6002c  addiu       $a2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EB60u;
    if (runtime->hasFunction(0x25EB60u)) {
        auto targetFn = runtime->lookupFunction(0x25EB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275118u; }
        if (ctx->pc != 0x275118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetShow__10CEohMotherFiPi_0x25eb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275118u; }
        if (ctx->pc != 0x275118u) { return; }
    }
    ctx->pc = 0x275118u;
label_275118:
    // 0x275118: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275118u;
    {
        const bool branch_taken_0x275118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275118) {
            ctx->pc = 0x27512Cu;
            goto label_27512c;
        }
    }
    ctx->pc = 0x275120u;
    // 0x275120: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x275120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x275124: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x275124u;
    SET_GPR_U32(ctx, 31, 0x27512Cu);
    ctx->pc = 0x275128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275124u;
            // 0x275128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27512Cu; }
        if (ctx->pc != 0x27512Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27512Cu; }
        if (ctx->pc != 0x27512Cu) { return; }
    }
    ctx->pc = 0x27512Cu;
label_27512c:
    // 0x27512c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27512cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x275130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275134: 0x3e00008  jr          $ra
    ctx->pc = 0x275134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275134u;
            // 0x275138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27513Cu;
}
